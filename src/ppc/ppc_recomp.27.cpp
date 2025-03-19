#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82317DC0) PPC_WEAK_FUNC(sub_82317DC0);
PPC_FUNC_IMPL(__imp__sub_82317DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x823f0a88
	sub_823F0A88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble 0x82317e08
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_82317E08;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x82317df8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82317DF8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x82317df8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317DF8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,512
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x82317e08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82317E08;
loc_82317DF8:
	// lis ctx_arrow(ctx)->r11,-64
	ctx_arrow(ctx)->r11.s64 = -4194304;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f1,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82317e10
	goto loc_82317E10;
loc_82317E08:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
loc_82317E10:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82317E28) PPC_WEAK_FUNC(sub_82317E28);
PPC_FUNC_IMPL(__imp__sub_82317E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x823f0a88
	sub_823F0A88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble 0x82317e70
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_82317E70;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x82317e60
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82317E60;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x82317e60
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317E60;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,512
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x82317e70
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82317E70;
loc_82317E60:
	// lis ctx_arrow(ctx)->r11,-64
	ctx_arrow(ctx)->r11.s64 = -4194304;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f1,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82317e78
	goto loc_82317E78;
loc_82317E70:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823edcb0
	sub_823EDCB0(ctx, base);
loc_82317E78:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82317E90) PPC_WEAK_FUNC(sub_82317E90);
PPC_FUNC_IMPL(__imp__sub_82317E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f1,2728(ctx_arrow(ctx)->r11)
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f31,f1
	ctx_arrow(ctx)->r6.compare(f31.f64, ctx.f1.f64);
	// beq ctx_arrow(ctx)->r6,0x82317f0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317F0C;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x82317ed4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82317ED4;
loc_82317EC4:
	// lis ctx_arrow(ctx)->r11,-64
	ctx_arrow(ctx)->r11.s64 = -4194304;
loc_82317EC8:
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f1,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82317f0c
	goto loc_82317F0C;
loc_82317ED4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823f0a88
	sub_823F0A88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble 0x82317f04
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_82317F04;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x82317ec4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82317EC4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x82317ec4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317EC4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,512
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x82317f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82317F04;
	// lis ctx_arrow(ctx)->r11,32640
	ctx_arrow(ctx)->r11.s64 = 2139095040;
	// b 0x82317ec8
	goto loc_82317EC8;
loc_82317F04:
	// fsqrt f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = sqrt(f31.f64);
	// bl 0x822bd9d8
	sub_822BD9D8(ctx, base);
loc_82317F0C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82317F20) PPC_WEAK_FUNC(sub_82317F20);
PPC_FUNC_IMPL(__imp__sub_82317F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stfd f29,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stfd f30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f29,2728(ctx_arrow(ctx)->r11)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f31,f29
	ctx_arrow(ctx)->r6.compare(f31.f64, f29.f64);
	// bne ctx_arrow(ctx)->r6,0x82317f54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82317F54;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// b 0x82317fd0
	goto loc_82317FD0;
loc_82317F54:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f30,2752(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f31,f30
	ctx_arrow(ctx)->r6.compare(f31.f64, f30.f64);
	// bge ctx_arrow(ctx)->r6,0x82317f74
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82317F74;
loc_82317F64:
	// lis ctx_arrow(ctx)->r11,-64
	ctx_arrow(ctx)->r11.s64 = -4194304;
loc_82317F68:
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f1,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82317fd0
	goto loc_82317FD0;
loc_82317F74:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823f0a88
	sub_823F0A88(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble 0x82317fc4
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_82317FC4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x82317f64
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82317F64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x82317f64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317F64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x82317fbc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317FBC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 64, xer);
	// beq ctx_arrow(ctx)->r6,0x82317fb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82317FB4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,512
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x82317fc4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82317FC4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x82317fd0
	goto loc_82317FD0;
loc_82317FB4:
	// lis ctx_arrow(ctx)->r11,32640
	ctx_arrow(ctx)->r11.s64 = 2139095040;
	// b 0x82317f68
	goto loc_82317F68;
loc_82317FBC:
	// lis ctx_arrow(ctx)->r11,-128
	ctx_arrow(ctx)->r11.s64 = -8388608;
	// b 0x82317f68
	goto loc_82317F68;
loc_82317FC4:
	// fsqrt f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = sqrt(f31.f64);
	// fdiv f1,f29,f0
	ctx.f1.f64 = f29.f64 / f0.f64;
	// bl 0x822bd9d8
	sub_822BD9D8(ctx, base);
loc_82317FD0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f29,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-24(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82317FF0) PPC_WEAK_FUNC(sub_82317FF0);
PPC_FUNC_IMPL(__imp__sub_82317FF0) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// b 0x82318040
	goto loc_82318040;
loc_82318010:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82318034
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82318034;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8231804c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8231804C;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// b 0x82318040
	goto loc_82318040;
loc_82318034:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822ef5e0
	sub_822EF5E0(ctx, base);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + -1;
loc_82318040:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82318010
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82318010;
	// b 0x82318058
	goto loc_82318058;
loc_8231804C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r31.s64;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_82318058:
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

alias(__imp__sub_82318070) PPC_WEAK_FUNC(sub_82318070);
PPC_FUNC_IMPL(__imp__sub_82318070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x822e4d38
	sub_822E4D38(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823f0600
	sub_823F0600(ctx, base);
	// add ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// li ctx_arrow(ctx)->r4,95
	ctx_arrow(ctx)->r4.s64 = 95;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r26,-1(ctx_arrow(ctx)->r27)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r27.u32 + -1, ctx_arrow(ctx.u8)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
}

