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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823b1300
	sub_823B1300(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lfs f13,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lfs f12,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f13
	f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// fmuls f0,f1,f29
	f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,4(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 4);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,8(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 8);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + -31164);
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// and. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r6.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b17e8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B17E8;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// beq 0x823b17c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B17C8;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r6.u64;
	// b 0x823b17cc
	goto loc_823B17CC;
loc_823B17C8:
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r6.u64;
loc_823B17CC:
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// b 0x823b1818
	goto loc_823B1818;
loc_823B17E8:
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// beq 0x823b17f8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B17F8;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r6.u64;
	// b 0x823b17fc
	goto loc_823B17FC;
loc_823B17F8:
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r6.u64;
loc_823B17FC:
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// and ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r10.u64;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
loc_823B1818:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b1920
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B1920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// lfs f12,-1296(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + 20;
	// lfs f10,2688(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// and. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r9.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x823b18e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B18E0;
	// lfs f13,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f1
	f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
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
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// stfsx f10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// b 0x823b18f0
	goto loc_823B18F0;
loc_823B18B0:
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f11
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f11.f64);
	// blt ctx_arrow(ctx)->r6,0x823b18e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B18E4;
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// b 0x823b18f0
	goto loc_823B18F0;
loc_823B18E0:
	// stfs f10,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
loc_823B18E4:
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-1
	xer.ca = ctx_arrow(ctx)->r3.u32 > 0;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,320
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 320;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -31148);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -29852);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -31152);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -31160);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// xori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 ^ 1;
	// stb ctx_arrow(ctx)->r10,318(ctx_arrow(ctx)->r9)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 318));
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r3,318(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-31152
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -31152;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1A14:
	// lwz ctx_arrow(ctx)->r11,1308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,292
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 292;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,296
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 296;
	// stw ctx_arrow(ctx)->r10,276(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 276);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,280(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 280);
	// lwa ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 292);
	// lwa ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 296);
	// beq ctx_arrow(ctx)->r6,0x823b1a84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1A84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,276(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,280(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-31160
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -31160;
	// lwz ctx_arrow(ctx)->r11,1308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1B14:
	// lwz ctx_arrow(ctx)->r11,1316(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,300
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 300;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,304
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 304;
	// stw ctx_arrow(ctx)->r10,284(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 284);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,288(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 288);
	// lwa ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 300);
	// lwa ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 304);
	// beq ctx_arrow(ctx)->r6,0x823b1b84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1B84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,284(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,288(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stb ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stb ctx_arrow(ctx)->r5,81(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 81));
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29844
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29844;
	// lwz ctx_arrow(ctx)->r11,-20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1C18:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lis ctx_arrow(ctx)->r6,4096
	ctx_arrow(ctx)->r6.s64 = 268435456;
	// li ctx_arrow(ctx)->r5,30
	ctx_arrow(ctx)->r5.s64 = 30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r10,316(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 316));
	// lbz ctx_arrow(ctx)->r10,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,317(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 317));
	// lbz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
	// lis ctx_arrow(ctx)->r6,8192
	ctx_arrow(ctx)->r6.s64 = 536870912;
	// lbz ctx_arrow(ctx)->r4,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
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

alias(__imp__sub_823B1C70) PPC_WEAK_FUNC(sub_823B1C70);
PPC_FUNC_IMPL(__imp__sub_823B1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,316(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0));
	// lbz ctx_arrow(ctx)->r11,317(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r5.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// blr 
	return;
}

alias(__imp__sub_823B1C98) PPC_WEAK_FUNC(sub_823B1C98);
PPC_FUNC_IMPL(__imp__sub_823B1C98) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stb ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stb ctx_arrow(ctx)->r5,81(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 81));
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29844
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29844;
	// lwz ctx_arrow(ctx)->r11,-20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b1ce8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1CE8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,-20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + -20;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,81
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 81;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,12288
	ctx_arrow(ctx)->r4.s64 = 12288;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1CE8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,4096
	ctx_arrow(ctx)->r6.s64 = 4096;
	// li ctx_arrow(ctx)->r5,30
	ctx_arrow(ctx)->r5.s64 = 30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r10,308(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 308));
	// lbz ctx_arrow(ctx)->r10,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,309(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 309));
	// lbz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
	// li ctx_arrow(ctx)->r6,8192
	ctx_arrow(ctx)->r6.s64 = 8192;
	// lbz ctx_arrow(ctx)->r4,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
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

alias(__imp__sub_823B1D40) PPC_WEAK_FUNC(sub_823B1D40);
PPC_FUNC_IMPL(__imp__sub_823B1D40) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stb ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stb ctx_arrow(ctx)->r5,81(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 81));
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29844
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29844;
	// lwz ctx_arrow(ctx)->r11,-20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b1d94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1D94;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,-20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + -20;
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,81
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 81;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,49152
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 49152;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1D94:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,16384
	ctx_arrow(ctx)->r6.s64 = 16384;
	// li ctx_arrow(ctx)->r5,30
	ctx_arrow(ctx)->r5.s64 = 30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r10,310(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 310));
	// lbz ctx_arrow(ctx)->r10,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,311(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 311));
	// lbz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
	// lis ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lbz ctx_arrow(ctx)->r4,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,32768
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 32768;
	// bl 0x823b1790
	sub_823B1790(ctx, base);
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

alias(__imp__sub_823B1DF0) PPC_WEAK_FUNC(sub_823B1DF0);
PPC_FUNC_IMPL(__imp__sub_823B1DF0) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stb ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stb ctx_arrow(ctx)->r5,81(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 81));
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29844
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29844;
	// lwz ctx_arrow(ctx)->r11,-20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b1e40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1E40;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,-20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + -20;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,81
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 81;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,768
	ctx_arrow(ctx)->r4.s64 = 768;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1E40:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,512
	ctx_arrow(ctx)->r6.s64 = 512;
	// li ctx_arrow(ctx)->r5,30
	ctx_arrow(ctx)->r5.s64 = 30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r10,315(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 315));
	// lbz ctx_arrow(ctx)->r10,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,314(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 314));
	// lbz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
	// li ctx_arrow(ctx)->r6,256
	ctx_arrow(ctx)->r6.s64 = 256;
	// lbz ctx_arrow(ctx)->r4,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
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

alias(__imp__sub_823B1E98) PPC_WEAK_FUNC(sub_823B1E98);
PPC_FUNC_IMPL(__imp__sub_823B1E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B1EB0) PPC_WEAK_FUNC(sub_823B1EB0);
PPC_FUNC_IMPL(__imp__sub_823B1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r8,32
	ctx_arrow(ctx)->r8.s64 = 32;
	// lwz ctx_arrow(ctx)->r9,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B1EC4:
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r5.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823b1f08
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B1F08;
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r4.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// beq 0x823b1f00
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B1F00;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 & ~ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// b 0x823b1f04
	goto loc_823B1F04;
loc_823B1F00:
	// andc ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 & ~ctx_arrow(ctx)->r10.u64;
loc_823B1F04:
	// stw ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
loc_823B1F08:
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x823b1ec4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823B1EC4;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,0,18,18
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x2000;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,0,17,17
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4000;
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0
	xer.ca = ctx_arrow(ctx)->r8.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r8.s64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0,16,16
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8000;
	// subfe ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r8.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0
	xer.ca = ctx_arrow(ctx)->r7.u32 <= 0;
	ctx_arrow(ctx)->r7.s64 = 0 - ctx_arrow(ctx)->r7.s64;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8;
	// stb ctx_arrow(ctx)->r9,308(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 308));
	// subfe ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r7.u32 < ~ctx_arrow(ctx)->r7.u32) | (~ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r7.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r7.u64 = ~ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r7.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	xer.ca = ctx_arrow(ctx)->r6.u32 <= 0;
	ctx_arrow(ctx)->r6.s64 = 0 - ctx_arrow(ctx)->r6.s64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4;
	// stb ctx_arrow(ctx)->r8,309(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 309));
	// subfe ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r6.u32 < ~ctx_arrow(ctx)->r6.u32) | (~ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r6.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r6.u64 = ~ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r6.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,0
	xer.ca = ctx_arrow(ctx)->r5.u32 <= 0;
	ctx_arrow(ctx)->r5.s64 = 0 - ctx_arrow(ctx)->r5.s64;
	// stb ctx_arrow(ctx)->r7,310(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 310));
	// subfe ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r5.u32 < ~ctx_arrow(ctx)->r5.u32) | (~ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r5.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r5.u64 = ~ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r5.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// stb ctx_arrow(ctx)->r6,311(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 311));
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// stb ctx_arrow(ctx)->r5,315(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 315));
	// stb ctx_arrow(ctx)->r10,314(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 314));
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B1F88) PPC_WEAK_FUNC(sub_823B1F88);
PPC_FUNC_IMPL(__imp__sub_823B1F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B1FA0) PPC_WEAK_FUNC(sub_823B1FA0);
PPC_FUNC_IMPL(__imp__sub_823B1FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r7,32
	ctx_arrow(ctx)->r7.s64 = 32;
	// lwz ctx_arrow(ctx)->r8,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B1FB8:
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r5.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823b2008
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B2008;
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r4.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// beq 0x823b1ffc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B1FFC;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// not ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// and ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 & ctx_arrow(ctx)->r9.u64;
	// or ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r10.u64;
	// and ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// b 0x823b2008
	goto loc_823B2008;
loc_823B1FFC:
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
loc_823B2008:
	// addic. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	xer.ca = ctx_arrow(ctx)->r7.u32 > 0;
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x823b1fb8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823B1FB8;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,0,18,18
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x2000;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,0,17,17
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4000;
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0
	xer.ca = ctx_arrow(ctx)->r8.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r8.s64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0,16,16
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8000;
	// subfe ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r8.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0
	xer.ca = ctx_arrow(ctx)->r7.u32 <= 0;
	ctx_arrow(ctx)->r7.s64 = 0 - ctx_arrow(ctx)->r7.s64;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8;
	// stb ctx_arrow(ctx)->r9,308(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 308));
	// subfe ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r7.u32 < ~ctx_arrow(ctx)->r7.u32) | (~ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r7.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r7.u64 = ~ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r7.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	xer.ca = ctx_arrow(ctx)->r6.u32 <= 0;
	ctx_arrow(ctx)->r6.s64 = 0 - ctx_arrow(ctx)->r6.s64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4;
	// stb ctx_arrow(ctx)->r8,309(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 309));
	// subfe ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r6.u32 < ~ctx_arrow(ctx)->r6.u32) | (~ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r6.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r6.u64 = ~ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r6.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,0
	xer.ca = ctx_arrow(ctx)->r5.u32 <= 0;
	ctx_arrow(ctx)->r5.s64 = 0 - ctx_arrow(ctx)->r5.s64;
	// stb ctx_arrow(ctx)->r7,310(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 310));
	// subfe ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r5.u32 < ~ctx_arrow(ctx)->r5.u32) | (~ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r5.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r5.u64 = ~ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r5.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// stb ctx_arrow(ctx)->r6,311(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 311));
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// stb ctx_arrow(ctx)->r5,315(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 315));
	// stb ctx_arrow(ctx)->r10,314(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 314));
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B2090) PPC_WEAK_FUNC(sub_823B2090);
PPC_FUNC_IMPL(__imp__sub_823B2090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge 0x823b20b4
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823B20B4;
	// li ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = -1;
	// neg ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = -ctx_arrow(ctx)->r11.s64;
	// b 0x823b20b8
	goto loc_823B20B8;
loc_823B20B4:
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
loc_823B20B8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b20cc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B20CC;
	// li ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r31.s64 = -1;
	// neg ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = -ctx_arrow(ctx)->r10.s64;
	// b 0x823b20d0
	goto loc_823B20D0;
loc_823B20CC:
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
loc_823B20D0:
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r3.s64;
	// bgt ctx_arrow(ctx)->r6,0x823b20e4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B20E4;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
loc_823B20E4:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r3.s32, xer);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r3.s64;
	// bgt ctx_arrow(ctx)->r6,0x823b20f4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B20F4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64;
loc_823B20F4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2110
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2110;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2110
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2110;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0);
	// b 0x823b2198
	goto loc_823B2198;
loc_823B2110:
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r5.s32);
	// mullw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r5.s32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r8.s32, xer);
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r4.s32) * int64_t(ctx_arrow(ctx)->r5.s32);
	// bgt ctx_arrow(ctx)->r6,0x823b2134
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B2134;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r5.s64;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// b 0x823b2140
	goto loc_823B2140;
loc_823B2134:
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r5.s64;
	// mullw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r10.u64;
loc_823B2140:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b2188
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B2188;
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r4.s32);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r4.s32);
	// mullw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r5.s32);
	// mullw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r5.s32);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 1);
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 1);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// andc ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r11.u64;
	// andc ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r9.u64;
	// twllei ctx_arrow(ctx)->r10,0
	// twlgei ctx_arrow(ctx)->r3,-1
	// divw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s32 = ctx_arrow(ctx)->r5.s32 / ctx_arrow(ctx)->r10.s32;
	// twlgei ctx_arrow(ctx)->r4,-1
	// twllei ctx_arrow(ctx)->r10,0
	// divw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s32 = ctx_arrow(ctx)->r8.s32 / ctx_arrow(ctx)->r10.s32;
loc_823B2188:
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r30.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r31.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
loc_823B2198:
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B21A8) PPC_WEAK_FUNC(sub_823B21A8);
PPC_FUNC_IMPL(__imp__sub_823B21A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f0,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f12,-22196(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfd f0,27216(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - f0.f64;
	// fsel f11,f11,f13,f0
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// lfd f13,2728(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fsel f11,f10,f13,f11
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// lfs f11,0(ctx_arrow(ctx)->r5)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsub f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 - f0.f64;
	// fsel f0,f11,f12,f0
	f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// fsub f12,f0,f13
	ctx.f12.f64 = f0.f64 - ctx.f13.f64;
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823B2208) PPC_WEAK_FUNC(sub_823B2208);
PPC_FUNC_IMPL(__imp__sub_823B2208) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f0,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f12,-22192(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f13,6580(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f11,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x823b2238
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B2238;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x823b2244
	goto loc_823B2244;
loc_823B2238:
	// fcmpu ctx_arrow(ctx)->r6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f11.f64);
	// ble ctx_arrow(ctx)->r6,0x823b2244
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B2244;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823B2244:
	// stfs f0,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// lfs f0,0(ctx_arrow(ctx)->r5)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x823b2260
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B2260;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x823b226c
	goto loc_823B226C;
loc_823B2260:
	// fcmpu ctx_arrow(ctx)->r6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f11.f64);
	// ble ctx_arrow(ctx)->r6,0x823b226c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B226C;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823B226C:
	// stfs f0,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823B2278) PPC_WEAK_FUNC(sub_823B2278);
PPC_FUNC_IMPL(__imp__sub_823B2278) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,40
	ctx_arrow(ctx)->r5.s64 = 40;
	// li ctx_arrow(ctx)->r4,72
	ctx_arrow(ctx)->r4.s64 = 72;
	// li ctx_arrow(ctx)->r3,15
	ctx_arrow(ctx)->r3.s64 = 15;
	// lwa ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
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
	// lfs f0,-22208(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32);
	// lwa ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32);
	// bl 0x823b2090
	sub_823B2090(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B22F8) PPC_WEAK_FUNC(sub_823B22F8);
PPC_FUNC_IMPL(__imp__sub_823B22F8) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,31
	ctx_arrow(ctx)->r5.s64 = 31;
	// li ctx_arrow(ctx)->r4,59
	ctx_arrow(ctx)->r4.s64 = 59;
	// li ctx_arrow(ctx)->r3,15
	ctx_arrow(ctx)->r3.s64 = 15;
	// lwa ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
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
	// lfs f0,-22204(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32);
	// lwa ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32);
	// bl 0x823b2090
	sub_823B2090(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B2378) PPC_WEAK_FUNC(sub_823B2378);
PPC_FUNC_IMPL(__imp__sub_823B2378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,190
	ctx_arrow(ctx)->r9.s64 = 190;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
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
	// lfs f0,-22200(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lbz ctx_arrow(ctx)->r11,-9(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r5.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lfd f13,-16(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lbz ctx_arrow(ctx)->r11,-9(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r6.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 40, xer);
	// bge ctx_arrow(ctx)->r6,0x823b23ec
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B23EC;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r5)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0));
	// b 0x823b2404
	goto loc_823B2404;
loc_823B23EC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,190
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 190, xer);
	// ble ctx_arrow(ctx)->r6,0x823b23f8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B23F8;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r5)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0));
loc_823B23F8:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,216
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 216;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r5.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823B2404:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 40, xer);
	// bge ctx_arrow(ctx)->r6,0x823b2418
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B2418;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0));
	// blr 
	return;
loc_823B2418:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,190
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 190, xer);
	// ble ctx_arrow(ctx)->r6,0x823b2424
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B2424;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r6)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0));
loc_823B2424:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,216
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 216;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r6.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// blr 
	return;
}

alias(__imp__sub_823B2438) PPC_WEAK_FUNC(sub_823B2438);
PPC_FUNC_IMPL(__imp__sub_823B2438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lis ctx_arrow(ctx)->r4,-32197
	ctx_arrow(ctx)->r4.s64 = -2110062592;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-31160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -31160;
	// lis ctx_arrow(ctx)->r5,-32197
	ctx_arrow(ctx)->r5.s64 = -2110062592;
	// lfs f0,2776(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r6,-32197
	ctx_arrow(ctx)->r6.s64 = -2110062592;
	// lis ctx_arrow(ctx)->r7,-32197
	ctx_arrow(ctx)->r7.s64 = -2110062592;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// lfs f0,2688(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32197
	ctx_arrow(ctx)->r9.s64 = -2110062592;
	// stfs f0,1300(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1300);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8824
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8824;
	// stw ctx_arrow(ctx)->r8,1316(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1316);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,8952
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 8952;
	// stw ctx_arrow(ctx)->r9,1308(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1308);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,9080
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r5.s64 + 9080;
	// stw ctx_arrow(ctx)->r9,1296(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1296);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,8616
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r6.s64 + 8616;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,8712
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r7.s64 + 8712;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r9,1304(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1304);
	// li ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = 4;
	// stw ctx_arrow(ctx)->r9,1312(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1312);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823B24C0) PPC_WEAK_FUNC(sub_823B24C0);
PPC_FUNC_IMPL(__imp__sub_823B24C0) {
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
	// bl 0x823b2438
	sub_823B2438(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29840
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29840;
	// lbz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x823b2504
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823B2504;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 20;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
loc_823B2504:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stbx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx)->r31.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b1968
	sub_823B1968(ctx, base);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2504
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2504;
	// bl 0x823b2750
	sub_823B2750(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 104, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
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

alias(__imp__sub_823B2548) PPC_WEAK_FUNC(sub_823B2548);
PPC_FUNC_IMPL(__imp__sub_823B2548) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-29840
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -29840;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 + 40;
loc_823B2570:
	// lhz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 4);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// bl 0x824082e8
	sub_824082E8(&ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// lbzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// beq 0x823b25a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B25A4;
	// bl 0x823b19b0
	sub_823B19B0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823b25bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B25BC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x823b25b4
	goto loc_823B25B4;
loc_823B25A4:
	// bl 0x823b19b0
	sub_823B19B0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x823b25bc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823B25BC;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
loc_823B25B4:
	// lbzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1968
	sub_823B1968(ctx, base);
loc_823B25BC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,40
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 40;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 16;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2570
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2570;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,40
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 40;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 4;
loc_823B25E8:
	// lbzx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// lha ctx_arrow(ctx)->r5,6(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 6));
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lha ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 4));
	// bl 0x823b19c8
	sub_823B19C8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lha ctx_arrow(ctx)->r5,10(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 10));
	// lha ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 8));
	// bl 0x823b1ac8
	sub_823B1AC8(ctx, base);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 0);
	// lis ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,63487
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 63487;
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64 ^ ctx_arrow(ctx)->r11.u64;
	// and ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// bl 0x823b1eb0
	sub_823B1EB0(ctx, base);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 0);
	// lis ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r28.u64;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,63487
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 63487;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// and ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r28.u64;
	// bl 0x823b1fa0
	sub_823B1FA0(ctx, base);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bl 0x823b1c98
	sub_823B1C98(ctx, base);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,17,17
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,16
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFF8000;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bl 0x823b1d40
	sub_823B1D40(ctx, base);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,22,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x200;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,23,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x100;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bl 0x823b1df0
	sub_823B1DF0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lbz ctx_arrow(ctx)->r5,3(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r4,2(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823b1bc8
	sub_823B1BC8(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,40
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 40;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b25e8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B25E8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823b1820
	sub_823B1820(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823b27d8
	sub_823B27D8(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823B2710:
	// lbzx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b28b8
	sub_823B28B8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823b2738
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B2738;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x824082f8
	sub_824082F8(ctx, base);
loc_823B2738:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2710
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2710;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f31,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed180
	return;
}

alias(__imp__sub_823B2750) PPC_WEAK_FUNC(sub_823B2750);
PPC_FUNC_IMPL(__imp__sub_823B2750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-29728
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -29728;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 1;
loc_823B2764:
	// stb ctx_arrow(ctx)->r8,-1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -1));
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,97
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 97;
	// stb ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// stb ctx_arrow(ctx)->r9,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// stb ctx_arrow(ctx)->r9,19(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 19));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2764
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2764;
	// blr 
	return;
}

alias(__imp__sub_823B2788) PPC_WEAK_FUNC(sub_823B2788);
PPC_FUNC_IMPL(__imp__sub_823B2788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-29728
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -29728;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 * 24;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + 12;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r8.u32);
	// lbzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r6.u32);
	// stbx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r9.u32));
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 20;
	// stbx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32));
	// blr 
	return;
}

alias(__imp__sub_823B27D8) PPC_WEAK_FUNC(sub_823B27D8);
PPC_FUNC_IMPL(__imp__sub_823B27D8) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-29728
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -29728;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 16;
	// lfs f13,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
loc_823B2808:
	// lfs f0,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// beq ctx_arrow(ctx)->r6,0x823b2838
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B2838;
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bgt ctx_arrow(ctx)->r6,0x823b2830
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B2830;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// bl 0x823b2788
	sub_823B2788(ctx, base);
	// b 0x823b2838
	goto loc_823B2838;
loc_823B2830:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r5)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r5.u32 + 4, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823B2838:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 24;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 112;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2808
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2808;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 12;
	// lfd f0,-22184(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
loc_823B285C:
	// lfs f13,-4(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,108
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 108;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lhz ctx_arrow(ctx)->r8,86(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 86);
	// sth ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_STORE_U16(ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r8.u16);
	// lfs f13,0(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lhz ctx_arrow(ctx)->r9,86(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 86);
	// sth ctx_arrow(ctx)->r9,2(ctx_arrow(ctx)->r10)
	PPC_STORE_U16(ctx_arrow(ctx)->r10.u32 + 2, ctx_arrow(ctx)->r9.u16);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// blt ctx_arrow(ctx)->r6,0x823b285c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B285C;
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

alias(__imp__sub_823B28B8) PPC_WEAK_FUNC(sub_823B28B8);
PPC_FUNC_IMPL(__imp__sub_823B28B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-29728
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -29728;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 20;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// lbzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32));
	// blr 
	return;
}

alias(__imp__sub_823B28E0) PPC_WEAK_FUNC(sub_823B28E0);
PPC_FUNC_IMPL(__imp__sub_823B28E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-29728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -29728;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 24;
	// lfd f12,2752(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fsel f11,f0,f0,f12
	ctx.f11.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// lfd f0,2728(ctx_arrow(ctx)->r8)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// fsub f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 - f0.f64;
	// fsub f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 - f0.f64;
	// fsel f12,f12,f0,f11
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// fsel f13,f10,f0,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// lfs f12,2688(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f12
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f12.f64);
	// bne ctx_arrow(ctx)->r6,0x823b2978
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2978;
	// fcmpu ctx_arrow(ctx)->r6,f13,f12
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne ctx_arrow(ctx)->r6,0x823b2978
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2978;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// stfs f13,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// stfs f3,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// stb ctx_arrow(ctx)->r3,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 5));
	// stb ctx_arrow(ctx)->r7,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32));
	// stb ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20));
	// blr 
	return;
loc_823B2978:
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// stfs f0,8(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stfs f13,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// fcmpu ctx_arrow(ctx)->r6,f3,f12
	ctx_arrow(ctx)->r6.compare(ctx.f3.f64, ctx.f12.f64);
	// stfs f3,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// stb ctx_arrow(ctx)->r3,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 5));
	// stb ctx_arrow(ctx)->r8,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// stb ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20));
	// bne ctx_arrow(ctx)->r6,0x823b29a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B29A8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32));
	// blr 
	return;
loc_823B29A8:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// stbx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// blr 
	return;
}

alias(__imp__sub_823B29B8) PPC_WEAK_FUNC(sub_823B29B8);
PPC_FUNC_IMPL(__imp__sub_823B29B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 8);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 12);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 16);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 12);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 16);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,6
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 6;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 8);
	// blr 
	return;
}

alias(__imp__sub_823B2A10) PPC_WEAK_FUNC(sub_823B2A10);
PPC_FUNC_IMPL(__imp__sub_823B2A10) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240bba0
	sub_8240BBA0(ctx, base);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 0);
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823b2a50
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B2A50;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823B2A50:
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

alias(__imp__sub_823B2A68) PPC_WEAK_FUNC(sub_823B2A68);
PPC_FUNC_IMPL(__imp__sub_823B2A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stw ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B2A80) PPC_WEAK_FUNC(sub_823B2A80);
PPC_FUNC_IMPL(__imp__sub_823B2A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B2A90) PPC_WEAK_FUNC(sub_823B2A90);
PPC_FUNC_IMPL(__imp__sub_823B2A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823B2AA0) PPC_WEAK_FUNC(sub_823B2AA0);
PPC_FUNC_IMPL(__imp__sub_823B2AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823B2AC0) PPC_WEAK_FUNC(sub_823B2AC0);
PPC_FUNC_IMPL(__imp__sub_823B2AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B2AC8) PPC_WEAK_FUNC(sub_823B2AC8);
PPC_FUNC_IMPL(__imp__sub_823B2AC8) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// blr 
	return;
}

alias(__imp__sub_823B2AD0) PPC_WEAK_FUNC(sub_823B2AD0);
PPC_FUNC_IMPL(__imp__sub_823B2AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823B2AE8) PPC_WEAK_FUNC(sub_823B2AE8);
PPC_FUNC_IMPL(__imp__sub_823B2AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

alias(__imp__sub_823B2AF8) PPC_WEAK_FUNC(sub_823B2AF8);
PPC_FUNC_IMPL(__imp__sub_823B2AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,29,3,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r8.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b2c30
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B2C30;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b2b7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B2B7C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2b7c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2B7C;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,8
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 8;
	ctx_arrow(ctx)->r10.s64 = 8 - ctx_arrow(ctx)->r9.s64;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,255
	ctx_arrow(ctx)->r6.s64 = 255;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r10.s64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lbzx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r4.u64 & ~ctx_arrow(ctx)->r6.u64;
	// srw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r4.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r30.u64;
	// stbx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r8.u32));
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B2B7C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2bbc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2BBC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,29,3,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r9.s64;
loc_823B2B90:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,24,8,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stbx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r8.u32));
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// bne ctx_arrow(ctx)->r6,0x823b2b90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2B90;
loc_823B2BBC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b2c34
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B2C34;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// not ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ~ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// beq ctx_arrow(ctx)->r6,0x823b2c10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B2C10;
	// and ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 & ctx_arrow(ctx)->r4.u64;
	// slw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r7.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// lbzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r7.u64;
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32));
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823B2C10:
	// and ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64 & ctx_arrow(ctx)->r4.u64;
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32));
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823B2C30:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B2C34:
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B2C40) PPC_WEAK_FUNC(sub_823B2C40);
PPC_FUNC_IMPL(__imp__sub_823B2C40) {
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
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b2cb0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B2CB0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b2c98
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B2C98;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,32,32
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 32) & 0xFFFFFFFF;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,-32
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + -32;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
	// li ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.s64 = 32;
loc_823B2C98:
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B2CB0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B2CC0) PPC_WEAK_FUNC(sub_823B2CC0);
PPC_FUNC_IMPL(__imp__sub_823B2CC0) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2d1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2D1C;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b2d1c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B2D1C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B2D1C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B2D28) PPC_WEAK_FUNC(sub_823B2D28);
PPC_FUNC_IMPL(__imp__sub_823B2D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b2d74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B2D74;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2d74
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2D74;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,8
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 8;
	ctx_arrow(ctx)->r10.s64 = 8 - ctx_arrow(ctx)->r9.s64;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r10.s64;
	// lbzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// srw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r7.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
loc_823B2D74:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x823b2db4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2DB4;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,29,3,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r8.s64;
loc_823B2D8C:
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// lbzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// slw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// or ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r3.u64;
	// bne ctx_arrow(ctx)->r6,0x823b2d8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2D8C;
loc_823B2DB4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = -1;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lbzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r4.u64;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,24
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 & 0xFF;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// slw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r7.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ~ctx_arrow(ctx)->r7.u64;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r3.u64;
	// blr 
	return;
}

alias(__imp__sub_823B2DF8) PPC_WEAK_FUNC(sub_823B2DF8);
PPC_FUNC_IMPL(__imp__sub_823B2DF8) {
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
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b2e28
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B2E28;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,-32
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + -32;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// rldicr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3,32,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u64, 32) & 0xFFFFFFFF00000000;
loc_823B2E28:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 & 0xFFFFFFFF;
	// or ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r5.u64;
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

alias(__imp__sub_823B2E50) PPC_WEAK_FUNC(sub_823B2E50);
PPC_FUNC_IMPL(__imp__sub_823B2E50) {
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
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r5.s64 + -1;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b2e88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B2E88;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r3.u64;
loc_823B2E88:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B2E98) PPC_WEAK_FUNC(sub_823B2E98);
PPC_FUNC_IMPL(__imp__sub_823B2E98) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b2edc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B2EDC;
loc_823B2EBC:
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + -1;
	// stb ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0));
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b2ebc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B2EBC;
loc_823B2EDC:
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

alias(__imp__sub_823B2EF8) PPC_WEAK_FUNC(sub_823B2EF8);
PPC_FUNC_IMPL(__imp__sub_823B2EF8) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 4);
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

alias(__imp__sub_823B2F40) PPC_WEAK_FUNC(sub_823B2F40);
PPC_FUNC_IMPL(__imp__sub_823B2F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823B2F50:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2f50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2F50;
	// blr 
	return;
}

alias(__imp__sub_823B2F68) PPC_WEAK_FUNC(sub_823B2F68);
PPC_FUNC_IMPL(__imp__sub_823B2F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32768
	ctx_arrow(ctx)->r11.s64 = -2147483648;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2f7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2F7C;
	// lis ctx_arrow(ctx)->r11,-32768
	ctx_arrow(ctx)->r11.s64 = -2147483648;
	// b 0x823b2f8c
	goto loc_823B2F8C;
loc_823B2F7C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// neg ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = -ctx_arrow(ctx)->r3.s64;
	// blt ctx_arrow(ctx)->r6,0x823b2f8c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B2F8C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 1;
loc_823B2F8C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823B2F9C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2f9c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2F9C;
	// blr 
	return;
}

alias(__imp__sub_823B2FB0) PPC_WEAK_FUNC(sub_823B2FB0);
PPC_FUNC_IMPL(__imp__sub_823B2FB0) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b2fe0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B2FE0;
	// bl 0x823b2cc0
	sub_823B2CC0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B2FE0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 7;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b3038
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B3038;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b302c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B302C;
loc_823B300C:
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// lbz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + -1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b300c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B300C;
loc_823B302C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B3038:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B3048) PPC_WEAK_FUNC(sub_823B3048);
PPC_FUNC_IMPL(__imp__sub_823B3048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mftb ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = __rdtsc();
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,17222
	ctx_arrow(ctx)->r11.s64 = 1128660992;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1881
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1881;
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 32) & 0xFFFFFFFF00000000;
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,36509
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2392653824;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,37069
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 37069;
	// ld ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1250
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 1250;
	// std ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// ld ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// mulhdu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,50,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 50) & 0x3FFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// ld ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3088) PPC_WEAK_FUNC(sub_823B3088);
PPC_FUNC_IMPL(__imp__sub_823B3088) {
	PPC_FUNC_PROLOGUE();
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-29632
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -29632;
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// stw ctx_arrow(ctx)->r3,92(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 92);
	// stw ctx_arrow(ctx)->r4,19620(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 19620);
	// bl 0x823b3048
	sub_823B3048(&ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// std ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 24);
	// std ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 48);
	// std ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 32);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stfs f0,68(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 68);
	// stfs f0,44(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 44);
	// stfs f0,16(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 16);
	// stfs f0,64(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 64);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// stfs f0,60(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 60);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 84);
	// std ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 56);
	// std ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 72);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 20);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 100);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B3108) PPC_WEAK_FUNC(sub_823B3108);
PPC_FUNC_IMPL(__imp__sub_823B3108) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-29632
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -29632;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3294
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3294;
	// ld ctx_arrow(ctx)->r8,32(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r8,48(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 48);
	// bl 0x823b3048
	sub_823B3048(&ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r8.s64;
	// lwz ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = 983040;
	// std ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16960
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16960;
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r11.u64, xer);
	// stw ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 80);
	// ble ctx_arrow(ctx)->r6,0x823b3164
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B3164;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
loc_823B3164:
	// clrldi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,6815
	ctx_arrow(ctx)->r10.s64 = 446627840;
	// lis ctx_arrow(ctx)->r7,1572
	ctx_arrow(ctx)->r7.s64 = 103022592;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,48759
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 48759;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,56623
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 56623;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// std ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// rldimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,32,0
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// std ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8);
	// mulhdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,63,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,55,9
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 55) & 0x7FFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 56);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,16500(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,68(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 68);
	// lfs f11,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 / f0.f64));
	// stfs f13,44(ctx_arrow(ctx)->r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 44);
	// bne ctx_arrow(ctx)->r6,0x823b33b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B33B0;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// lfs f13,19616(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// bne ctx_arrow(ctx)->r6,0x823b3200
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3200;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// b 0x823b321c
	goto loc_823B321C;
loc_823B3200:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lfs f0,40(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 88);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,16140(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_823B321C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f0,16(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 16);
	// lfs f12,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f12
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f12.f64);
	// ble ctx_arrow(ctx)->r6,0x823b323c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B323C;
	// fdivs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 / f0.f64));
	// stfs f0,64(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 64);
	// b 0x823b3240
	goto loc_823B3240;
loc_823B323C:
	// stfs f12,64(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 64);
loc_823B3240:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctidz f0,f13
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// ld ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// std ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 72);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,60(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,60(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 60);
	// fcmpu ctx_arrow(ctx)->r6,f0,f11
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f11.f64);
	// blt ctx_arrow(ctx)->r6,0x823b3484
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B3484;
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// b 0x823b3478
	goto loc_823B3478;
loc_823B3294:
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 48);
	// bl 0x823b3048
	sub_823B3048(&ctx);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,17179
	ctx_arrow(ctx)->r4.s64 = 1125842944;
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// std ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 32);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r10.s64;
	// lis ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 458752;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,56962
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 56962;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,41248
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64 | 41248;
	// lis ctx_arrow(ctx)->r10,-10314
	ctx_arrow(ctx)->r10.s64 = -675938304;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,19616
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 19616;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,13531
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 13531;
	// rldimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32,0
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// extsw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s32;
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 80);
	// mulld ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 * ctx_arrow(ctx)->r8.s64;
	// lwz ctx_arrow(ctx)->r7,96(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r6.u64;
	// mulhdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	// rldicl ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,46,18
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 46) & 0x3FFFFFFFFFFF;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r7.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b330c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B330C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 1;
loc_823B330C:
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r7.s64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b331c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B331C;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64;
loc_823B331C:
	// extsw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s32;
	// stw ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 96);
	// clrldi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFF;
	// lis ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = 983040;
	// clrldi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16960
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16960;
	// std ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// std ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// clrldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFF;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,1000
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 * 1000;
	// mulld ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 * ctx_arrow(ctx)->r4.s64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// mulld ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r6.s64 * ctx_arrow(ctx)->r11.s64;
	// divdu ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64 / ctx_arrow(ctx)->r8.u64;
	// divdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 / ctx_arrow(ctx)->r8.u64;
	// divdu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 / ctx_arrow(ctx)->r8.u64;
	// tdllei ctx_arrow(ctx)->r8,0
	// tdllei ctx_arrow(ctx)->r8,0
	// tdllei ctx_arrow(ctx)->r8,0
	// stw ctx_arrow(ctx)->r6,56(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 56);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f12,2776(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,68(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 68);
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f13,44(ctx_arrow(ctx)->r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 44);
	// beq ctx_arrow(ctx)->r6,0x823b33d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B33D0;
loc_823B33B0:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 16);
	// stfs f0,64(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 64);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823B33D0:
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f13,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3400
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3400;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f11,88(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// b 0x823b341c
	goto loc_823B341C;
loc_823B3400:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lfs f0,40(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 88);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,16140(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_823B341C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctidz f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfs f0,16(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 16);
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f0,64(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 64);
	// stfiwx f11,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// ld ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r8,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 72);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,60(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,60(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 60);
	// fcmpu ctx_arrow(ctx)->r6,f0,f12
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f12.f64);
	// blt ctx_arrow(ctx)->r6,0x823b3484
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B3484;
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
loc_823B3478:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stfs f0,60(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 60);
	// std ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 72);
loc_823B3484:
	// lis ctx_arrow(ctx)->r10,6815
	ctx_arrow(ctx)->r10.s64 = 446627840;
	// lis ctx_arrow(ctx)->r8,1572
	ctx_arrow(ctx)->r8.s64 = 103022592;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,48759
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 48759;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,56623
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 56623;
	// rldimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,32,0
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF);
	// mulhdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,63,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,55,9
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 55) & 0x7FFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 20);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B34C0) PPC_WEAK_FUNC(sub_823B34C0);
PPC_FUNC_IMPL(__imp__sub_823B34C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-29592
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -29592;
	// stfs f1,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 48);
	// b 0x823b3108
	sub_823B3108(&ctx);
	return;
}

alias(__imp__sub_823B34D8) PPC_WEAK_FUNC(sub_823B34D8);
PPC_FUNC_IMPL(__imp__sub_823B34D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r3,-29552(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B34E8) PPC_WEAK_FUNC(sub_823B34E8);
PPC_FUNC_IMPL(__imp__sub_823B34E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lfs f1,-29564(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_823B34F8) PPC_WEAK_FUNC(sub_823B34F8);
PPC_FUNC_IMPL(__imp__sub_823B34F8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x823b3048
	sub_823B3048(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// ld ctx_arrow(ctx)->r11,-29608(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B3528) PPC_WEAK_FUNC(sub_823B3528);
PPC_FUNC_IMPL(__imp__sub_823B3528) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x823b3048
	sub_823B3048(&ctx);
	// lis ctx_arrow(ctx)->r11,6815
	ctx_arrow(ctx)->r11.s64 = 446627840;
	// lis ctx_arrow(ctx)->r10,1572
	ctx_arrow(ctx)->r10.s64 = 103022592;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,48759
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 48759;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,56623
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 56623;
	// rldimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,32,0
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// ld ctx_arrow(ctx)->r11,-29608(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// mulhdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
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
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B3588) PPC_WEAK_FUNC(sub_823B3588);
PPC_FUNC_IMPL(__imp__sub_823B3588) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x823b3048
	sub_823B3048(&ctx);
	// lis ctx_arrow(ctx)->r11,6815
	ctx_arrow(ctx)->r11.s64 = 446627840;
	// lis ctx_arrow(ctx)->r10,1572
	ctx_arrow(ctx)->r10.s64 = 103022592;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,48759
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 48759;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,56623
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 56623;
	// rldimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,32,0
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// ld ctx_arrow(ctx)->r11,-29608(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// mulhdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,63,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,55,32
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 55) & 0xFFFFFFFF;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,14440(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B3600) PPC_WEAK_FUNC(sub_823B3600);
PPC_FUNC_IMPL(__imp__sub_823B3600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r3,-29576(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3610) PPC_WEAK_FUNC(sub_823B3610);
PPC_FUNC_IMPL(__imp__sub_823B3610) {
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
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3658
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3658;
loc_823B3630:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7248
	sub_823B7248(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b7248
	sub_823B7248(ctx, base);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r3.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b36a0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B36A0;
	// lwz ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3630
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3630;
loc_823B3658:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3668
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3668;
	// stw ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
loc_823B3668:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 24);
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
loc_823B3674:
	// stw ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3688
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3688;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
loc_823B3688:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 8);
	// stw ctx_arrow(ctx)->r29,20(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 20);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B36A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3658
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3658;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b36b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B36B8;
	// stw ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
loc_823B36B8:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 24);
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// b 0x823b3674
	goto loc_823B3674;
}

alias(__imp__sub_823B36C8) PPC_WEAK_FUNC(sub_823B36C8);
PPC_FUNC_IMPL(__imp__sub_823B36C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b36f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B36F8;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
	// b 0x823b36fc
	goto loc_823B36FC;
loc_823B36F8:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
loc_823B36FC:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3720
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3720;
loc_823B3710:
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3710
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3710;
loc_823B3720:
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 8);
	// blr 
	return;
}

alias(__imp__sub_823B3748) PPC_WEAK_FUNC(sub_823B3748);
PPC_FUNC_IMPL(__imp__sub_823B3748) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b7f10
	sub_823B7F10(&ctx);
	return;
}

alias(__imp__sub_823B3750) PPC_WEAK_FUNC(sub_823B3750);
PPC_FUNC_IMPL(__imp__sub_823B3750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-496(ctx_arrow(ctx)->r1)
	ea = -496 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,-20928(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,-23064(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + -23064);
	// stw ctx_arrow(ctx)->r9,480(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 480);
	// bl 0x823bc540
	sub_823BC540(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b37d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B37D4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r3,514
	ctx_arrow(ctx)->r3.s64 = 514;
	// bl 0x823bd4c0
	sub_823BD4C0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b37d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B37D4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,10091
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 10091, xer);
	// bne ctx_arrow(ctx)->r6,0x823b37ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B37AC;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-22000
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -22000;
	// b 0x823b37d0
	goto loc_823B37D0;
loc_823B37AC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,10092
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 10092, xer);
	// bne ctx_arrow(ctx)->r6,0x823b37c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B37C0;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-22112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -22112;
	// b 0x823b37d0
	goto loc_823B37D0;
loc_823B37C0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,10055
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 10055, xer);
	// bne ctx_arrow(ctx)->r6,0x823b37d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B37D4;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-22176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -22176;
loc_823B37D0:
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B37D4:
	// lwz ctx_arrow(ctx)->r3,480(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,496
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 496;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B37F0) PPC_WEAK_FUNC(sub_823B37F0);
PPC_FUNC_IMPL(__imp__sub_823B37F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 68);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 76);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 80);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 84);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 88);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 92);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 96);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 100);
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 104);
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 108);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 112);
	// blr 
	return;
}

alias(__imp__sub_823B3828) PPC_WEAK_FUNC(sub_823B3828);
PPC_FUNC_IMPL(__imp__sub_823B3828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r3,-20940(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3838) PPC_WEAK_FUNC(sub_823B3838);
PPC_FUNC_IMPL(__imp__sub_823B3838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20932
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20932;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r3.s32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// blr 
	return;
}

alias(__imp__sub_823B3858) PPC_WEAK_FUNC(sub_823B3858);
PPC_FUNC_IMPL(__imp__sub_823B3858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B3880) PPC_WEAK_FUNC(sub_823B3880);
PPC_FUNC_IMPL(__imp__sub_823B3880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// li ctx_arrow(ctx)->r9,1000
	ctx_arrow(ctx)->r9.s64 = 1000;
	// sth ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r10.u16);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// sth ctx_arrow(ctx)->r9,18(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + 18, ctx_arrow(ctx)->r9.u16);
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
	// blr 
	return;
}

alias(__imp__sub_823B38B0) PPC_WEAK_FUNC(sub_823B38B0);
PPC_FUNC_IMPL(__imp__sub_823B38B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B38D8) PPC_WEAK_FUNC(sub_823B38D8);
PPC_FUNC_IMPL(__imp__sub_823B38D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-21008(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -21008);
	// blr 
	return;
}

alias(__imp__sub_823B38E8) PPC_WEAK_FUNC(sub_823B38E8);
PPC_FUNC_IMPL(__imp__sub_823B38E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-21004(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -21004);
	// blr 
	return;
}

alias(__imp__sub_823B38F8) PPC_WEAK_FUNC(sub_823B38F8);
PPC_FUNC_IMPL(__imp__sub_823B38F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-21000(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -21000);
	// blr 
	return;
}

alias(__imp__sub_823B3908) PPC_WEAK_FUNC(sub_823B3908);
PPC_FUNC_IMPL(__imp__sub_823B3908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20996(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20996);
	// blr 
	return;
}

alias(__imp__sub_823B3918) PPC_WEAK_FUNC(sub_823B3918);
PPC_FUNC_IMPL(__imp__sub_823B3918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20992(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20992);
	// blr 
	return;
}

alias(__imp__sub_823B3928) PPC_WEAK_FUNC(sub_823B3928);
PPC_FUNC_IMPL(__imp__sub_823B3928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20984
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20984;
	// stw ctx_arrow(ctx)->r3,-4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -4);
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823B3940) PPC_WEAK_FUNC(sub_823B3940);
PPC_FUNC_IMPL(__imp__sub_823B3940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20980(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20980);
	// blr 
	return;
}

alias(__imp__sub_823B3950) PPC_WEAK_FUNC(sub_823B3950);
PPC_FUNC_IMPL(__imp__sub_823B3950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20976(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20976);
	// blr 
	return;
}

alias(__imp__sub_823B3960) PPC_WEAK_FUNC(sub_823B3960);
PPC_FUNC_IMPL(__imp__sub_823B3960) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r31,-32016
	ctx_arrow(ctx)->r31.s64 = -2098200576;
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// lwz ctx_arrow(ctx)->r11,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bne ctx_arrow(ctx)->r6,0x823b3a08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3A08;
	// li ctx_arrow(ctx)->r5,254
	ctx_arrow(ctx)->r5.s64 = 254;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// bl 0x823bd4d0
	sub_823BD4D0(ctx, base);
	// stw ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 19624);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b39b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B39B0;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
	// b 0x823b3a14
	goto loc_823B3A14;
loc_823B39B0:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// lis ctx_arrow(ctx)->r4,-32764
	ctx_arrow(ctx)->r4.s64 = -2147221504;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,26238
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 26238;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x823bd4e8
	sub_823BD4E8(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b39d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B39D4;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B39D4:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// lwz ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// sth ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r11, 0);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// li ctx_arrow(ctx)->r11,1000
	ctx_arrow(ctx)->r11.s64 = 1000;
	// sth ctx_arrow(ctx)->r11,98(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 98, ctx_arrow(ctx)->r11, 0);
	// bl 0x823bd520
	sub_823BD520(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3a08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3A08;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B3A08:
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,-23064(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + -23064);
loc_823B3A14:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3A30) PPC_WEAK_FUNC(sub_823B3A30);
PPC_FUNC_IMPL(__imp__sub_823B3A30) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// bl 0x823bc5a8
	sub_823BC5A8(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3aa0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3AA0;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823B3AA0:
	// lwz ctx_arrow(ctx)->r3,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
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

alias(__imp__sub_823B3AC0) PPC_WEAK_FUNC(sub_823B3AC0);
PPC_FUNC_IMPL(__imp__sub_823B3AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-20944
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -20944;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B3AE0:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3af8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3AF8;
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3b0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3B0C;
loc_823B3AF8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b3ae0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B3AE0;
	// blr 
	return;
loc_823B3B0C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// blr 
	return;
}

alias(__imp__sub_823B3B18) PPC_WEAK_FUNC(sub_823B3B18);
PPC_FUNC_IMPL(__imp__sub_823B3B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3B30) PPC_WEAK_FUNC(sub_823B3B30);
PPC_FUNC_IMPL(__imp__sub_823B3B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3b5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3B5C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
loc_823B3B5C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B3B68) PPC_WEAK_FUNC(sub_823B3B68);
PPC_FUNC_IMPL(__imp__sub_823B3B68) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3ba4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3BA4;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bc5f8
	sub_823BC5F8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 3, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// beq ctx_arrow(ctx)->r6,0x823b3ba8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3BA8;
loc_823B3BA4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B3BA8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B3BB8) PPC_WEAK_FUNC(sub_823B3BB8);
PPC_FUNC_IMPL(__imp__sub_823B3BB8) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3bf4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3BF4;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bc5f8
	sub_823BC5F8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 2, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// beq ctx_arrow(ctx)->r6,0x823b3bf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3BF8;
loc_823B3BF4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B3BF8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B3C08) PPC_WEAK_FUNC(sub_823B3C08);
PPC_FUNC_IMPL(__imp__sub_823B3C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20944
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20944;
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b3c8c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B3C8C;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B3C30:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3c70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3C70;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 32;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,36
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 36;
loc_823B3C48:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U8(ctx,  ctx);
	// subf. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r31.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x823b3c68
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823B3C68;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3c48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3C48;
loc_823B3C68:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3c88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3C88;
loc_823B3C70:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,4540
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, ctx_arrow(ctx)->r4.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b3c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B3C30;
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823B3C88:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
loc_823B3C8C:
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3C98) PPC_WEAK_FUNC(sub_823B3C98);
PPC_FUNC_IMPL(__imp__sub_823B3C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// bl 0x82167da8
	sub_82167DA8(ctx, base);
	// stw ctx_arrow(ctx)->r30,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B3CF8) PPC_WEAK_FUNC(sub_823B3CF8);
PPC_FUNC_IMPL(__imp__sub_823B3CF8) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-21000
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -21000;
	// lwz ctx_arrow(ctx)->r30,60(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b3d48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B3D48;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,104
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 104;
loc_823B3D20:
	// lwz ctx_arrow(ctx)->r11,-104(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3d38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3D38;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,-12
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + -12;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b36c8
	sub_823B36C8(ctx, base);
loc_823B3D38:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4540
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4540;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3d20
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3D20;
loc_823B3D48:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3d60
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3D60;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B3D60:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B3D68) PPC_WEAK_FUNC(sub_823B3D68);
PPC_FUNC_IMPL(__imp__sub_823B3D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 * 4540;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B3D88) PPC_WEAK_FUNC(sub_823B3D88);
PPC_FUNC_IMPL(__imp__sub_823B3D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B3D98) PPC_WEAK_FUNC(sub_823B3D98);
PPC_FUNC_IMPL(__imp__sub_823B3D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 * 4540;
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,-20944(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,104
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 104;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3dcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3DCC;
	// lwz ctx_arrow(ctx)->r8,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,28(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 28);
loc_823B3DCC:
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b3de0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B3DE0;
	// lwz ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 24);
loc_823B3DE0:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3df4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3DF4;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
loc_823B3DF4:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3e08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3E08;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
loc_823B3E08:
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
	// stw ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B3E30) PPC_WEAK_FUNC(sub_823B3E30);
PPC_FUNC_IMPL(__imp__sub_823B3E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 * 4540;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B3E60) PPC_WEAK_FUNC(sub_823B3E60);
PPC_FUNC_IMPL(__imp__sub_823B3E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3ea0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3EA0;
	// lwz ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3ea0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3EA0;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
loc_823B3EA0:
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B3EA8) PPC_WEAK_FUNC(sub_823B3EA8);
PPC_FUNC_IMPL(__imp__sub_823B3EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// blr 
	return;
}

alias(__imp__sub_823B3EC0) PPC_WEAK_FUNC(sub_823B3EC0);
PPC_FUNC_IMPL(__imp__sub_823B3EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 80;
	// blr 
	return;
}

alias(__imp__sub_823B3ED8) PPC_WEAK_FUNC(sub_823B3ED8);
PPC_FUNC_IMPL(__imp__sub_823B3ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20928(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20928);
	// blr 
	return;
}

alias(__imp__sub_823B3EE8) PPC_WEAK_FUNC(sub_823B3EE8);
PPC_FUNC_IMPL(__imp__sub_823B3EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20916(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20916);
	// blr 
	return;
}

alias(__imp__sub_823B3EF8) PPC_WEAK_FUNC(sub_823B3EF8);
PPC_FUNC_IMPL(__imp__sub_823B3EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r3,-20916(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B3F08) PPC_WEAK_FUNC(sub_823B3F08);
PPC_FUNC_IMPL(__imp__sub_823B3F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2392
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 2392;
	// li ctx_arrow(ctx)->r8,46
	ctx_arrow(ctx)->r8.s64 = 46;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_823B3F14:
	// li ctx_arrow(ctx)->r10,11
	ctx_arrow(ctx)->r10.s64 = 11;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r9,184(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 184);
loc_823B3F20:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r9,-2024(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -2024);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3f20
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3F20;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3f14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3F14;
	// blr 
	return;
}

alias(__imp__sub_823B3F50) PPC_WEAK_FUNC(sub_823B3F50);
PPC_FUNC_IMPL(__imp__sub_823B3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-29528
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -29528;
	// b 0x823b3f08
	sub_823B3F08(ctx, base);
	return;
}

alias(__imp__sub_823B3F60) PPC_WEAK_FUNC(sub_823B3F60);
PPC_FUNC_IMPL(__imp__sub_823B3F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 124;
	// b 0x823b3f08
	sub_823B3F08(ctx, base);
	return;
}

alias(__imp__sub_823B3F78) PPC_WEAK_FUNC(sub_823B3F78);
PPC_FUNC_IMPL(__imp__sub_823B3F78) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20904
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20904;
	// mulli ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4416
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 * 4416;
	// stw ctx_arrow(ctx)->r30,-8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + -8);
	// bl 0x823b7f20
	sub_823B7F20(&ctx);
	// stw ctx_arrow(ctx)->r3,-4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + -4);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823b7f20
	sub_823B7F20(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r7,-8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// stw ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// ble ctx_arrow(ctx)->r6,0x823b3ff4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B3FF4;
	// lwz ctx_arrow(ctx)->r6,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_823B3FD4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b3f08
	sub_823B3F08(ctx, base);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// stb ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r5)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0));
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4416
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 4416;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,12
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 12;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b3fd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B3FD4;
loc_823B3FF4:
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

alias(__imp__sub_823B4010) PPC_WEAK_FUNC(sub_823B4010);
PPC_FUNC_IMPL(__imp__sub_823B4010) {
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
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b406c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B406C;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20904
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20904;
	// lwz ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b406c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B406C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li ctx_arrow(ctx)->r5,11
	ctx_arrow(ctx)->r5.s64 = 11;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823f0600
	sub_823F0600(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// stb ctx_arrow(ctx)->r10,11(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 11));
loc_823B406C:
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

alias(__imp__sub_823B4088) PPC_WEAK_FUNC(sub_823B4088);
PPC_FUNC_IMPL(__imp__sub_823B4088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r11,-20904(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// blr 
	return;
}

alias(__imp__sub_823B40A8) PPC_WEAK_FUNC(sub_823B40A8);
PPC_FUNC_IMPL(__imp__sub_823B40A8) {
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
	// bl 0x823b3528
	sub_823B3528(&ctx);
	// lis ctx_arrow(ctx)->r11,4194
	ctx_arrow(ctx)->r11.s64 = 274857984;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,19923
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 19923;
	// mulhwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = (uint64_t(ctx_arrow(ctx)->r3.u32) * uint64_t(ctx_arrow(ctx)->r11.u32)) >> 32;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,26,6,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 26) & 0x3FFFFFF;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-29528
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -29528;
	// lwz ctx_arrow(ctx)->r11,8608(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b41d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B41D8;
	// lwz ctx_arrow(ctx)->r11,8604(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r8,11915
	ctx_arrow(ctx)->r8.s64 = 780861440;
	// stw ctx_arrow(ctx)->r10,8608(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8608);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,2392
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s64 + 2392;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,41705
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64 | 41705;
	// li ctx_arrow(ctx)->r8,46
	ctx_arrow(ctx)->r8.s64 = 46;
	// mulhw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r6.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1,31,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r6.u64;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 11;
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r6,8604(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8604);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
loc_823B4120:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// stw ctx_arrow(ctx)->r7,-2024(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -2024);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,44
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 44;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4120
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4120;
	// lwz ctx_arrow(ctx)->r11,8588(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b4188
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B4188;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,629
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r6.s64 + 629;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,8584(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
loc_823B4158:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r10,46
	ctx_arrow(ctx)->r10.s64 = 46;
loc_823B4160:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r7,-2024(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -2024);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,44
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 44;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4160
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4160;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + -1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4540
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4540;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4158
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4158;
loc_823B4188:
	// lwz ctx_arrow(ctx)->r11,8616(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b41d8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B41D8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,598
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r6.s64 + 598;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,8620(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
loc_823B41A8:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r10,46
	ctx_arrow(ctx)->r10.s64 = 46;
loc_823B41B0:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r7,-2024(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -2024);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,44
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 44;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b41b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B41B0;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4416
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4416;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b41a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B41A8;
loc_823B41D8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B41E8) PPC_WEAK_FUNC(sub_823B41E8);
PPC_FUNC_IMPL(__imp__sub_823B41E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-29528
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -29528;
	// lwz ctx_arrow(ctx)->r10,8600(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4298
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4298;
	// lwz ctx_arrow(ctx)->r10,8604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 * 11;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,46
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 46;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r10,8584(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7,92
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r7.s64 + 92;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,124
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 124;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,598
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r7.s64 + 598;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r5.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r6.u64;
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r10.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r5.u64;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r10.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r6.u64;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r10.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r11.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r11.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r11.u32);
loc_823B4298:
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B42A0) PPC_WEAK_FUNC(sub_823B42A0);
PPC_FUNC_IMPL(__imp__sub_823B42A0) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// b 0x823b41e8
	sub_823B41E8(ctx, base);
	return;
}

alias(__imp__sub_823B42A8) PPC_WEAK_FUNC(sub_823B42A8);
PPC_FUNC_IMPL(__imp__sub_823B42A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-20924
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -20924;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,4416
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 * 4416;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 * 11;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,46
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 46;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,92
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 92;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,598
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 598;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r5.u64;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r6.u64;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r11.u32);
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r11.u32);
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r5.u64;
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r6.u64;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// blr 
	return;
}

alias(__imp__sub_823B4330) PPC_WEAK_FUNC(sub_823B4330);
PPC_FUNC_IMPL(__imp__sub_823B4330) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// b 0x823b42a8
	sub_823B42A8(ctx, base);
	return;
}

alias(__imp__sub_823B4338) PPC_WEAK_FUNC(sub_823B4338);
PPC_FUNC_IMPL(__imp__sub_823B4338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-29528
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -29528;
	// lwz ctx_arrow(ctx)->r11,8600(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,8584(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 124;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r9.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b4380
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B4380;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,46
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 46;
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
loc_823B4380:
	// lwz ctx_arrow(ctx)->r9,8604(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r4.s64 * 11;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,92
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r7.s64 + 92;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r3.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b43b0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B43B0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7,598
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r7.s64 + 598;
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r11.u32);
loc_823B43B0:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r11.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b43cc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B43CC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r10.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,184
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + 184;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r4.u32);
loc_823B43CC:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2392
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 2392;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r8.u32);
	// blr 
	return;
}

alias(__imp__sub_823B43F0) PPC_WEAK_FUNC(sub_823B43F0);
PPC_FUNC_IMPL(__imp__sub_823B43F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lis ctx_arrow(ctx)->r10,11915
	ctx_arrow(ctx)->r10.s64 = 780861440;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,41705
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 | 41705;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r31,-20924(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 10;
	// mulhw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r30.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1,31,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r6.u64;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 * 11;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r31.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4494
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4494;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 * 11;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,92
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r9.s64 + 92;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,598
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r9.s64 + 598;
loc_823B4444:
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r5.s32, xer);
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// bge ctx_arrow(ctx)->r6,0x823b4494
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B4494;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 10;
	// mulhw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r30.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1,31,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r6.u64;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 * 11;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r31.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4444
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4444;
loc_823B4494:
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r7.s32;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 1, xer);
	// std ctx_arrow(ctx)->r11,-48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// lfd f0,-48(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// ble ctx_arrow(ctx)->r6,0x823b44c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B44C8;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s32;
	// std ctx_arrow(ctx)->r11,-48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// lfd f0,-48(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / f0.f64));
loc_823B44C8:
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B44D0) PPC_WEAK_FUNC(sub_823B44D0);
PPC_FUNC_IMPL(__imp__sub_823B44D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 124;
	// b 0x823b43f0
	sub_823B43F0(ctx, base);
	return;
}

alias(__imp__sub_823B44E8) PPC_WEAK_FUNC(sub_823B44E8);
PPC_FUNC_IMPL(__imp__sub_823B44E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20972(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20972);
	// blr 
	return;
}

alias(__imp__sub_823B44F8) PPC_WEAK_FUNC(sub_823B44F8);
PPC_FUNC_IMPL(__imp__sub_823B44F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20956(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20956);
	// blr 
	return;
}

alias(__imp__sub_823B4508) PPC_WEAK_FUNC(sub_823B4508);
PPC_FUNC_IMPL(__imp__sub_823B4508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20952(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20952);
	// blr 
	return;
}

alias(__imp__sub_823B4518) PPC_WEAK_FUNC(sub_823B4518);
PPC_FUNC_IMPL(__imp__sub_823B4518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20948(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20948);
	// blr 
	return;
}

alias(__imp__sub_823B4528) PPC_WEAK_FUNC(sub_823B4528);
PPC_FUNC_IMPL(__imp__sub_823B4528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20968(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20968);
	// blr 
	return;
}

alias(__imp__sub_823B4538) PPC_WEAK_FUNC(sub_823B4538);
PPC_FUNC_IMPL(__imp__sub_823B4538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20964(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20964);
	// blr 
	return;
}

alias(__imp__sub_823B4548) PPC_WEAK_FUNC(sub_823B4548);
PPC_FUNC_IMPL(__imp__sub_823B4548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20960(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20960);
	// blr 
	return;
}

alias(__imp__sub_823B4558) PPC_WEAK_FUNC(sub_823B4558);
PPC_FUNC_IMPL(__imp__sub_823B4558) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lis ctx_arrow(ctx)->r9,-32015
	ctx_arrow(ctx)->r9.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-20944
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -20944;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// li ctx_arrow(ctx)->r24,-1
	ctx_arrow(ctx)->r24.s64 = -1;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// ble ctx_arrow(ctx)->r6,0x823b46c0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B46C0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B4594:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b45c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B45C4;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b4594
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B4594;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed178
	return;
loc_823B45C4:
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r30.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b46c0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B46C0;
	// lis ctx_arrow(ctx)->r31,-32016
	ctx_arrow(ctx)->r31.s64 = -2098200576;
	// li ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r25.s64 = 1;
	// li ctx_arrow(ctx)->r28,2
	ctx_arrow(ctx)->r28.s64 = 2;
	// li ctx_arrow(ctx)->r29,1000
	ctx_arrow(ctx)->r29.s64 = 1000;
	// lwz ctx_arrow(ctx)->r11,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4658
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4658;
	// li ctx_arrow(ctx)->r5,254
	ctx_arrow(ctx)->r5.s64 = 254;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// bl 0x823bd4d0
	sub_823BD4D0(ctx, base);
	// stw ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 19624);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4610
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4610;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
	// lwz ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B4610:
	// lis ctx_arrow(ctx)->r4,-32764
	ctx_arrow(ctx)->r4.s64 = -2147221504;
	// stw ctx_arrow(ctx)->r25,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,26238
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 26238;
	// bl 0x823bd4e8
	sub_823BD4E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4630
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4630;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B4630:
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// sth ctx_arrow(ctx)->r28,96(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r28, 0);
	// stw ctx_arrow(ctx)->r26,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// sth ctx_arrow(ctx)->r29,98(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 98, ctx_arrow(ctx)->r29, 0);
	// bl 0x823bd520
	sub_823BD520(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4658
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4658;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B4658:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 * 4540;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823b7530
	sub_823B7530(ctx, base);
	// stw ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 120);
	// sth ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r28, 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// stw ctx_arrow(ctx)->r26,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
	// sth ctx_arrow(ctx)->r29,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r29, 0);
	// li ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r10.s64 = 9;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823B4688:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823b4688
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B4688;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r26,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r26,116(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 116);
	// stw ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r26,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// bl 0x823b3f60
	sub_823B3F60(&ctx);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,29
	ctx_arrow(ctx)->r4.s64 = 29;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
loc_823B46C0:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823B46D8) PPC_WEAK_FUNC(sub_823B46D8);
PPC_FUNC_IMPL(__imp__sub_823B46D8) {
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// li ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = -1;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// bl 0x823bc5a8
	sub_823BC5A8(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4764
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4764;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x823b3c08
	sub_823B3C08(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b4764
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B4764;
	// bl 0x823b4558
	sub_823B4558(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b4764
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B4764;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 4540;
	// lwz ctx_arrow(ctx)->r11,-20944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823B4764:
	// lwz ctx_arrow(ctx)->r3,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B4778) PPC_WEAK_FUNC(sub_823B4778);
PPC_FUNC_IMPL(__imp__sub_823B4778) {
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
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r31,-32016
	ctx_arrow(ctx)->r31.s64 = -2098200576;
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// li ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = -1;
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// li ctx_arrow(ctx)->r26,2
	ctx_arrow(ctx)->r26.s64 = 2;
	// lwz ctx_arrow(ctx)->r11,19628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r27,1001
	ctx_arrow(ctx)->r27.s64 = 1001;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// bne ctx_arrow(ctx)->r6,0x823b484c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B484C;
	// li ctx_arrow(ctx)->r5,17
	ctx_arrow(ctx)->r5.s64 = 17;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// bl 0x823bd4d0
	sub_823BD4D0(ctx, base);
	// stw ctx_arrow(ctx)->r3,19628(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 19628);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b47d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B47D8;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
	// lwz ctx_arrow(ctx)->r3,19628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B47D8:
	// lis ctx_arrow(ctx)->r4,-32764
	ctx_arrow(ctx)->r4.s64 = -2147221504;
	// stw ctx_arrow(ctx)->r28,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,26238
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 26238;
	// bl 0x823bd4e8
	sub_823BD4E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b47f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B47F8;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B47F8:
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,19628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r7.s64 = 4;
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.s64 = 32;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,65535
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 65535;
	// bl 0x823bd500
	sub_823BD500(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4824
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4824;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B4824:
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,19628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// sth ctx_arrow(ctx)->r26,96(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r26, 0);
	// stw ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// sth ctx_arrow(ctx)->r27,98(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 98, ctx_arrow(ctx)->r27, 0);
	// bl 0x823bd520
	sub_823BD520(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b484c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B484C;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B484C:
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-20944
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -20944;
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b48a4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B48A4;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
loc_823B486C:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4884
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4884;
	// lwz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4898
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4898;
loc_823B4884:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b486c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B486C;
	// b 0x823b48a4
	goto loc_823B48A4;
loc_823B4898:
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b494c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B494C;
loc_823B48A4:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b48d8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B48D8;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
loc_823B48B4:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b48d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B48D4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b48b4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B48B4;
	// b 0x823b48d8
	goto loc_823B48D8;
loc_823B48D4:
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
loc_823B48D8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b494c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B494C;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 * 4540;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// bl 0x823b7530
	sub_823B7530(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// sth ctx_arrow(ctx)->r26,16(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r26, 0);
	// li ctx_arrow(ctx)->r5,35
	ctx_arrow(ctx)->r5.s64 = 35;
	// stb ctx_arrow(ctx)->r30,112(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 112, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// sth ctx_arrow(ctx)->r27,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r27, 0);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,113
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 113;
	// stw ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 120);
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823edf70
	sub_823EDF70(&ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,29
	ctx_arrow(ctx)->r4.s64 = 29;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r30,116(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 116);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// bl 0x823b42a0
	sub_823B42A0(&ctx);
loc_823B494C:
	// lwz ctx_arrow(ctx)->r3,148(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823B4960) PPC_WEAK_FUNC(sub_823B4960);
PPC_FUNC_IMPL(__imp__sub_823B4960) {
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
	// lis ctx_arrow(ctx)->r28,-31987
	ctx_arrow(ctx)->r28.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// mulli ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26,4540
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r26.s64 * 4540;
	// lwz ctx_arrow(ctx)->r31,-20944(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r31.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4CB0;
	// lwz ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b49ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B49AC;
	// bl 0x823b76a0
	sub_823B76A0(ctx, base);
	// lwz ctx_arrow(ctx)->r31,-20944(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r30,120(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 120);
loc_823B49AC:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4a68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4A68;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,80
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r27.s64 + 80;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
loc_823B49C0:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b49d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B49D8;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B49D8:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b49ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B49EC;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B49EC:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4a00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4A00;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B4A00:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4a14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4A14;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B4A14:
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stw ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7e18
	sub_823B7E18(&ctx);
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
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
	// lwz ctx_arrow(ctx)->r31,-20944(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b49c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B49C0;
loc_823B4A68:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4b28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4B28;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,68
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r27.s64 + 68;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
loc_823B4A80:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4a98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4A98;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B4A98:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4aac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4AAC;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B4AAC:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4ac0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4AC0;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B4AC0:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4ad4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4AD4;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B4AD4:
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stw ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7e18
	sub_823B7E18(&ctx);
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
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
	// lwz ctx_arrow(ctx)->r31,-20944(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4a80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4A80;
loc_823B4B28:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4bd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4BD4;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,92
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r27.s64 + 92;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
loc_823B4B40:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4b58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4B58;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B4B58:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4b6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4B6C;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B4B6C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4b80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4B80;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B4B80:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4b94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4B94;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B4B94:
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r31,-20944(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4b40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4B40;
loc_823B4BD4:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4c80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4C80;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,104
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r27.s64 + 104;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
loc_823B4BEC:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4c04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4C04;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B4C04:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4c18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4C18;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B4C18:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4c2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4C2C;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B4C2C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4c40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4C40;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B4C40:
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r31,-20944(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4bec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4BEC;
loc_823B4C80:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.s64 = 30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r31.u64;
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + ctx_arrow(ctx)->r31.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4CB0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x823bc5d8
	sub_823BC5D8(ctx, base);
loc_823B4CB0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823B4CB8) PPC_WEAK_FUNC(sub_823B4CB8);
PPC_FUNC_IMPL(__imp__sub_823B4CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-1376(ctx_arrow(ctx)->r1)
	ea = -1376 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,1216(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 1216);
	// bl 0x823b3528
	sub_823B3528(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r21,4540
	ctx_arrow(ctx)->r16.s64 = ctx_arrow(ctx)->r21.s64 * 4540;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,-20980
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + -20980;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r28,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4e30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4E30;
loc_823B4D04:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7248
	sub_823B7248(ctx, base);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b4e30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B4E30;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 80;
	// beq ctx_arrow(ctx)->r6,0x823b4d38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4D38;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B4D38:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4d4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4D4C;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B4D4C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4d60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4D60;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B4D60:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4d74
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4D74;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B4D74:
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r27,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7258
	sub_823B7258(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b4de4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B4DE4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7258
	sub_823B7258(ctx, base);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b4de4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B4DE4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4de4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4DE4;
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
	// b 0x823b4e24
	goto loc_823B4E24;
loc_823B4DE4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4df8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4DF8;
	// stw ctx_arrow(ctx)->r28,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
loc_823B4DF8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// bl 0x82167da8
	sub_82167DA8(ctx, base);
loc_823B4E24:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4d04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4D04;
loc_823B4E30:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21852
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21852;
	// stw ctx_arrow(ctx)->r11,172(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 172);
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,19624
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 19624;
	// stw ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 156);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21880
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21880;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21916
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21916;
	// stw ctx_arrow(ctx)->r11,164(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 164);
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// addi ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r11,19656
	ctx_arrow(ctx)->r14.s64 = ctx_arrow(ctx)->r11.s64 + 19656;
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,19632
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r11.s64 + 19632;
	// b 0x823b4e78
	goto loc_823B4E78;
loc_823B4E74:
	// lwz ctx_arrow(ctx)->r28,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B4E78:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16,68
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r16.s64 + 68;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5e0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5E0C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b5e0c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B5E0C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// li ctx_arrow(ctx)->r5,1024
	ctx_arrow(ctx)->r5.s64 = 1024;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 160);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// stw ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// li ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.s64 = 1024;
	// stw ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// bl 0x823b2a68
	sub_823B2A68(&ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r16.s64 + 12;
	// stw ctx_arrow(ctx)->r27,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// stw ctx_arrow(ctx)->r27,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r27,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r27,152(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r27.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r27.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r15.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x823b2a80
	sub_823B2A80(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x823b2a80
	sub_823B2A80(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4f20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4F20;
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,164(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B4F20:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4f98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4F98;
loc_823B4F30:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4f64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4F64;
loc_823B4F38:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b52c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B52C0;
	// lwz ctx_arrow(ctx)->r31,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4f38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4F38;
loc_823B4F64:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4f98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4F98;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 116);
loc_823B4F98:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5de8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5DE8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 + 7;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r15.s32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFFFFFF;
	// sth ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r11, 0);
	// beq ctx_arrow(ctx)->r6,0x823b4fc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4FC8;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2cc0
	sub_823B2CC0(ctx, base);
loc_823B4FC8:
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25,29,3,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x823b2cc0
	sub_823B2CC0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5014
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5014;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x823b2a90
	sub_823B2A90(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
loc_823B5014:
	// lwz ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b50dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B50DC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b50dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B50DC;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 8;
	ctx_arrow(ctx)->r10.s64 = 8 - ctx_arrow(ctx)->r11.s64;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b50dc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B50DC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,-8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r22.s64 + -8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r21,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b50c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B50C4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15,0
	xer.ca = ctx_arrow(ctx)->r15.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r15.s64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r25.s64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B50C4:
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
loc_823B50DC:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,29
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u32 & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5104
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5104;
	// subfic ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,8
	xer.ca = ctx_arrow(ctx)->r28.u32 <= 8;
	ctx_arrow(ctx)->r28.s64 = 8 - ctx_arrow(ctx)->r28.s64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
loc_823B5104:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r15.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5158
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5158;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23,29,3,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r23.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x823b2cc0
	sub_823B2CC0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5158
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5158;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x823b2a90
	sub_823B2A90(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
loc_823B5158:
	// lwz ctx_arrow(ctx)->r3,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5be8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5BE8;
	// lwz ctx_arrow(ctx)->r29,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r26,152(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B5170:
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5210
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5210;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5210
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5210;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5210
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5210;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5210
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5210;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r4,43
	ctx_arrow(ctx)->r4.s64 = 43;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b41e8
	sub_823B41E8(ctx, base);
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
	// li ctx_arrow(ctx)->r4,43
	ctx_arrow(ctx)->r4.s64 = 43;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b42a8
	sub_823B42A8(ctx, base);
loc_823B5210:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5224
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5224;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
loc_823B5224:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5238
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5238;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
loc_823B5238:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b524c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B524C;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
loc_823B524C:
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5260
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5260;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
loc_823B5260:
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stw ctx_arrow(ctx)->r27,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7220
	sub_823B7220(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x823b5bc4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5BC4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x823b7340
	sub_823B7340(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7308
	sub_823B7308(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7268
	sub_823B7268(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 80;
	// bl 0x823b3610
	sub_823B3610(ctx, base);
	// b 0x823b5bd8
	goto loc_823B5BD8;
loc_823B52C0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r17,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b54fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B54FC;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r19.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5318
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5318;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16,68
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r16.s64 + 68;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7b18
	sub_823B7B18(ctx, base);
	// li ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r19.s64 = 1;
loc_823B5318:
	// lbz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b532c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B532C;
	// lhz ctx_arrow(ctx)->r29,18(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 18);
	// b 0x823b5498
	goto loc_823B5498;
loc_823B532C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r16,120
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r16.s64 + 120;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7718
	sub_823B7718(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7b98
	sub_823B7B98(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b548c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B548C;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,34
	ctx_arrow(ctx)->r4.s64 = 34;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,34
	ctx_arrow(ctx)->r4.s64 = 34;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16,68
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r16.s64 + 68;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// beq ctx_arrow(ctx)->r6,0x823b53d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B53D8;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B53D8:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b53ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B53EC;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B53EC:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5400
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5400;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B5400:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5414
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5414;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B5414:
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r27,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7220
	sub_823B7220(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5460
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5460;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7268
	sub_823B7268(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 80;
	// bl 0x823b3610
	sub_823B3610(ctx, base);
	// b 0x823b5b6c
	goto loc_823B5B6C;
loc_823B5460:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
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
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
	// b 0x823b5b6c
	goto loc_823B5B6C;
loc_823B548C:
	// li ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = 1;
	// sth ctx_arrow(ctx)->r29,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r29, 0);
	// stb ctx_arrow(ctx)->r20,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r20), 0);
loc_823B5498:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r15.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b54d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B54D0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r14.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B54D0:
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x823b2af8
	sub_823B2AF8(ctx, base);
	// b 0x823b5534
	goto loc_823B5534;
loc_823B54FC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r15.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5534
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5534;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r14.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B5534:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 7;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r15.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5564
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5564;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 16;
loc_823B5564:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2ae8
	sub_823B2AE8(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b5b7c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B5B7C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7220
	sub_823B7220(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b581c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B581C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b581c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B581C;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r22.s64 + -16;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,152(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r21,8(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r24.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r14.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 7;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r15.s32, 0, xer);
	// add ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// beq ctx_arrow(ctx)->r6,0x823b5610
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5610;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,16
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 16;
loc_823B5610:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2ae8
	sub_823B2AE8(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b5b90
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B5B90;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r25.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r23.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r29.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r26.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5770
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5770;
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
	// lwz ctx_arrow(ctx)->r28,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B5770:
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
loc_823B5774:
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16,68
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r16.s64 + 68;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// beq ctx_arrow(ctx)->r6,0x823b5794
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5794;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B5794:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b57a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B57A8;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B57A8:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b57bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B57BC;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B57BC:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b57d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B57D0;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B57D0:
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r27,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b58cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B58CC;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b580c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B580C;
	// stw ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B580C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// b 0x823b58e8
	goto loc_823B58E8;
loc_823B581C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r25.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r23.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5774
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5774;
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
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// b 0x823b5774
	goto loc_823B5774;
loc_823B58CC:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b58e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B58E0;
	// stw ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B58E0:
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r31,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
loc_823B58E8:
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b58fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B58FC;
	// stw ctx_arrow(ctx)->r31,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
loc_823B58FC:
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7320
	sub_823B7320(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b59b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B59B0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r4.s64 = 17;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r4.s64 = 17;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r4,18
	ctx_arrow(ctx)->r4.s64 = 18;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,18
	ctx_arrow(ctx)->r4.s64 = 18;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
loc_823B59B0:
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
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5b08
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5B08;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,35
	ctx_arrow(ctx)->r4.s64 = 35;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,35
	ctx_arrow(ctx)->r4.s64 = 35;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,36
	ctx_arrow(ctx)->r4.s64 = 36;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,36
	ctx_arrow(ctx)->r4.s64 = 36;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5b08
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5B08;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,37
	ctx_arrow(ctx)->r4.s64 = 37;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,37
	ctx_arrow(ctx)->r4.s64 = 37;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,38
	ctx_arrow(ctx)->r4.s64 = 38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,38
	ctx_arrow(ctx)->r4.s64 = 38;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
loc_823B5B08:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r20.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5b38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5B38;
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
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7728
	sub_823B7728(ctx, base);
loc_823B5B38:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r28,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B5B6C:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r17.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r17.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4f30
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4F30;
	// b 0x823b4f64
	goto loc_823B4F64;
loc_823B5B7C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r20.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b4f64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B4F64;
	// stb ctx_arrow(ctx)->r27,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// sth ctx_arrow(ctx)->r27,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r27, 0);
	// b 0x823b4f64
	goto loc_823B4F64;
loc_823B5B90:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r20.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5ba4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5BA4;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stb ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// sth ctx_arrow(ctx)->r11,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r11, 0);
loc_823B5BA4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// b 0x823b4f98
	goto loc_823B4F98;
loc_823B5BC4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B5BD8:
	// lwz ctx_arrow(ctx)->r3,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5170
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5170;
loc_823B5BE8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5c08
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5C08;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B5C08:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2aa0
	sub_823B2AA0(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15,0
	xer.ca = ctx_arrow(ctx)->r15.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r15.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,3
	xer.ca = (ctx_arrow(ctx)->r30.s32 < 0) & ((ctx_arrow(ctx)->r30.u32 & 0x7) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s32 >> 3;
	// addze ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// subfic ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,8
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 8;
	ctx_arrow(ctx)->r31.s64 = 8 - ctx_arrow(ctx)->r11.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5c40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5C40;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r27.u64;
loc_823B5C40:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r16.s64 + 12;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// beq ctx_arrow(ctx)->r6,0x823b5c60
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5C60;
	// lwz ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823b5c64
	goto loc_823B5C64;
loc_823B5C60:
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B5C64:
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r11,180(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 180);
	// bl 0x823b2aa0
	sub_823B2AA0(&ctx);
	// stw ctx_arrow(ctx)->r3,176(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 176);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x823b2aa0
	sub_823B2AA0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,168(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 168);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,168
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 168;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823bd588
	sub_823BD588(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5d34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5D34;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,41
	ctx_arrow(ctx)->r4.s64 = 41;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b4338
	sub_823B4338(ctx, base);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r4,42
	ctx_arrow(ctx)->r4.s64 = 42;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b41e8
	sub_823B41E8(ctx, base);
	// b 0x823b5dec
	goto loc_823B5DEC;
loc_823B5D34:
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,10065
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 10065, xer);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bne ctx_arrow(ctx)->r6,0x823b5d98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5D98;
	// li ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 5;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r4,7
	ctx_arrow(ctx)->r4.s64 = 7;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.s64 = 9;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// b 0x823b5dec
	goto loc_823B5DEC;
loc_823B5D98:
	// li ctx_arrow(ctx)->r4,10
	ctx_arrow(ctx)->r4.s64 = 10;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 11;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r4.s64 = 12;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r4,13
	ctx_arrow(ctx)->r4.s64 = 13;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li ctx_arrow(ctx)->r4,14
	ctx_arrow(ctx)->r4.s64 = 14;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// b 0x823b5dec
	goto loc_823B5DEC;
loc_823B5DE8:
	// stw ctx_arrow(ctx)->r27,160(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 160);
loc_823B5DEC:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5e00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5E00;
	// lwz ctx_arrow(ctx)->r3,172(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B5E00:
	// lwz ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b4e74
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B4E74;
loc_823B5E0C:
	// lwz ctx_arrow(ctx)->r3,1216(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1376
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1376;
	// b 0x823ed150
	return;
}

alias(__imp__sub_823B5E20) PPC_WEAK_FUNC(sub_823B5E20);
PPC_FUNC_IMPL(__imp__sub_823B5E20) {
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
	// lis ctx_arrow(ctx)->r30,-31987
	ctx_arrow(ctx)->r30.s64 = -2096300032;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,-20940(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b5e70
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B5E70;
loc_823B5E48:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b3b30
	sub_823B3B30(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5e64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5E64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b4cb8
	sub_823B4CB8(ctx, base);
	// lwz ctx_arrow(ctx)->r9,-20940(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B5E64:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b5e48
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B5E48;
loc_823B5E70:
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

alias(__imp__sub_823B5E88) PPC_WEAK_FUNC(sub_823B5E88);
PPC_FUNC_IMPL(__imp__sub_823B5E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed118
	// stwu ctx_arrow(ctx)->r1,-1408(ctx_arrow(ctx)->r1)
	ea = -1408 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,1296(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 1296);
	// bl 0x823b3528
	sub_823B3528(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,1024
	ctx_arrow(ctx)->r5.s64 = 1024;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// li ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.s64 = 1024;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// bl 0x823b2a68
	sub_823B2A68(&ctx);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r11,164(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 164);
	// bl 0x823b2ac0
	sub_823B2AC0(&ctx);
	// li ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r21.s64 = 0;
	// stw ctx_arrow(ctx)->r3,160(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 160);
	// li ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = 16;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// stw ctx_arrow(ctx)->r21,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// stw ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// stw ctx_arrow(ctx)->r21,152(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bd538
	sub_823BD538(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5f88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5F88;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,10035
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 10035, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5f74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5F74;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,10040
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 10040, xer);
	// bne ctx_arrow(ctx)->r6,0x823b5f74
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B5F74;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r4.s64 = 25;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20960
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20960;
	// lwz ctx_arrow(ctx)->r10,-44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5f74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5F74;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-44
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -44;
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B5F74:
	// lwz ctx_arrow(ctx)->r3,1296(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1408
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1408;
	// b 0x823ed168
	return;
loc_823B5F88:
	// lwz ctx_arrow(ctx)->r4,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b5f74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B5F74;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ac8
	sub_823B2AC8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r25.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,-20960
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + -20960;
	// bge ctx_arrow(ctx)->r6,0x823b61b0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B61B0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// lwz ctx_arrow(ctx)->r3,196(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// bl 0x823bc5a8
	sub_823BC5A8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6198
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6198;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// bl 0x823b3c08
	sub_823B3C08(ctx, base);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b61b0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B61B0;
	// lwz ctx_arrow(ctx)->r11,-2104(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6198
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6198;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r21.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b6020
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B6020;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B5FFC:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b601c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B601C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b5ffc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B5FFC;
	// b 0x823b6020
	goto loc_823B6020;
loc_823B601C:
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64;
loc_823B6020:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b6190
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B6190;
	// lis ctx_arrow(ctx)->r31,-32016
	ctx_arrow(ctx)->r31.s64 = -2098200576;
	// lwz ctx_arrow(ctx)->r11,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b60ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B60AC;
	// li ctx_arrow(ctx)->r5,254
	ctx_arrow(ctx)->r5.s64 = 254;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// bl 0x823bd4d0
	sub_823BD4D0(ctx, base);
	// stw ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 19624);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b605c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B605C;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
	// lwz ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B605C:
	// lis ctx_arrow(ctx)->r4,-32764
	ctx_arrow(ctx)->r4.s64 = -2147221504;
	// stw ctx_arrow(ctx)->r25,144(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,26238
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 26238;
	// bl 0x823bd4e8
	sub_823BD4E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b607c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B607C;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B607C:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// lwz ctx_arrow(ctx)->r3,19624(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// stw ctx_arrow(ctx)->r21,180(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 180);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// sth ctx_arrow(ctx)->r11,176(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 176, ctx_arrow(ctx)->r11, 0);
	// li ctx_arrow(ctx)->r11,1000
	ctx_arrow(ctx)->r11.s64 = 1000;
	// sth ctx_arrow(ctx)->r11,178(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 178, ctx_arrow(ctx)->r11, 0);
	// bl 0x823bd520
	sub_823BD520(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b60ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B60AC;
	// bl 0x823bd5d8
	sub_823BD5D8(ctx, base);
loc_823B60AC:
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s64 * 4540;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823b7530
	sub_823B7530(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// stw ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 120);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 12);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// lwz ctx_arrow(ctx)->r11,-48(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r21,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r21,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r21,116(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 116);
	// stw ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r25,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// beq ctx_arrow(ctx)->r6,0x823b6184
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6184;
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,-48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s64 + -48;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// beq ctx_arrow(ctx)->r6,0x823b6164
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6164;
	// li ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.s64 = 28;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2a80
	sub_823B2A80(ctx, base);
	// b 0x823b61a8
	goto loc_823B61A8;
loc_823B6164:
	// li ctx_arrow(ctx)->r4,27
	ctx_arrow(ctx)->r4.s64 = 27;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b4960
	sub_823B4960(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r23,-1
	ctx_arrow(ctx)->r23.s64 = -1;
	// bl 0x823b2a80
	sub_823B2A80(ctx, base);
	// b 0x823b61a8
	goto loc_823B61A8;
loc_823B6184:
	// li ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.s64 = 28;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// b 0x823b61a0
	goto loc_823B61A0;
loc_823B6190:
	// li ctx_arrow(ctx)->r4,26
	ctx_arrow(ctx)->r4.s64 = 26;
	// b 0x823b619c
	goto loc_823B619C;
loc_823B6198:
	// li ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r4.s64 = 25;
loc_823B619C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B61A0:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
loc_823B61A8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b6db8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B6DB8;
loc_823B61B0:
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r23,4540
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r23.s64 * 4540;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// beq ctx_arrow(ctx)->r6,0x823b6208
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6208;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b61e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B61E8;
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
loc_823B61E8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s64 + -16;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2a80
	sub_823B2A80(ctx, base);
loc_823B6208:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// beq ctx_arrow(ctx)->r6,0x823b6230
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6230;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// bl 0x823b2e98
	sub_823B2E98(ctx, base);
	// lhz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 136);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x823b6238
	goto loc_823B6238;
loc_823B6230:
	// bl 0x823b2ae8
	sub_823B2AE8(ctx, base);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
loc_823B6238:
	// lwz ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r21,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stw ctx_arrow(ctx)->r21,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r21,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// beq ctx_arrow(ctx)->r6,0x823b6268
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6268;
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21812
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21812;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B6268:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b7e28
	sub_823B7E28(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6510
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6510;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-21880
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -21880;
loc_823B6294:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r23,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6394
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6394;
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// stb ctx_arrow(ctx)->r25,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r25), 0);
	// li ctx_arrow(ctx)->r4,39
	ctx_arrow(ctx)->r4.s64 = 39;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// sth ctx_arrow(ctx)->r11,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r11, 0);
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// li ctx_arrow(ctx)->r4,39
	ctx_arrow(ctx)->r4.s64 = 39;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,40
	ctx_arrow(ctx)->r4.s64 = 40;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
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
	// bl 0x823b7768
	sub_823B7768(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,40
	ctx_arrow(ctx)->r4.s64 = 40;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
loc_823B6394:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,21
	ctx_arrow(ctx)->r4.s64 = 21;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6424;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,0
	xer.ca = ctx_arrow(ctx)->r27.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r27.s64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x10;
	// subf ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r10.s64;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B6424:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6960
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6960;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6474
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6474;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6464
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6464;
	// stw ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B6464:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// b 0x823b6490
	goto loc_823B6490;
loc_823B6474:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6488
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6488;
	// stw ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B6488:
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r31,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
loc_823B6490:
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b64a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B64A4;
	// stw ctx_arrow(ctx)->r31,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
loc_823B64A4:
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lwz ctx_arrow(ctx)->r11,-28(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b64d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B64D8;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r3.s64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// b 0x823b64e8
	goto loc_823B64E8;
loc_823B64D8:
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-24(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r3.s64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
loc_823B64E8:
	// blt ctx_arrow(ctx)->r6,0x823b6554
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B6554;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b7e28
	sub_823B7E28(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6294
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6294;
loc_823B6510:
	// lwz ctx_arrow(ctx)->r11,-44(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6554
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6554;
	// lwz ctx_arrow(ctx)->r3,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6540
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6540;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_823B6540:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,-44
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s64 + -44;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
loc_823B6548:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B6554:
	// lwz ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b656c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B656C;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21832
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21832;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B656C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3,29
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u32 & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6590
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6590;
	// subfic ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,8
	xer.ca = ctx_arrow(ctx)->r29.u32 <= 8;
	ctx_arrow(ctx)->r29.s64 = 8 - ctx_arrow(ctx)->r29.s64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823b2d28
	sub_823B2D28(ctx, base);
loc_823B6590:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6604
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6604;
	// lwz ctx_arrow(ctx)->r31,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6604
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6604;
loc_823B65A4:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r30.s64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,22
	ctx_arrow(ctx)->r4.s64 = 22;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r31,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b65a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B65A4;
loc_823B6604:
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0
	xer.ca = ctx_arrow(ctx)->r27.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r27.s64;
	// lwz ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,3
	xer.ca = (ctx_arrow(ctx)->r30.s32 < 0) & ((ctx_arrow(ctx)->r30.u32 & 0x7) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s32 >> 3;
	// addze ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// subfic ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,8
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 8;
	ctx_arrow(ctx)->r31.s64 = 8 - ctx_arrow(ctx)->r11.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6638
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6638;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r21.u64;
loc_823B6638:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,19
	ctx_arrow(ctx)->r4.s64 = 19;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,20
	ctx_arrow(ctx)->r4.s64 = 20;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0
	xer.ca = ctx_arrow(ctx)->r27.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r27.s64;
	// li ctx_arrow(ctx)->r4,21
	ctx_arrow(ctx)->r4.s64 = 21;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r11.s64;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r26.s64;
	// li ctx_arrow(ctx)->r4,22
	ctx_arrow(ctx)->r4.s64 = 22;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li ctx_arrow(ctx)->r4,23
	ctx_arrow(ctx)->r4.s64 = 23;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6db8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6DB8;
loc_823B66B4:
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b66d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B66D0;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B66D0:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b66e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B66E8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B66E8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b66f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B66F8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
loc_823B66F8:
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b670c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B670C;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
loc_823B670C:
	// stw ctx_arrow(ctx)->r21,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r26.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r21,28(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 28);
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r21,20(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6784
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6784;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,-32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s64 + -32;
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r20.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r23,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// bl 0x82167da8
	sub_82167DA8(ctx, base);
loc_823B6784:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6c4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6C4C;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6c4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6C4C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22,80
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r22.s64 + 80;
	// lwzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b69a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B69A8;
loc_823B67C0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6998
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6998;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b73d0
	sub_823B73D0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6998
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6998;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b68c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B68C8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b68c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B68C8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b68c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B68C8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,44
	ctx_arrow(ctx)->r4.s64 = 44;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b41e8
	sub_823B41E8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,44
	ctx_arrow(ctx)->r4.s64 = 44;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b42a8
	sub_823B42A8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,45
	ctx_arrow(ctx)->r4.s64 = 45;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r20.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b41e8
	sub_823B41E8(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r20.s64 - ctx_arrow(ctx)->r11.s64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,45
	ctx_arrow(ctx)->r4.s64 = 45;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b42a8
	sub_823B42A8(ctx, base);
loc_823B68C8:
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
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6970
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6970;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6998
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6998;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lhz ctx_arrow(ctx)->r30,18(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 18);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7c90
	sub_823B7C90(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x82167e38
	sub_82167E38(ctx, base);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
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
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
	// b 0x823b6998
	goto loc_823B6998;
loc_823B6960:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// b 0x823b6548
	goto loc_823B6548;
loc_823B6970:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x82167e38
	sub_82167E38(ctx, base);
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
loc_823B6998:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b67c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B67C0;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B69A8:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22,68
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r22.s64 + 68;
	// lwzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6c4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6C4C;
loc_823B69B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6c40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6C40;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b73d0
	sub_823B73D0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6c40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6C40;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6ac0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6AC0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6ac0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6AC0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6ac0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6AC0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,44
	ctx_arrow(ctx)->r4.s64 = 44;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b41e8
	sub_823B41E8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7320
	sub_823B7320(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,44
	ctx_arrow(ctx)->r4.s64 = 44;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b42a8
	sub_823B42A8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,45
	ctx_arrow(ctx)->r4.s64 = 45;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r20.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b41e8
	sub_823B41E8(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r20.s64 - ctx_arrow(ctx)->r11.s64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,45
	ctx_arrow(ctx)->r4.s64 = 45;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// bl 0x823b42a8
	sub_823B42A8(ctx, base);
loc_823B6AC0:
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
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6bb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6BB8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6c40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6C40;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lhz ctx_arrow(ctx)->r30,18(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 18);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7c90
	sub_823B7C90(ctx, base);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// beq ctx_arrow(ctx)->r6,0x823b6b38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6B38;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B6B38:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6b4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6B4C;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B6B4C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6b60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6B60;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B6B60:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6b74
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6B74;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B6B74:
	// stw ctx_arrow(ctx)->r21,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stw ctx_arrow(ctx)->r21,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r21,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823b7e18
	sub_823B7E18(&ctx);
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
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823b7e18
	sub_823B7E18(ctx, base);
	// b 0x823b6c40
	goto loc_823B6C40;
loc_823B6BB8:
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// beq ctx_arrow(ctx)->r6,0x823b6bd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6BD4;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 28);
loc_823B6BD4:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6be8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6BE8;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
loc_823B6BE8:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6bfc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6BFC;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B6BFC:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6c10
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6C10;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B6C10:
	// stw ctx_arrow(ctx)->r21,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r21,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r21,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B6C40:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b69b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B69B8;
loc_823B6C4C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6cf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6CF8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823b3ee8
	sub_823B3EE8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r31,18(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r31.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r27.u32 + 18);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7cf0
	sub_823B7CF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6cf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6CF8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b6da8
	goto loc_823B6DA8;
loc_823B6CF8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6d30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6D30;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b6da8
	goto loc_823B6DA8;
loc_823B6D30:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 92;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6d68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6D68;
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6d58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6D58;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 28);
loc_823B6D58:
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r26.u32 + 0);
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// b 0x823b6d84
	goto loc_823B6D84;
loc_823B6D68:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6d78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6D78;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 28);
loc_823B6D78:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r26.u32 + 0);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823B6D84:
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 28);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6d98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6D98;
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B6D98:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 20);
loc_823B6DA8:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b66b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B66B4;
loc_823B6DB8:
	// lwz ctx_arrow(ctx)->r3,1296(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1408
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1408;
	// b 0x823ed168
	return;
}

alias(__imp__sub_823B6DD0) PPC_WEAK_FUNC(sub_823B6DD0);
PPC_FUNC_IMPL(__imp__sub_823B6DD0) {
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
	// bl 0x823b3528
	sub_823B3528(&ctx);
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,19624
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 19624;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6e2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6E2C;
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// bl 0x823b5e88
	sub_823B5E88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6e2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6E2C;
loc_823B6E08:
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r29.s64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,100
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 100, xer);
	// bge ctx_arrow(ctx)->r6,0x823b6e2c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B6E2C;
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b5e88
	sub_823B5E88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6e08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6E08;
loc_823B6E2C:
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6ec0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6EC0;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20944
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20944;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b6ec0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B6EC0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B6E54:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6e6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6E6C;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6e84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6E84;
loc_823B6E6C:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4540;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b6e54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B6E54;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B6E84:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b6ec0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B6EC0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b5e88
	sub_823B5E88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b6ec0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B6EC0;
loc_823B6E9C:
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r29.s64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,100
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 100, xer);
	// bge ctx_arrow(ctx)->r6,0x823b6ec0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B6EC0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b5e88
	sub_823B5E88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6e9c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6E9C;
loc_823B6EC0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B6EC8) PPC_WEAK_FUNC(sub_823B6EC8);
PPC_FUNC_IMPL(__imp__sub_823B6EC8) {
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
	// bl 0x823b3f50
	sub_823B3F50(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-20908
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -20908;
	// lwz ctx_arrow(ctx)->r6,-32(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b6f04
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B6F04;
loc_823B6EF0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x823b3f60
	sub_823B3F60(ctx, base);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r6.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b6ef0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B6EF0;
loc_823B6F04:
	// lwz ctx_arrow(ctx)->r7,-4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b6f2c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B6F2C;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B6F14:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b3f08
	sub_823B3F08(ctx, base);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4416
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 4416;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b6f14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B6F14;
loc_823B6F2C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B6F40) PPC_WEAK_FUNC(sub_823B6F40);
PPC_FUNC_IMPL(__imp__sub_823B6F40) {
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
	// bl 0x823b6ec8
	sub_823B6EC8(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20920
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20920;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + -4);
	// bl 0x823b3528
	sub_823B3528(&ctx);
	// lis ctx_arrow(ctx)->r10,4194
	ctx_arrow(ctx)->r10.s64 = 274857984;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,19923
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 19923;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// mulhwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = (uint64_t(ctx_arrow(ctx)->r11.u32) * uint64_t(ctx_arrow(ctx)->r10.u32)) >> 32;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,26,6,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 26) & 0x3FFFFFF;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823b3ed8
	sub_823B3ED8(&ctx);
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

alias(__imp__sub_823B6FA0) PPC_WEAK_FUNC(sub_823B6FA0);
PPC_FUNC_IMPL(__imp__sub_823B6FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz ctx_arrow(ctx)->r17,13192(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r16,-21768(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r16.u64 = PPC_Read_U32(ctx,  ctx);
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-144
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -144;
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r11.s64 = 917504;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28524
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 28524;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-20936
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -20936;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r30,-4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + -4);
	// bgt ctx_arrow(ctx)->r6,0x823b6ff0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B6FF0;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 * 4540;
	// li ctx_arrow(ctx)->r10,-5
	ctx_arrow(ctx)->r10.s64 = -5;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b6ff4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B6FF4;
loc_823B6FF0:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_823B6FF4:
	// bl 0x8209d088
	sub_8209D088(ctx, base);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7038
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7038;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32197
	ctx_arrow(ctx)->r11.s64 = -2110062592;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14320
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 14320;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,4540
	ctx_arrow(ctx)->r4.s64 = 4540;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823f3b88
	sub_823F3B88(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// b 0x823b703c
	goto loc_823B703C;
loc_823B7038:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
loc_823B703C:
	// lwz ctx_arrow(ctx)->r9,-4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,-8(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + -8);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7064
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7064;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
loc_823B7050:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4540;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7050
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7050;
loc_823B7064:
	// stw ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 4);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7090
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7090;
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r26.s32);
	// bl 0x823b7f00
	sub_823B7F00(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
loc_823B7090:
	// bl 0x823b6f40
	sub_823B6F40(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823B6FA8) PPC_WEAK_FUNC(sub_823B6FA8);
PPC_FUNC_IMPL(__imp__sub_823B6FA8) {
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
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-144
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -144;
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r11.s64 = 917504;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28524
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 28524;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-20936
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -20936;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r30,-4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + -4);
	// bgt ctx_arrow(ctx)->r6,0x823b6ff0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B6FF0;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 * 4540;
	// li ctx_arrow(ctx)->r10,-5
	ctx_arrow(ctx)->r10.s64 = -5;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b6ff4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B6FF4;
loc_823B6FF0:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_823B6FF4:
	// bl 0x8209d088
	sub_8209D088(ctx, base);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7038
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7038;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32197
	ctx_arrow(ctx)->r11.s64 = -2110062592;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14320
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 14320;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,4540
	ctx_arrow(ctx)->r4.s64 = 4540;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823f3b88
	sub_823F3B88(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// b 0x823b703c
	goto loc_823B703C;
loc_823B7038:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
loc_823B703C:
	// lwz ctx_arrow(ctx)->r9,-4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,-8(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + -8);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7064
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7064;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
loc_823B7050:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4540
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4540;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7050
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7050;
loc_823B7064:
	// stw ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 4);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7090
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7090;
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r26.s32);
	// bl 0x823b7f00
	sub_823B7F00(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
loc_823B7090:
	// bl 0x823b6f40
	sub_823B6F40(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823B709C) PPC_WEAK_FUNC(sub_823B709C);
PPC_FUNC_IMPL(__imp__sub_823B709C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-144
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -144;
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b3748
	sub_823B3748(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B70C8) PPC_WEAK_FUNC(sub_823B70C8);
PPC_FUNC_IMPL(__imp__sub_823B70C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823b6dd0
	sub_823B6DD0(&ctx);
	// bl 0x823b3cf8
	sub_823B3CF8(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B70F0) PPC_WEAK_FUNC(sub_823B70F0);
PPC_FUNC_IMPL(__imp__sub_823B70F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823b5e20
	sub_823B5E20(&ctx);
	// bl 0x823b40a8
	sub_823B40A8(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B7118) PPC_WEAK_FUNC(sub_823B7118);
PPC_FUNC_IMPL(__imp__sub_823B7118) {
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
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30536
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30536;
	// lbz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823b7154
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7154;
	// stb ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// sth ctx_arrow(ctx)->r30,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r30, 0);
loc_823B7154:
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7168
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7168;
	// bl 0x823b7f10
	sub_823B7F10(ctx, base);
	// stw ctx_arrow(ctx)->r30,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_823B7168:
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b717c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B717C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82167e38
	sub_82167E38(ctx, base);
loc_823B717C:
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

alias(__imp__sub_823B7198) PPC_WEAK_FUNC(sub_823B7198);
PPC_FUNC_IMPL(__imp__sub_823B7198) {
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
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7200
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7200;
	// li ctx_arrow(ctx)->r3,108
	ctx_arrow(ctx)->r3.s64 = 108;
	// bl 0x823b7f00
	sub_823B7F00(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b71f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B71F8;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 100);
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 104);
	// b 0x823b71fc
	goto loc_823B71FC;
loc_823B71F8:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_823B71FC:
	// stw ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_823B7200:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7218
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7218;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
loc_823B7218:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B7220) PPC_WEAK_FUNC(sub_823B7220);
PPC_FUNC_IMPL(__imp__sub_823B7220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b723c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B723C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
loc_823B723C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B7248) PPC_WEAK_FUNC(sub_823B7248);
PPC_FUNC_IMPL(__imp__sub_823B7248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B7258) PPC_WEAK_FUNC(sub_823B7258);
PPC_FUNC_IMPL(__imp__sub_823B7258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B7268) PPC_WEAK_FUNC(sub_823B7268);
PPC_FUNC_IMPL(__imp__sub_823B7268) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b72d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B72D0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b72d0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B72D0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
loc_823B72D0:
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

alias(__imp__sub_823B72E8) PPC_WEAK_FUNC(sub_823B72E8);
PPC_FUNC_IMPL(__imp__sub_823B72E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b72fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B72FC;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
loc_823B72FC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B7308) PPC_WEAK_FUNC(sub_823B7308);
PPC_FUNC_IMPL(__imp__sub_823B7308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_823B7320) PPC_WEAK_FUNC(sub_823B7320);
PPC_FUNC_IMPL(__imp__sub_823B7320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7334
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7334;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
loc_823B7334:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B7340) PPC_WEAK_FUNC(sub_823B7340);
PPC_FUNC_IMPL(__imp__sub_823B7340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 104);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 20, xer);
	// blt ctx_arrow(ctx)->r6,0x823b736c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B736C;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 104);
loc_823B736C:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7390
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7390;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b73b8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B73B8;
loc_823B7390:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 100);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 20, xer);
	// blt ctx_arrow(ctx)->r6,0x823b73b8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B73B8;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 100);
loc_823B73B8:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 5;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// blr 
	return;
}

alias(__imp__sub_823B73D0) PPC_WEAK_FUNC(sub_823B73D0);
PPC_FUNC_IMPL(__imp__sub_823B73D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 5;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b741c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B741C;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B73F0:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7424;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 20, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7408
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7408;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823B7408:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 5;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b73f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B73F0;
loc_823B741C:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
loc_823B7424:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B7430) PPC_WEAK_FUNC(sub_823B7430);
PPC_FUNC_IMPL(__imp__sub_823B7430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// b 0x823b3c98
	sub_823B3C98(&ctx);
	return;
}

alias(__imp__sub_823B7448) PPC_WEAK_FUNC(sub_823B7448);
PPC_FUNC_IMPL(__imp__sub_823B7448) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-20900
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -20900;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 12);
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 16);
	// bl 0x823b7f00
	sub_823B7F00(&ctx);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823b7f00
	sub_823B7F00(ctx, base);
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7f00
	sub_823B7F00(ctx, base);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 8);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// ble ctx_arrow(ctx)->r6,0x823b74c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B74C8;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r11.s64;
loc_823B74AC:
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r11.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// stbx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r10.u32));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r31.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b74ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B74AC;
loc_823B74C8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 20);
	// bl 0x823b3f78
	sub_823B3F78(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B74E0) PPC_WEAK_FUNC(sub_823B74E0);
PPC_FUNC_IMPL(__imp__sub_823B74E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20900
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20900;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
	// stbx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32));
	// blr 
	return;
}

alias(__imp__sub_823B7508) PPC_WEAK_FUNC(sub_823B7508);
PPC_FUNC_IMPL(__imp__sub_823B7508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,-20900(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823B752C) PPC_WEAK_FUNC(sub_823B752C);
PPC_FUNC_IMPL(__imp__sub_823B752C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823B7530) PPC_WEAK_FUNC(sub_823B7530);
PPC_FUNC_IMPL(__imp__sub_823B7530) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20896
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20896;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7598
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7598;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
loc_823B7568:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7588
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7588;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r30.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
loc_823B7588:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7568
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7568;
loc_823B7598:
	// bl 0x823b7f00
	sub_823B7F00(ctx, base);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// ble ctx_arrow(ctx)->r6,0x823b7694
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7694;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r8.s64;
	// li ctx_arrow(ctx)->r31,255
	ctx_arrow(ctx)->r31.s64 = 255;
loc_823B75C4:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7680
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7680;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r8.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// stw ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r30.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r30.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r30.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,29,3,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b762c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B762C;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
loc_823B762C:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,29,3,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r28.s64;
	// ble ctx_arrow(ctx)->r6,0x823b7678
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7678;
loc_823B7644:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7654
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7654;
	// stbx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r7.u32));
	// b 0x823b766c
	goto loc_823B766C;
loc_823B7654:
	// bne ctx_arrow(ctx)->r6,0x823b7668
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7668;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// slw ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r28, 0, BINARY_OP_U8(ctx_arrow(ctx)->r28, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r31.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r28) & 0x3F)), 0));
	// stbx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r7.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// b 0x823b766c
	goto loc_823B766C;
loc_823B7668:
	// stbx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r7.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
loc_823B766C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r5.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7644
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7644;
loc_823B7678:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r7.u64;
	// b 0x823b7684
	goto loc_823B7684;
loc_823B7680:
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r8.u32);
loc_823B7684:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b75c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B75C4;
loc_823B7694:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B76A0) PPC_WEAK_FUNC(sub_823B76A0);
PPC_FUNC_IMPL(__imp__sub_823B76A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823b7f10
	sub_823B7F10(ctx, base);
	return;
}

alias(__imp__sub_823B76AC) PPC_WEAK_FUNC(sub_823B76AC);
PPC_FUNC_IMPL(__imp__sub_823B76AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823B76B0) PPC_WEAK_FUNC(sub_823B76B0);
PPC_FUNC_IMPL(__imp__sub_823B76B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 29) & 0x1FFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r8.s64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// lbzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r7.u64;
	// stbx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32));
	// blr 
	return;
}

alias(__imp__sub_823B76E0) PPC_WEAK_FUNC(sub_823B76E0);
PPC_FUNC_IMPL(__imp__sub_823B76E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 29) & 0x1FFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r8.s64;
	// lbz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// blr 
	return;
}

alias(__imp__sub_823B7718) PPC_WEAK_FUNC(sub_823B7718);
PPC_FUNC_IMPL(__imp__sub_823B7718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B7728) PPC_WEAK_FUNC(sub_823B7728);
PPC_FUNC_IMPL(__imp__sub_823B7728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r9,-31987
	ctx_arrow(ctx)->r9.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// lwz ctx_arrow(ctx)->r9,-20896(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// bltlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.lt()) return;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823B7768) PPC_WEAK_FUNC(sub_823B7768);
PPC_FUNC_IMPL(__imp__sub_823B7768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r11,-20896(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B7780) PPC_WEAK_FUNC(sub_823B7780);
PPC_FUNC_IMPL(__imp__sub_823B7780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B7790) PPC_WEAK_FUNC(sub_823B7790);
PPC_FUNC_IMPL(__imp__sub_823B7790) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b77f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B77F0;
loc_823B77B4:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b77e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B77E0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
loc_823B77E0:
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,31,25,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 31) & 0x7F;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b77b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B77B4;
loc_823B77F0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B77F8) PPC_WEAK_FUNC(sub_823B77F8);
PPC_FUNC_IMPL(__imp__sub_823B77F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed11c
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r25,-31987
	ctx_arrow(ctx)->r25.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r28,2,0,29
	ctx_arrow(ctx)->r24.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = 1;
	// lwz ctx_arrow(ctx)->r8,-20896(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r21.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7844
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7844;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
loc_823B7844:
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r5.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7854
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7854;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r11.s64;
loc_823B7854:
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10,29,3,31
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,29,3,31
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29,3,0,28
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subf ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// subf ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r7.s64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r26.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7880
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7880;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r23.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b78bc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B78BC;
loc_823B7880:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s64 + 1;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r21.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 255;
	// clrlwi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// nor ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r31.u64 = ~(ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r27.u64);
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// bl 0x823b7790
	sub_823B7790(ctx, base);
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,-20896(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r27.u64;
	// stbx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r26.u32 + ctx_arrow(ctx)->r30.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823B78BC:
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r29.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7910
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7910;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r21.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,29,3,31
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r27.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7908
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7908;
loc_823B78E0:
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// not ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ~ctx_arrow(ctx)->r11.u64;
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	// bl 0x823b7790
	sub_823B7790(ctx, base);
	// stbx ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r30.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r25), 0);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r27.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b78e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B78E0;
loc_823B7908:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r25.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r29.s32, xer);
loc_823B7910:
	// beq ctx_arrow(ctx)->r6,0x823b793c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B793C;
loc_823B7914:
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// not ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ~ctx_arrow(ctx)->r11.u64;
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u32 & 0xFF;
	// bl 0x823b7790
	sub_823B7790(ctx, base);
	// stbx ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r30.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r25), 0);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7914
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7914;
loc_823B793C:
	// li ctx_arrow(ctx)->r27,255
	ctx_arrow(ctx)->r27.s64 = 255;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7950
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7950;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r23.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7980
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7980;
loc_823B7950:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r22.s64 + 1;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r27.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// nor ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r25.u64 = ~(ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r31.u64);
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u32 & 0xFF;
	// bl 0x823b7790
	sub_823B7790(ctx, base);
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r31.u64;
	// stbx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r30.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823B7980:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b79d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B79D0;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r23.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b79d0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B79D0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s64 + 1;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r22.s64 + 1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r21.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r27.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 255;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// nor ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r27.u64 = ~(ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r31.u64);
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u32 & 0xFF;
	// bl 0x823b7790
	sub_823B7790(ctx, base);
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r31.u64;
	// stbx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r30.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823B79D0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed16c
	return;
}

alias(__imp__sub_823B79D8) PPC_WEAK_FUNC(sub_823B79D8);
PPC_FUNC_IMPL(__imp__sub_823B79D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B79E8) PPC_WEAK_FUNC(sub_823B79E8);
PPC_FUNC_IMPL(__imp__sub_823B79E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823B79F8) PPC_WEAK_FUNC(sub_823B79F8);
PPC_FUNC_IMPL(__imp__sub_823B79F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B7A08) PPC_WEAK_FUNC(sub_823B7A08);
PPC_FUNC_IMPL(__imp__sub_823B7A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,-20896(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bgtlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.gt()) return;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B7A30) PPC_WEAK_FUNC(sub_823B7A30);
PPC_FUNC_IMPL(__imp__sub_823B7A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,-20896(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// blr 
	return;
}

alias(__imp__sub_823B7A50) PPC_WEAK_FUNC(sub_823B7A50);
PPC_FUNC_IMPL(__imp__sub_823B7A50) {
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
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7b0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7B0C;
loc_823B7A6C:
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
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7b00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7B00;
	// lbz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7b00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7B00;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lhz ctx_arrow(ctx)->r30,18(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 18);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b7a30
	sub_823B7A30(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,31,1,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7ad8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7AD8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
loc_823B7AD8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7aec
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7AEC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7b00
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7B00;
	// b 0x823b7af4
	goto loc_823B7AF4;
loc_823B7AEC:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7afc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7AFC;
loc_823B7AF4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7b00
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7B00;
loc_823B7AFC:
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 8);
loc_823B7B00:
	// lwz ctx_arrow(ctx)->r31,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7a6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7A6C;
loc_823B7B0C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B7B18) PPC_WEAK_FUNC(sub_823B7B18);
PPC_FUNC_IMPL(__imp__sub_823B7B18) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r10,-20888(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7b6c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7B6C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
loc_823B7B48:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7b5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7B5C;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8);
loc_823B7B5C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7b48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7B48;
loc_823B7B6C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7a50
	sub_823B7A50(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7a50
	sub_823B7A50(ctx, base);
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

alias(__imp__sub_823B7B98) PPC_WEAK_FUNC(sub_823B7B98);
PPC_FUNC_IMPL(__imp__sub_823B7B98) {
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
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// bl 0x823b7a30
	sub_823B7A30(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r8.u64;
	// bl 0x823b79d8
	sub_823B79D8(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7bd4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7BD4;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
loc_823B7BD4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7bf8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7BF8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7c00
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7C00;
loc_823B7BE4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r7.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823B7BF8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7c08
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7C08;
loc_823B7C00:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7be4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7BE4;
loc_823B7C08:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// bl 0x823b79f8
	sub_823B79F8(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7c28
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7C28;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
loc_823B7C28:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7c54
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7C54;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r3.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7c40
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7C40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7c78
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7C78;
loc_823B7C40:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823B7C54:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7c78
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7C78;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7c78
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7C78;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823B7C78:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B7C90) PPC_WEAK_FUNC(sub_823B7C90);
PPC_FUNC_IMPL(__imp__sub_823B7C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823b7718
	sub_823B7718(ctx, base);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// bl 0x823b79d8
	sub_823B79D8(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r3.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7cc4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7CC4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r3.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7cdc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7CDC;
	// b 0x823b7ccc
	goto loc_823B7CCC;
loc_823B7CC4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7cd4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7CD4;
loc_823B7CCC:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7cdc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7CDC;
loc_823B7CD4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// bl 0x823b79e8
	sub_823B79E8(ctx, base);
loc_823B7CDC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B7CF0) PPC_WEAK_FUNC(sub_823B7CF0);
PPC_FUNC_IMPL(__imp__sub_823B7CF0) {
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
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// bl 0x823b76e0
	sub_823B76E0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7de8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7DE8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823b7780
	sub_823B7780(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7a30
	sub_823B7A30(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 30) & 0x3FFFFFFF;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r3.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7d3c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7D3C;
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 - ctx_arrow(ctx)->r3.s64;
loc_823B7D3C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x7FFFFFFF;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7d50
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7D50;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
loc_823B7D50:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7d78
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7D78;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7d80
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7D80;
loc_823B7D60:
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// li ctx_arrow(ctx)->r4,33
	ctx_arrow(ctx)->r4.s64 = 33;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// li ctx_arrow(ctx)->r4,33
	ctx_arrow(ctx)->r4.s64 = 33;
	// b 0x823b7dfc
	goto loc_823B7DFC;
loc_823B7D78:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7d88
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7D88;
loc_823B7D80:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7d60
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7D60;
loc_823B7D88:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// bl 0x823b76b0
	sub_823B76B0(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r30.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7dc0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7DC0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r30.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b7e08
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B7E08;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7e08
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7E08;
	// bl 0x823b77f8
	sub_823B77F8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B7DC0:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7dd0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7DD0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823b7e08
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B7E08;
loc_823B7DD0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823b77f8
	sub_823B77F8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B7DE8:
	// bl 0x823b3ef8
	sub_823B3EF8(ctx, base);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// bl 0x823b42a0
	sub_823B42A0(ctx, base);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
loc_823B7DFC:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b4330
	sub_823B4330(ctx, base);
loc_823B7E08:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B7E18) PPC_WEAK_FUNC(sub_823B7E18);
PPC_FUNC_IMPL(__imp__sub_823B7E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stb ctx_arrow(ctx)->r3,-20876(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20876));
	// blr 
	return;
}

alias(__imp__sub_823B7E28) PPC_WEAK_FUNC(sub_823B7E28);
PPC_FUNC_IMPL(__imp__sub_823B7E28) {
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
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// bl 0x823b2ae8
	sub_823B2AE8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b2ad0
	sub_823B2AD0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r3.s64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-20892
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -20892;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r4.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7eb4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7EB4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b2ef8
	sub_823B2EF8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7eb4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7EB4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b7eb4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B7EB4;
	// bl 0x823b3ac0
	sub_823B3AC0(ctx, base);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b7ea4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B7EA4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7eb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7EB4;
loc_823B7EA4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b7508
	sub_823B7508(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B7EB4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B7EC0) PPC_WEAK_FUNC(sub_823B7EC0);
PPC_FUNC_IMPL(__imp__sub_823B7EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20872(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20872);
	// blr 
	return;
}

alias(__imp__sub_823B7ED0) PPC_WEAK_FUNC(sub_823B7ED0);
PPC_FUNC_IMPL(__imp__sub_823B7ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20864(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20864);
	// blr 
	return;
}

alias(__imp__sub_823B7EE0) PPC_WEAK_FUNC(sub_823B7EE0);
PPC_FUNC_IMPL(__imp__sub_823B7EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20868(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20868);
	// blr 
	return;
}

alias(__imp__sub_823B7EF0) PPC_WEAK_FUNC(sub_823B7EF0);
PPC_FUNC_IMPL(__imp__sub_823B7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20860(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20860);
	// blr 
	return;
}

alias(__imp__sub_823B7F00) PPC_WEAK_FUNC(sub_823B7F00);
PPC_FUNC_IMPL(__imp__sub_823B7F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r11,-20872(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823B7F10) PPC_WEAK_FUNC(sub_823B7F10);
PPC_FUNC_IMPL(__imp__sub_823B7F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r11,-20864(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823B7F20) PPC_WEAK_FUNC(sub_823B7F20);
PPC_FUNC_IMPL(__imp__sub_823B7F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20872
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20872;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b7f44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B7F44;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_823B7F44:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823B7F50) PPC_WEAK_FUNC(sub_823B7F50);
PPC_FUNC_IMPL(__imp__sub_823B7F50) {
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
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,3,0,28
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20856
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20856;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4,3,0,28
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// stw ctx_arrow(ctx)->r3,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 100);
	// stw ctx_arrow(ctx)->r4,104(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 104);
	// stw ctx_arrow(ctx)->r5,108(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 108);
	// stw ctx_arrow(ctx)->r6,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// stw ctx_arrow(ctx)->r7,92(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 92);
loc_823B7F88:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 88;
	// stw ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 88;
	// stw ctx_arrow(ctx)->r29,12(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 12);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 8);
	// stb ctx_arrow(ctx)->r29,16(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 80;
	// stb ctx_arrow(ctx)->r29,17(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 17, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,20
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 20;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b7f88
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B7F88;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 88;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// li ctx_arrow(ctx)->r5,44
	ctx_arrow(ctx)->r5.s64 = 44;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823edf70
	sub_823EDF70(&ctx);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// stw ctx_arrow(ctx)->r29,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,116
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 116;
	// stw ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r29,136(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 136);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// lwz ctx_arrow(ctx)->r10,-21012(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r11,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// bl 0x823bde78
	sub_823BDE78(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823B8090) PPC_WEAK_FUNC(sub_823B8090);
PPC_FUNC_IMPL(__imp__sub_823B8090) {
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
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8140
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8140;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20856
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20856;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b8140
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B8140;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,4,0,27
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ldx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -16;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// ld ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
loc_823B8140:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B8148) PPC_WEAK_FUNC(sub_823B8148);
PPC_FUNC_IMPL(__imp__sub_823B8148) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20856
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20856;
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b8294
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B8294;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stdx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// bl 0x823b3528
	sub_823B3528(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// li ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r26.s64 = -1;
loc_823B8204:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8240
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8240;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B821C:
	// ld ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r7.u64, ctx_arrow(ctx)->r29.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b823c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B823C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b821c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B821C;
	// b 0x823b8240
	goto loc_823B8240;
loc_823B823C:
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
loc_823B8240:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8258
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8258;
	// lis ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,65535
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 65535;
	// b 0x823b825c
	goto loc_823B825C;
loc_823B8258:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r26.u64;
loc_823B825C:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,20
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 20;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 88;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8204
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8204;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
loc_823B8294:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823B82A0) PPC_WEAK_FUNC(sub_823B82A0);
PPC_FUNC_IMPL(__imp__sub_823B82A0) {
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
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,-20856
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r10.s64 + -20856;
	// li ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = -1;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b82fc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B82FC;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B82D0:
	// ld ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r8.u64, ctx_arrow(ctx)->r28.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b82f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B82F0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b82d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B82D0;
	// b 0x823b82fc
	goto loc_823B82FC;
loc_823B82F0:
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823b838c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B838C;
loc_823B82FC:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b837c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B837C;
	// li ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r31.s64 = -1;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8370
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8370;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_823B832C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// blt ctx_arrow(ctx)->r6,0x823b8344
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8344;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823b834c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B834C;
loc_823B8344:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
loc_823B834C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r8.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b832c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B832C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,2000
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 2000, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8370
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8370;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b8090
	sub_823B8090(ctx, base);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B8370:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b838c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B838C;
loc_823B837C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823b8148
	sub_823B8148(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823B838C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823B8398) PPC_WEAK_FUNC(sub_823B8398);
PPC_FUNC_IMPL(__imp__sub_823B8398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r3,-20740(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B83A8) PPC_WEAK_FUNC(sub_823B83A8);
PPC_FUNC_IMPL(__imp__sub_823B83A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-20760(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20760);
	// blr 
	return;
}

alias(__imp__sub_823B83B8) PPC_WEAK_FUNC(sub_823B83B8);
PPC_FUNC_IMPL(__imp__sub_823B83B8) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-272(ctx_arrow(ctx)->r1)
	ea = -272 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,104(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,196(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 196);
	// beq ctx_arrow(ctx)->r6,0x823b84a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B84A0;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r25,100
	ctx_arrow(ctx)->r25.s64 = 100;
loc_823B83F4:
	// lbz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b848c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B848C;
	// stw ctx_arrow(ctx)->r25,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8488
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8488;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8488
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8488;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r26.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8488
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8488;
loc_823B8450:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 88;
	// lwz ctx_arrow(ctx)->r5,-4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,10
	ctx_arrow(ctx)->r7.s64 = 10;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,10
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 10;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8450
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8450;
loc_823B8488:
	// lwz ctx_arrow(ctx)->r3,104(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B848C:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,20
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 20;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,84
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 84;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b83f4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B83F4;
loc_823B84A0:
	// lwz ctx_arrow(ctx)->r3,196(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_823B84B0) PPC_WEAK_FUNC(sub_823B84B0);
PPC_FUNC_IMPL(__imp__sub_823B84B0) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8590
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8590;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 + 8;
loc_823B84E4:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b851c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B851C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B84F8:
	// ld ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r6.u64, ctx_arrow(ctx)->r29.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8518
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8518;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b84f8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B84F8;
	// b 0x823b851c
	goto loc_823B851C;
loc_823B8518:
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
loc_823B851C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8538
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8538;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,20
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 20;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 88;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b84e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B84E4;
loc_823B8538:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8590
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8590;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823b82a0
	sub_823B82A0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8590
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8590;
	// bl 0x823b3528
	sub_823B3528(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r3,104(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B8590:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823B8598) PPC_WEAK_FUNC(sub_823B8598);
PPC_FUNC_IMPL(__imp__sub_823B8598) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// lwz ctx_arrow(ctx)->r3,104(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8628
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8628;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 16;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8628
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8628;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r9,-21016(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32));
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,104(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B8628:
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

alias(__imp__sub_823B8640) PPC_WEAK_FUNC(sub_823B8640);
PPC_FUNC_IMPL(__imp__sub_823B8640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B8678) PPC_WEAK_FUNC(sub_823B8678);
PPC_FUNC_IMPL(__imp__sub_823B8678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,-20756
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + -20756;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,-92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r7.s64 + -92;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b86e4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B86E4;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,-92
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r7.s64 + -92;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B86BC:
	// ld ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r3.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b86e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B86E0;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b86bc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B86BC;
	// b 0x823b86e4
	goto loc_823B86E4;
loc_823B86E0:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
loc_823B86E4:
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,-92
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r7.s64 + -92;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stdx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r8.u32);
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// blr 
	return;
}

alias(__imp__sub_823B8720) PPC_WEAK_FUNC(sub_823B8720);
PPC_FUNC_IMPL(__imp__sub_823B8720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64;
loc_823B875C:
	// ld ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r5.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8780
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8780;
	// lwzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r5.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b875c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B875C;
	// blr 
	return;
loc_823B8780:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r8.u32);
	// ldx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// stdx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r7.u32);
	// blr 
	return;
}

alias(__imp__sub_823B87A0) PPC_WEAK_FUNC(sub_823B87A0);
PPC_FUNC_IMPL(__imp__sub_823B87A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B87D8) PPC_WEAK_FUNC(sub_823B87D8);
PPC_FUNC_IMPL(__imp__sub_823B87D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ldx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B8810) PPC_WEAK_FUNC(sub_823B8810);
PPC_FUNC_IMPL(__imp__sub_823B8810) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-20856
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -20856;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8934
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8934;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8894
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8894;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 8;
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B886C:
	// ld ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r3.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8890
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8890;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b886c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B886C;
	// b 0x823b8894
	goto loc_823B8894;
loc_823B8890:
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
loc_823B8894:
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8934
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8934;
	// lwz ctx_arrow(ctx)->r8,104(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b8934
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B8934;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,3,0,28
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r8.s64 + 8;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stdx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r6.u32);
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// ble ctx_arrow(ctx)->r6,0x823b8908
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8908;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B88E4:
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8904
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8904;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r7.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b88e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B88E4;
	// b 0x823b8908
	goto loc_823B8908;
loc_823B8904:
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
loc_823B8908:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8934
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8934;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,65535
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 65535;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B8934:
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

alias(__imp__sub_823B8948) PPC_WEAK_FUNC(sub_823B8948);
PPC_FUNC_IMPL(__imp__sub_823B8948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B8980) PPC_WEAK_FUNC(sub_823B8980);
PPC_FUNC_IMPL(__imp__sub_823B8980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ldx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B89C0) PPC_WEAK_FUNC(sub_823B89C0);
PPC_FUNC_IMPL(__imp__sub_823B89C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20848;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B8A04:
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8a24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8A24;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r8.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8a04
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8A04;
	// blr 
	return;
loc_823B8A24:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_823B8A30) PPC_WEAK_FUNC(sub_823B8A30);
PPC_FUNC_IMPL(__imp__sub_823B8A30) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20856
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20856;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8b28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8B28;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8b28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8B28;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// stbx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32));
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8b28
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8B28;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// li ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = -1;
loc_823B8AD4:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// ldx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// bl 0x823b89c0
	sub_823B89C0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8afc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8AFC;
	// lis ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,65535
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 65535;
loc_823B8AFC:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8ad4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8AD4;
loc_823B8B28:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823B8B30) PPC_WEAK_FUNC(sub_823B8B30);
PPC_FUNC_IMPL(__imp__sub_823B8B30) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-20856
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -20856;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8c6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8C6C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8c6c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8C6C;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64;
loc_823B8B88:
	// ld ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r3.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8bb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8BB0;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8b88
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8B88;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B8BB0:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r8.u32);
	// ldx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// stdx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r7.u32);
	// ble ctx_arrow(ctx)->r6,0x823b8c6c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8C6C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B8BDC:
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r9.u64, ctx_arrow(ctx)->r4.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8c00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8C00;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8bdc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8BDC;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B8C00:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8c6c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8C6C;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
loc_823B8C10:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b89c0
	sub_823B89C0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8c34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8C34;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8c10
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8C10;
	// b 0x823b8c38
	goto loc_823B8C38;
loc_823B8C34:
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
loc_823B8C38:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8c64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8C64;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = -1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B8C64:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b8090
	sub_823B8090(ctx, base);
loc_823B8C6C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B8C78) PPC_WEAK_FUNC(sub_823B8C78);
PPC_FUNC_IMPL(__imp__sub_823B8C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// stw ctx_arrow(ctx)->r5,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-21704
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -21704;
	// stw ctx_arrow(ctx)->r6,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 76);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 36);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 68);
	// blr 
	return;
}

alias(__imp__sub_823B8CB0) PPC_WEAK_FUNC(sub_823B8CB0);
PPC_FUNC_IMPL(__imp__sub_823B8CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & 0xFFFFFFFF;
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
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
	// lfs f0,-21672(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823ee958
	sub_823EE958(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mulli ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,136
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 * 136;
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// li ctx_arrow(ctx)->r12,28
	ctx_arrow(ctx)->r12.s64 = 28;
	// stfiwx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r12.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
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

alias(__imp__sub_823B8D90) PPC_WEAK_FUNC(sub_823B8D90);
PPC_FUNC_IMPL(__imp__sub_823B8D90) {
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
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8e6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8E6C;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8e6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8E6C;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8e04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8E04;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// bge ctx_arrow(ctx)->r6,0x823b8df8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B8DF8;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// b 0x823b8e18
	goto loc_823B8E18;
loc_823B8DF8:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// b 0x823b8e18
	goto loc_823B8E18;
loc_823B8E04:
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// bl 0x8235de98
	sub_8235DE98(&ctx);
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_823B8E18:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b8e58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B8E58;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8e6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8E6C;
	// lwz ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823B8E58:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B8E6C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B8E78) PPC_WEAK_FUNC(sub_823B8E78);
PPC_FUNC_IMPL(__imp__sub_823B8E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r29.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823B8EC8) PPC_WEAK_FUNC(sub_823B8EC8);
PPC_FUNC_IMPL(__imp__sub_823B8EC8) {
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
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8f4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8F4C;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b8f38
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B8F38;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r28.u64;
loc_823B8EFC:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8f24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8F24;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx)->r11.u32);
loc_823B8F24:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b8efc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B8EFC;
loc_823B8F38:
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_823B8F4C:
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8f68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8F68;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r28,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
loc_823B8F68:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B8F70) PPC_WEAK_FUNC(sub_823B8F70);
PPC_FUNC_IMPL(__imp__sub_823B8F70) {
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
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b8fa4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B8FA4;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_823B8FA4:
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

alias(__imp__sub_823B8FB8) PPC_WEAK_FUNC(sub_823B8FB8);
PPC_FUNC_IMPL(__imp__sub_823B8FB8) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// li ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = 7;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823B901C:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bdnz 0x823b901c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B901C;
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

alias(__imp__sub_823B9040) PPC_WEAK_FUNC(sub_823B9040);
PPC_FUNC_IMPL(__imp__sub_823B9040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9078
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9078;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B9058:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9078
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9078;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,136
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 136;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9058
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9058;
loc_823B9078:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b90c8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B90C8;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,136
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 * 136;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,64
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 64, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9120
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9120;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,68
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 68;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_STORE_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r5.u16);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
loc_823B90C8:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9120
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9120;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,136
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r8.s64 * 136;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,136
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 136;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,136
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 136;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// sth ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r10)
	PPC_STORE_U16(ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r5.u16);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
loc_823B9120:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B9128) PPC_WEAK_FUNC(sub_823B9128);
PPC_FUNC_IMPL(__imp__sub_823B9128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9160
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9160;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B9140:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b918c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B918C;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,136
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 136;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9140
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9140;
loc_823B9160:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9194
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9194;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,136
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r8.s64 * 136;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
loc_823B918C:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
loc_823B9194:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B91A0) PPC_WEAK_FUNC(sub_823B91A0);
PPC_FUNC_IMPL(__imp__sub_823B91A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r6,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b91fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B91FC;
	// lwz ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r5.u64;
loc_823B91B8:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b91ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B91EC;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B91D0:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9204
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9204;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b91d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B91D0;
loc_823B91EC:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r6.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b91b8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B91B8;
loc_823B91FC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_823B9204:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823B9220) PPC_WEAK_FUNC(sub_823B9220);
PPC_FUNC_IMPL(__imp__sub_823B9220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_823B9238) PPC_WEAK_FUNC(sub_823B9238);
PPC_FUNC_IMPL(__imp__sub_823B9238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9254
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9254;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,136
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 136;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
loc_823B9254:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B9260) PPC_WEAK_FUNC(sub_823B9260);
PPC_FUNC_IMPL(__imp__sub_823B9260) {
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
	// bl 0x823b8fb8
	sub_823B8FB8(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r5,808
	ctx_arrow(ctx)->r5.s64 = 808;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 96;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// bl 0x823edf70
	sub_823EDF70(&ctx);
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

alias(__imp__sub_823B92A8) PPC_WEAK_FUNC(sub_823B92A8);
PPC_FUNC_IMPL(__imp__sub_823B92A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed11c
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r23.s64 = 0;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r23,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
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
	// lfs f0,-21672(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823ee958
	sub_823EE958(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r23.u64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r26,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b93a8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B93A8;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r26.s64 + -1;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,96
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r31.s64 + 96;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r23.u64;
loc_823B9320:
	// stw ctx_arrow(ctx)->r23,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r24.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b9338
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B9338;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r28.s64;
	// b 0x823b933c
	goto loc_823B933C;
loc_823B9338:
	// li ctx_arrow(ctx)->r6,14
	ctx_arrow(ctx)->r6.s64 = 14;
loc_823B933C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8235daa0
	sub_8235DAA0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,122
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 122, xer);
	// bne ctx_arrow(ctx)->r6,0x823b93d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B93D4;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r27.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,14
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 14;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1904
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1904;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r26.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9320
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9320;
loc_823B93A8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r22,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// stw ctx_arrow(ctx)->r21,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B93CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
loc_823B93D4:
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// beq ctx_arrow(ctx)->r6,0x823b93cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B93CC;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r22
	ctr.u64 = ctx_arrow(ctx)->r22.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
}

alias(__imp__sub_823B9408) PPC_WEAK_FUNC(sub_823B9408);
PPC_FUNC_IMPL(__imp__sub_823B9408) {
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
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// li ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = 7;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823B9434:
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823b9434
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B9434;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 * 14;
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,14
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 14, xer);
	// ble ctx_arrow(ctx)->r6,0x823b945c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B945C;
	// li ctx_arrow(ctx)->r6,14
	ctx_arrow(ctx)->r6.s64 = 14;
loc_823B945C:
	// lwz ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r7,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,136
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 * 136;
	// lwz ctx_arrow(ctx)->r9,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 96;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235daa0
	sub_8235DAA0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823b94d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B94D8;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// beq ctx_arrow(ctx)->r6,0x823b94d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B94D8;
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B94D8:
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

alias(__imp__sub_823B94F0) PPC_WEAK_FUNC(sub_823B94F0);
PPC_FUNC_IMPL(__imp__sub_823B94F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,101
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 101, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9520
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9520;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 12;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 88);
	// blr 
	return;
loc_823B9520:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823B9528) PPC_WEAK_FUNC(sub_823B9528);
PPC_FUNC_IMPL(__imp__sub_823B9528) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r3,92(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 92);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
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

alias(__imp__sub_823B9578) PPC_WEAK_FUNC(sub_823B9578);
PPC_FUNC_IMPL(__imp__sub_823B9578) {
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
	// lwz ctx_arrow(ctx)->r3,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b95ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B95AC;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 92);
loc_823B95AC:
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

alias(__imp__sub_823B95C0) PPC_WEAK_FUNC(sub_823B95C0);
PPC_FUNC_IMPL(__imp__sub_823B95C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
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
	// lfs f0,-21672(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823ee958
	sub_823EE958(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// bl 0x823b9528
	sub_823B9528(&ctx);
	// lwz ctx_arrow(ctx)->r26,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r27.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b96bc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B96BC;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r26.s64 + -1;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
loc_823B9638:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r25.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b964c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B964C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r27.s64;
	// b 0x823b9650
	goto loc_823B9650;
loc_823B964C:
	// li ctx_arrow(ctx)->r6,14
	ctx_arrow(ctx)->r6.s64 = 14;
loc_823B9650:
	// lwz ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// ld ctx_arrow(ctx)->r4,96(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235dbe8
	sub_8235DBE8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b96e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B96E8;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r30.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,14
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 14;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1904
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1904;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r26.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9638
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9638;
loc_823B96BC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// stw ctx_arrow(ctx)->r23,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B96E0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed174
	return;
loc_823B96E8:
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// beq ctx_arrow(ctx)->r6,0x823b96e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B96E0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r24
	ctr.u64 = ctx_arrow(ctx)->r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed174
	return;
}

alias(__imp__sub_823B9718) PPC_WEAK_FUNC(sub_823B9718);
PPC_FUNC_IMPL(__imp__sub_823B9718) {
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
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823B9740:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823b9740
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B9740;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r8,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235de80
	sub_8235DE80(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823b97c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B97C0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// beq ctx_arrow(ctx)->r6,0x823b97c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B97C0;
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B97C0:
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

alias(__imp__sub_823B97D8) PPC_WEAK_FUNC(sub_823B97D8);
PPC_FUNC_IMPL(__imp__sub_823B97D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
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
	// lfs f0,-21672(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823ee958
	sub_823EE958(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// bl 0x823b9528
	sub_823B9528(&ctx);
	// lwz ctx_arrow(ctx)->r26,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r27.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b98d4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B98D4;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r26.s64 + -1;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
loc_823B9850:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r25.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b9864
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B9864;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r27.s64;
	// b 0x823b9868
	goto loc_823B9868;
loc_823B9864:
	// li ctx_arrow(ctx)->r6,14
	ctx_arrow(ctx)->r6.s64 = 14;
loc_823B9868:
	// lwz ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r4,96(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235db88
	sub_8235DB88(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b9900
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B9900;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r30.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,14
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 14;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1904
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1904;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r26.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9850
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9850;
loc_823B98D4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// stw ctx_arrow(ctx)->r23,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B98F8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed174
	return;
loc_823B9900:
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// beq ctx_arrow(ctx)->r6,0x823b98f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B98F8;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r24
	ctr.u64 = ctx_arrow(ctx)->r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed174
	return;
}

alias(__imp__sub_823B9930) PPC_WEAK_FUNC(sub_823B9930);
PPC_FUNC_IMPL(__imp__sub_823B9930) {
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
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b99c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B99C0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823b99c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B99C0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823b997c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B997C;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// b 0x823b9990
	goto loc_823B9990;
loc_823B997C:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// bl 0x8235de98
	sub_8235DE98(&ctx);
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_823B9990:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b99c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B99C0;
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 ^ 1;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B99C0:
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

alias(__imp__sub_823B99D8) PPC_WEAK_FUNC(sub_823B99D8);
PPC_FUNC_IMPL(__imp__sub_823B99D8) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// std ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// std ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// std ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r6,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bcf98
	sub_823BCF98(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// ld ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21664
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21664;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b9a90
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B9A90;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-21668
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -21668;
loc_823B9A54:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// lbz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823b9a78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B9A78;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ed380
	sub_823ED380(ctx, base);
loc_823B9A78:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,24
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 24;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9a54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9A54;
loc_823B9A90:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9ac8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9AC8;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// stw ctx_arrow(ctx)->r26,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// beq ctx_arrow(ctx)->r6,0x823b9ad8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9AD8;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r28
	ctr.u64 = ctx_arrow(ctx)->r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
loc_823B9AC8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r28,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 64);
	// stw ctx_arrow(ctx)->r25,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
loc_823B9AD8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_823B9AE0) PPC_WEAK_FUNC(sub_823B9AE0);
PPC_FUNC_IMPL(__imp__sub_823B9AE0) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9c1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9C1C;
	// lwz ctx_arrow(ctx)->r8,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
loc_823B9B0C:
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9b3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9B3C;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9ba4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9BA4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9b0c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9B0C;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B9B3C:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r29.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823B9BA4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9c1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9C1C;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B9C1C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B9C28) PPC_WEAK_FUNC(sub_823B9C28);
PPC_FUNC_IMPL(__imp__sub_823B9C28) {
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
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9cc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9CC0;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r29.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b9ca8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B9CA8;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r29.u64;
loc_823B9C5C:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9c94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9C94;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823B9C94:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9C5C;
loc_823B9CA8:
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r29,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// stw ctx_arrow(ctx)->r29,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823B9CC0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823B9CC8) PPC_WEAK_FUNC(sub_823B9CC8);
PPC_FUNC_IMPL(__imp__sub_823B9CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lwz ctx_arrow(ctx)->r30,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9d44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9D44;
	// lwz ctx_arrow(ctx)->r31,40(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9d44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9D44;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
loc_823B9CF0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823b9d34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B9D34;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9d34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9D34;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823B9D10:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9d54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9D54;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r5.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9d9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9D9C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 24;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9d10
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9D10;
loc_823B9D34:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,12
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r31.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b9cf0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B9CF0;
loc_823B9D44:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823B9D54:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823B9D9C:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B9DD0) PPC_WEAK_FUNC(sub_823B9DD0);
PPC_FUNC_IMPL(__imp__sub_823B9DD0) {
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
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21704
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21704;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823b8ec8
	sub_823B8EC8(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b8f70
	sub_823B8F70(ctx, base);
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

alias(__imp__sub_823B9E10) PPC_WEAK_FUNC(sub_823B9E10);
PPC_FUNC_IMPL(__imp__sub_823B9E10) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b91a0
	sub_823B91A0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9e68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9E68;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9e68
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9E68;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// b 0x823b9e6c
	goto loc_823B9E6C;
loc_823B9E68:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B9E6C:
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

alias(__imp__sub_823B9E88) PPC_WEAK_FUNC(sub_823B9E88);
PPC_FUNC_IMPL(__imp__sub_823B9E88) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b91a0
	sub_823B91A0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9ee0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9EE0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9ee0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9EE0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// b 0x823b9ee4
	goto loc_823B9EE4;
loc_823B9EE0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B9EE4:
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

alias(__imp__sub_823B9F00) PPC_WEAK_FUNC(sub_823B9F00);
PPC_FUNC_IMPL(__imp__sub_823B9F00) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b91a0
	sub_823B91A0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9f70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9F70;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9f70
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9F70;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 24;
loc_823B9F50:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// bne ctx_arrow(ctx)->r6,0x823b9f50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823B9F50;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823b9f74
	goto loc_823B9F74;
loc_823B9F70:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B9F74:
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

alias(__imp__sub_823B9F90) PPC_WEAK_FUNC(sub_823B9F90);
PPC_FUNC_IMPL(__imp__sub_823B9F90) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b91a0
	sub_823B91A0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b9fe4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B9FE4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823b9fe4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823B9FE4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// b 0x823b9fe8
	goto loc_823B9FE8;
loc_823B9FE4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823B9FE8:
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

alias(__imp__sub_823BA000) PPC_WEAK_FUNC(sub_823BA000);
PPC_FUNC_IMPL(__imp__sub_823BA000) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b91a0
	sub_823B91A0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba07c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA07C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823ba07c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BA07C;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba07c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA07C;
	// lwz ctx_arrow(ctx)->r8,44(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
loc_823BA060:
	// lhz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba098
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA098;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 24;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823ba060
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BA060;
loc_823BA07C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823BA080:
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
loc_823BA098:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// b 0x823ba080
	goto loc_823BA080;
}

alias(__imp__sub_823BA0B0) PPC_WEAK_FUNC(sub_823BA0B0);
PPC_FUNC_IMPL(__imp__sub_823BA0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz ctx_arrow(ctx)->r17,13192(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r16,-21616(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r16.u64 = PPC_Read_U32(ctx,  ctx);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823b8c78
	sub_823B8C78(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21656
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21656;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// bl 0x823b9260
	sub_823B9260(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
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

alias(__imp__sub_823BA0B8) PPC_WEAK_FUNC(sub_823BA0B8);
PPC_FUNC_IMPL(__imp__sub_823BA0B8) {
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
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823b8c78
	sub_823B8C78(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21656
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21656;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// bl 0x823b9260
	sub_823B9260(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
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

alias(__imp__sub_823BA108) PPC_WEAK_FUNC(sub_823BA108);
PPC_FUNC_IMPL(__imp__sub_823BA108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -112;
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r3,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823b9dd0
	sub_823B9DD0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BA130) PPC_WEAK_FUNC(sub_823BA130);
PPC_FUNC_IMPL(__imp__sub_823BA130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21656
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21656;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x823b9dd0
	sub_823B9DD0(&ctx);
	return;
}

alias(__imp__sub_823BA140) PPC_WEAK_FUNC(sub_823BA140);
PPC_FUNC_IMPL(__imp__sub_823BA140) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x823b8c78
	sub_823B8C78(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21568
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21568;
	// stw ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 92);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BA178) PPC_WEAK_FUNC(sub_823BA178);
PPC_FUNC_IMPL(__imp__sub_823BA178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21568
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21568;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x823b9dd0
	sub_823B9DD0(&ctx);
	return;
}

alias(__imp__sub_823BA188) PPC_WEAK_FUNC(sub_823BA188);
PPC_FUNC_IMPL(__imp__sub_823BA188) {
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
	// bl 0x823b8fb8
	sub_823B8FB8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823b9578
	sub_823B9578(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
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

alias(__imp__sub_823BA1C8) PPC_WEAK_FUNC(sub_823BA1C8);
PPC_FUNC_IMPL(__imp__sub_823BA1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21536
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21536;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x823ba178
	sub_823BA178(&ctx);
	return;
}

alias(__imp__sub_823BA1D8) PPC_WEAK_FUNC(sub_823BA1D8);
PPC_FUNC_IMPL(__imp__sub_823BA1D8) {
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
	// bl 0x823ba188
	sub_823BA188(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// std ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 96);
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

alias(__imp__sub_823BA210) PPC_WEAK_FUNC(sub_823BA210);
PPC_FUNC_IMPL(__imp__sub_823BA210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21504
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21504;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x823ba178
	sub_823BA178(&ctx);
	return;
}

alias(__imp__sub_823BA220) PPC_WEAK_FUNC(sub_823BA220);
PPC_FUNC_IMPL(__imp__sub_823BA220) {
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
	// bl 0x823ba188
	sub_823BA188(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 96);
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

