#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82113188) PPC_WEAK_FUNC(sub_82113188);
PPC_FUNC_IMPL(__imp__sub_82113188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8211319c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8211319C;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_8211319C:
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// lwz ctx_arrow(ctx)->r3,-9864(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821131A8) PPC_WEAK_FUNC(sub_821131A8);
PPC_FUNC_IMPL(__imp__sub_821131A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// beq ctx_arrow(ctx)->r6,0x821131c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821131C4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-9860
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -9860;
	// lwz ctx_arrow(ctx)->r3,-12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
loc_821131C4:
	// lwz ctx_arrow(ctx)->r3,-9860(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821131D0) PPC_WEAK_FUNC(sub_821131D0);
PPC_FUNC_IMPL(__imp__sub_821131D0) {
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
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x820ae360
	sub_820AE360(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32123
	ctx_arrow(ctx)->r11.s64 = -2105212928;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,32656
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 32656;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
loc_821131F4:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r3.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x82113218
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113218;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,56
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 56;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2128
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 2128;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x821131f4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821131F4;
	// li ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r31.s64 = -1;
loc_82113218:
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r29.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x8211322c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8211322C;
	// li ctx_arrow(ctx)->r31,37
	ctx_arrow(ctx)->r31.s64 = 37;
	// b 0x82113238
	goto loc_82113238;
loc_8211322C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,38
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 38, xer);
	// blt ctx_arrow(ctx)->r6,0x82113238
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82113238;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_82113238:
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,56
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 * 56;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 24;
	// beq ctx_arrow(ctx)->r6,0x82113250
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113250;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,28
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 28;
loc_82113250:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82113218
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113218;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,56
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 * 56;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ae350
	sub_820AE350(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82113270) PPC_WEAK_FUNC(sub_82113270);
PPC_FUNC_IMPL(__imp__sub_82113270) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x8210d820
	sub_8210D820(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32123
	ctx_arrow(ctx)->r11.s64 = -2105212928;
	// lfs f13,0(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lfs f0,32580(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32580(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f13,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32580(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210b6e0
	sub_8210B6E0(&ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8210d6c0
	sub_8210D6C0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,8(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bgt ctx_arrow(ctx)->r6,0x821132f4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821132F4;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_821132F4:
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

alias(__imp__sub_82113310) PPC_WEAK_FUNC(sub_82113310);
PPC_FUNC_IMPL(__imp__sub_82113310) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113328
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113328;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// b 0x8211332c
	goto loc_8211332C;
loc_82113328:
	// fmr f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64;
loc_8211332C:
	// stfs f10,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113348
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113348;
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// b 0x8211334c
	goto loc_8211334C;
loc_82113348:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_8211334C:
	// stfs f11,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113368
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113368;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// b 0x8211336c
	goto loc_8211336C;
loc_82113368:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8211336C:
	// stfs f12,8(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,12(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x82113384
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82113384;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82113384:
	// stfs f0,12(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f10,f12
	ctx_arrow(ctx)->r6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt ctx_arrow(ctx)->r6,0x8211339c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8211339C;
	// stfs f12,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_8211339C:
	// fcmpu ctx_arrow(ctx)->r6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x821133b0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821133B0;
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_821133B0:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_821133B8) PPC_WEAK_FUNC(sub_821133B8);
PPC_FUNC_IMPL(__imp__sub_821133B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x821133cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821133CC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_821133CC:
	// stfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x821133e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821133E4;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_821133E4:
	// stfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bgt ctx_arrow(ctx)->r6,0x821133fc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821133FC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_821133FC:
	// stfs f0,8(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,12(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113418
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113418;
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
loc_82113418:
	// stfs f13,12(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82113420) PPC_WEAK_FUNC(sub_82113420);
PPC_FUNC_IMPL(__imp__sub_82113420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis ctx_arrow(ctx)->r9,-32009
	ctx_arrow(ctx)->r9.s64 = -2097741824;
	// lis ctx_arrow(ctx)->r10,26214
	ctx_arrow(ctx)->r10.s64 = 1717960704;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,26215
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64 | 26215;
	// lis ctx_arrow(ctx)->r10,-32009
	ctx_arrow(ctx)->r10.s64 = -2097741824;
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.s64 = 9;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12352
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 12352;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,26796
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 26796;
	// mulhw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r7.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,1,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 12444, ctx_arrow(ctx)->r4.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823eea88
	sub_823EEA88(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
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

alias(__imp__sub_821134B0) PPC_WEAK_FUNC(sub_821134B0);
PPC_FUNC_IMPL(__imp__sub_821134B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis ctx_arrow(ctx)->r9,-32009
	ctx_arrow(ctx)->r9.s64 = -2097741824;
	// lis ctx_arrow(ctx)->r10,26214
	ctx_arrow(ctx)->r10.s64 = 1717960704;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,26215
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64 | 26215;
	// lis ctx_arrow(ctx)->r10,-32009
	ctx_arrow(ctx)->r10.s64 = -2097741824;
	// lwz ctx_arrow(ctx)->r11,12540(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.s64 = 9;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12448
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 12448;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,26804
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 26804;
	// mulhw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r7.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,1,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw ctx_arrow(ctx)->r11,12540(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 12540, ctx_arrow(ctx)->r4.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823eea88
	sub_823EEA88(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
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

alias(__imp__sub_82113540) PPC_WEAK_FUNC(sub_82113540);
PPC_FUNC_IMPL(__imp__sub_82113540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32123
	ctx_arrow(ctx)->r11.s64 = -2105212928;
	// lwz ctx_arrow(ctx)->r3,32608(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82113550) PPC_WEAK_FUNC(sub_82113550);
PPC_FUNC_IMPL(__imp__sub_82113550) {
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
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,21420(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82113598
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113598;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
loc_8211357C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821135b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821135B8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8211357c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8211357C;
loc_82113598:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,26812
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 26812;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_821135B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821135D0) PPC_WEAK_FUNC(sub_821135D0);
PPC_FUNC_IMPL(__imp__sub_821135D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32123
	ctx_arrow(ctx)->r11.s64 = -2105212928;
	// lwz ctx_arrow(ctx)->r10,32608(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-9856
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -9856;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,158
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 158;
loc_821135F0:
	// lbz ctx_arrow(ctx)->r10,43(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8211361c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8211361C;
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r10, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x8211361c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8211361C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8211361c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8211361C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
loc_8211361C:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,156
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 156;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821135f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821135F0;
	// blr 
	return;
}

alias(__imp__sub_82113630) PPC_WEAK_FUNC(sub_82113630);
PPC_FUNC_IMPL(__imp__sub_82113630) {
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
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 1, xer);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,12252
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 12252;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,23824
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 23824;
	// lwz ctx_arrow(ctx)->r7,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// ble ctx_arrow(ctx)->r6,0x821136c4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821136C4;
	// lis ctx_arrow(ctx)->r10,-32009
	ctx_arrow(ctx)->r10.s64 = -2097741824;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-9856
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -9856;
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// lwz ctx_arrow(ctx)->r10,21420(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r10.u64;
	// lbz ctx_arrow(ctx)->r8,5(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 ^ ctx_arrow(ctx)->r10.u64;
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r3.u64;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,156
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 156;
	// lbzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 255, xer);
	// bge ctx_arrow(ctx)->r6,0x821136b4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821136B4;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx->r9.u32, ctx_arrow(ctx)->r4.u8));
loc_821136B4:
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r10, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 8, xer);
	// bgt ctx_arrow(ctx)->r6,0x8211372c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8211372C;
loc_821136C4:
	// stb ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// stb ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 1, ctx_arrow(ctx)->r4.u8);
	// sth ctx_arrow(ctx)->r5,2(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + 2, ctx_arrow(ctx)->r5.u16);
	// lfs f0,0(ctx_arrow(ctx)->r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,250
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 250, xer);
	// lfs f0,4(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x82113708
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82113708;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + -4, ctx_arrow(ctx)->r4.u32);
loc_82113708:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x8211372c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8211372C;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,26868
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 26868;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + -4, ctx_arrow(ctx)->r4.u32);
loc_8211372C:
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

alias(__imp__sub_82113740) PPC_WEAK_FUNC(sub_82113740);
PPC_FUNC_IMPL(__imp__sub_82113740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r9,-32009
	ctx_arrow(ctx)->r9.s64 = -2097741824;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,-16548(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lis ctx_arrow(ctx)->r10,-32009
	ctx_arrow(ctx)->r10.s64 = -2097741824;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,-10016
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + -10016;
loc_82113760:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r4.s32, xer);
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r10,-16548(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82113760
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82113760;
	// blr 
	return;
}

alias(__imp__sub_82113788) PPC_WEAK_FUNC(sub_82113788);
PPC_FUNC_IMPL(__imp__sub_82113788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,21420(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821137e4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821137E4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64;
loc_821137A4:
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821137bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821137BC;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r4.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x821137ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821137EC;
loc_821137BC:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821137cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821137CC;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r4.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x821137ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821137EC;
loc_821137CC:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821137a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821137A4;
loc_821137E4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_821137EC:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_821137F8) PPC_WEAK_FUNC(sub_821137F8);
PPC_FUNC_IMPL(__imp__sub_821137F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-24
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -24;
	// bl 0x823ed548
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32123
	ctx_arrow(ctx)->r11.s64 = -2105212928;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,32592
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 32592;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 + f0.f64));
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 + f0.f64));
	// bl 0x8210e280
	sub_8210E280(ctx, base);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,4556(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4556, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// bge ctx_arrow(ctx)->r6,0x821138e4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821138E4;
	// stfs f31,4556(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4556, ctx_arrow(ctx)->r4.u32);
loc_821138E4:
	// lfs f0,4556(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f29
	ctx_arrow(ctx)->r6.compare(f0.f64, f29.f64);
	// ble ctx_arrow(ctx)->r6,0x821138f4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821138F4;
	// stfs f29,4556(ctx_arrow(ctx)->r11)
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4556, ctx_arrow(ctx)->r4.u32);
loc_821138F4:
	// bl 0x8210e2f0
	sub_8210E2F0(&ctx);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,4560(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4560, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f30
	ctx_arrow(ctx)->r6.compare(f0.f64, f30.f64);
	// bge ctx_arrow(ctx)->r6,0x82113920
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113920;
	// stfs f30,4560(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4560, ctx_arrow(ctx)->r4.u32);
loc_82113920:
	// lfs f0,4560(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f28
	ctx_arrow(ctx)->r6.compare(f0.f64, f28.f64);
	// ble ctx_arrow(ctx)->r6,0x82113930
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113930;
	// stfs f28,4560(ctx_arrow(ctx)->r11)
	temp.f32 = float(f28.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4560, ctx_arrow(ctx)->r4.u32);
loc_82113930:
	// bl 0x8210e280
	sub_8210E280(&ctx);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e208
	sub_8210E208(ctx, base);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,4564(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4564, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// bge ctx_arrow(ctx)->r6,0x8211396c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8211396C;
	// stfs f31,4564(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4564, ctx_arrow(ctx)->r4.u32);
loc_8211396C:
	// lfs f0,4564(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f29
	ctx_arrow(ctx)->r6.compare(f0.f64, f29.f64);
	// ble ctx_arrow(ctx)->r6,0x8211397c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8211397C;
	// stfs f29,4564(ctx_arrow(ctx)->r11)
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4564, ctx_arrow(ctx)->r4.u32);
loc_8211397C:
	// bl 0x8210e2f0
	sub_8210E2F0(&ctx);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,4568(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4568, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f30
	ctx_arrow(ctx)->r6.compare(f0.f64, f30.f64);
	// bge ctx_arrow(ctx)->r6,0x821139b8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821139B8;
	// stfs f30,4568(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4568, ctx_arrow(ctx)->r4.u32);
loc_821139B8:
	// lfs f0,4568(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f28
	ctx_arrow(ctx)->r6.compare(f0.f64, f28.f64);
	// ble ctx_arrow(ctx)->r6,0x821139c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821139C8;
	// stfs f28,4568(ctx_arrow(ctx)->r11)
	temp.f32 = float(f28.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4568, ctx_arrow(ctx)->r4.u32);
loc_821139C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-24
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -24;
	// bl 0x823ed594
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

alias(__imp__sub_821139E8) PPC_WEAK_FUNC(sub_821139E8);
PPC_FUNC_IMPL(__imp__sub_821139E8) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed128
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis ctx_arrow(ctx)->r4,-32010
	ctx_arrow(ctx)->r4.s64 = -2097807360;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r31,21404(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82113bf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82113BF8;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r11,17608(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82113be4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113BE4;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,17616
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 17616;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82113be4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113BE4;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r8.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,19600
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 19600;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,1,0,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 6;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r7.s64 + 3;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,156
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 156;
	// lhzx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r24.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r6.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r11.u32);
	// lis ctx_arrow(ctx)->r9,-32009
	ctx_arrow(ctx)->r9.s64 = -2097741824;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// extsh ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r5, 0);
	// extsh ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.s64 = PPCRegister_s16(ctx_arrow(ctx)->r24);
	// extsw ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r6.s32;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r6.u64;
	// extsw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s32;
	// srawi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	xer.ca = (ctx_arrow(ctx)->r6.s32 < 0) & ((ctx_arrow(ctx)->r6.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32 >> 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-9856
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -9856;
	// addze ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	temp.s64 = ctx_arrow(ctx)->r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r6.u32;
	ctx_arrow(ctx)->r6.s64 = temp.s64;
	// std ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9,48
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r9.s64 + 48;
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r5,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,60
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r9.s64 + 60;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r9,52
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r9.s64 + 52;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9,64
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r9.s64 + 64;
	// std ctx_arrow(ctx)->r6,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfsx f0,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lhzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r28.u32);
	// lhzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r27.u32);
	// extsh ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r6, 0);
	// extsh ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r5, 0);
	// extsw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r6.s32;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r6.u64;
	// extsw ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r5.s32;
	// srawi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	xer.ca = (ctx_arrow(ctx)->r6.s32 < 0) & ((ctx_arrow(ctx)->r6.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32 >> 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addze ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	temp.s64 = ctx_arrow(ctx)->r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r6.u32;
	ctx_arrow(ctx)->r6.s64 = temp.s64;
	// std ctx_arrow(ctx)->r3,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 10;
	// lwz ctx_arrow(ctx)->r11,21404(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r31,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r7.s64 + 4;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,5
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 5;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,96(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfsx f0,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r5.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,56
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 56;
	// lhzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r3.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,68
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 68;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// extsh ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r8, 0);
	// extsw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s32;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r11.u64;
	// extsw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// addze ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = temp.s64;
	// std ctx_arrow(ctx)->r5,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r8,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,21404(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfd f0,96(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfsx f0,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed178
	return;
loc_82113BE4:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,26896
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 26896;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed178
	return;
loc_82113BF8:
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,156
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 * 156;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-9856
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -9856;
	// li ctx_arrow(ctx)->r11,32767
	ctx_arrow(ctx)->r11.s64 = 32767;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,20
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r8.s64 + 20;
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,-32767
	ctx_arrow(ctx)->r11.s64 = -32767;
	// stw ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82113d60
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113D60;
loc_82113C40:
	// lwz ctx_arrow(ctx)->r6,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r6,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lfd f13,96(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113c70
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113C70;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32);
loc_82113C70:
	// lwz ctx_arrow(ctx)->r6,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r6,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113c9c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113C9C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32);
loc_82113C9C:
	// lwz ctx_arrow(ctx)->r6,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,4(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113ccc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113CCC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32);
loc_82113CCC:
	// lwz ctx_arrow(ctx)->r6,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r6,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lfd f13,104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113cf8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113CF8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32);
loc_82113CF8:
	// lwz ctx_arrow(ctx)->r6,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,8(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r6,112(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// lfd f13,112(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113d28
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113D28;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32);
loc_82113D28:
	// lwz ctx_arrow(ctx)->r6,148(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// std ctx_arrow(ctx)->r6,120(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// lfd f13,120(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113d54
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113D54;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32);
loc_82113D54:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 28;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82113c40
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82113C40;
loc_82113D60:
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,12(ctx_arrow(ctx)->r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r10,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// lwz ctx_arrow(ctx)->r6,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// lwz ctx_arrow(ctx)->r5,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s32;
	// lwz ctx_arrow(ctx)->r4,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s32;
	// extsw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s32;
	// std ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// std ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,52
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 52;
	// std ctx_arrow(ctx)->r6,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,56
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r8.s64 + 56;
	// lwz ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r5,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,60
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r8.s64 + 60;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,64
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r8.s64 + 64;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 + 48;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,68
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 68;
	// lfd f13,120(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,112(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,104(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,96(ctx_arrow(ctx)->r1)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,88(ctx_arrow(ctx)->r1)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,80(ctx_arrow(ctx)->r1)
	ctx.f8.u64 = PPC_Read_U64(ctx,  ctx);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lfs f0,16(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// lfs f0,20(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
	// lfs f0,12(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r5.u32);
	// lfs f0,16(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
	// lfs f0,20(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed178
	return;
}

alias(__imp__sub_82113E58) PPC_WEAK_FUNC(sub_82113E58);
PPC_FUNC_IMPL(__imp__sub_82113E58) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lwz ctx_arrow(ctx)->r26,21420(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82113f84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113F84;
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,-9856
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + -9856;
loc_82113E84:
	// lbz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x82113e9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82113E9C;
	// lbz ctx_arrow(ctx)->r11,5(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x82113f6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82113F6C;
loc_82113E9C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82113f6c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113F6C;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,156
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 156;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7,48
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r7.s64 + 48;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7,60
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r7.s64 + 60;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,52
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r7.s64 + 52;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7,64
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r7.s64 + 64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r7,56
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r7.s64 + 56;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7,68
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r7.s64 + 68;
	// li ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r9.s64 = 12;
loc_82113ED4:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113eec
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113EEC;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
loc_82113EEC:
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113efc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113EFC;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
loc_82113EFC:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// lfs f0,-4(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113f18
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113F18;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
loc_82113F18:
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113f28
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113F28;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
loc_82113F28:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x82113f40
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82113F40;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r5.u32);
loc_82113F40:
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x82113f50
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82113F50;
	// stfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
loc_82113F50:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 12;
	// lbz ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r25.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82113ed4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82113ED4;
loc_82113F6C:
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82113e84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82113E84;
loc_82113F84:
	// b 0x823ed17c
	return;
}

alias(__imp__sub_82113F88) PPC_WEAK_FUNC(sub_82113F88);
PPC_FUNC_IMPL(__imp__sub_82113F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r9,21420(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// lfs f13,16(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,12(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,24(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f10,16(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,28(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,32(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,36(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,24(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmsubs f11,f9,f11,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f11,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmsubs f13,f12,f13,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,4(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// fmsubs f12,f0,f10,f7
	ctx.f12.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// lfs f10,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,8(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f0,f11,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu ctx_arrow(ctx)->r6,f0,f10
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f10.f64);
	// beq ctx_arrow(ctx)->r6,0x82114034
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82114034;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f10,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 / f0.f64));
loc_82114034:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmuls f11,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f11,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f10,4(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f12,8(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lfs f0,25732(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f9,26484(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x8211415c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8211415C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,-4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + -4;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30,2,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8211408C:
	// lfs f13,-4(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,4(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f7,f10,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x821140b0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821140B0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_821140B0:
	// fcmpu ctx_arrow(ctx)->r6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble ctx_arrow(ctx)->r6,0x821140bc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821140BC;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_821140BC:
	// lfs f13,12(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,16(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x821140e0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821140E0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_821140E0:
	// fcmpu ctx_arrow(ctx)->r6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble ctx_arrow(ctx)->r6,0x821140ec
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821140EC;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_821140EC:
	// lfs f13,24(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,28(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x82114110
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82114110;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82114110:
	// fcmpu ctx_arrow(ctx)->r6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble ctx_arrow(ctx)->r6,0x8211411c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8211411C;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_8211411C:
	// lfs f13,36(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,40(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x82114140
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82114140;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82114140:
	// fcmpu ctx_arrow(ctx)->r6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble ctx_arrow(ctx)->r6,0x8211414c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8211414C;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_8211414C:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 48;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8211408c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8211408C;
loc_8211415C:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r7.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x821141cc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821141CC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,8(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r7.s64 - ctx_arrow(ctx)->r10.s64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lfs f11,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_8211418C:
	// lfs f13,4(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,-4(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x821141b0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821141B0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_821141B0:
	// fcmpu ctx_arrow(ctx)->r6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble ctx_arrow(ctx)->r6,0x821141bc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821141BC;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_821141BC:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8211418c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8211418C;
loc_821141CC:
	// stfs f0,12(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f9,16(ctx_arrow(ctx)->r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821141D8) PPC_WEAK_FUNC(sub_821141D8);
PPC_FUNC_IMPL(__imp__sub_821141D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r11,7(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 4;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// std ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,12900(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f0,3060(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
loc_82114224:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82114224
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82114224;
	// blr 
	return;
}

alias(__imp__sub_82114238) PPC_WEAK_FUNC(sub_82114238);
PPC_FUNC_IMPL(__imp__sub_82114238) {
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
	// bl 0x823ed534
	// stwu ctx_arrow(ctx)->r1,-272(ctx_arrow(ctx)->r1)
	ea = -272 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r31,-32010
	ctx_arrow(ctx)->r31.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r11,-32009
	ctx_arrow(ctx)->r11.s64 = -2097741824;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,3,0,28
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-9856
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -9856;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r5,21420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,60
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 60;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 48;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,52
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 52;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,56
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 56;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,60
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 60;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + 48;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,52
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + 52;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 64;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,56
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 56;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11,68
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r11.s64 + 68;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r5.u64;
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r9,5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,156
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 156;
	// lfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,156
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 * 156;
	// lfsx f12,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// lfsx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfsx f11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfsx f10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(f0.f64 + ctx.f10.f64));
	// lfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfsx f9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + f0.f64));
	// lfsx f8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r21
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fadds f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fmuls f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f27,f11,f0
	f27.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f25,f10,f0
	f25.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f24,f9,f0
	f24.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82113f88
	sub_82113F88(ctx, base);
	// lfs f30,96(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f26,92(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f26.f64 = double(temp.f32);
	// fsubs f31,f30,f26
	f31.f64 = double(float(f30.f64 - f26.f64));
	// lfs f0,13964(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x82114358
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82114358;
	// bl 0x82113420
	sub_82113420(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,26976
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 26976;
	// stfd f1,32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 32);
	// ld ctx_arrow(ctx)->r5,32(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// lwz ctx_arrow(ctx)->r5,21420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82114358:
	// lfs f13,84(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// fmuls f11,f28,f13
	ctx.f11.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f12,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmadds f11,f27,f12,f11
	ctx.f11.f64 = double(float(f27.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f29,f0,f11
	ctx.f11.f64 = double(float(f29.f64 * f0.f64 + ctx.f11.f64));
	// fcmpu ctx_arrow(ctx)->r6,f11,f30
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, f30.f64);
	// ble ctx_arrow(ctx)->r6,0x821143b0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821143B0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r5.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f26,f30
	f26.u64 = f30.u64 ^ 0x8000000000000000;
	// lbz ctx_arrow(ctx)->r8,5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u8);
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// stb ctx_arrow(ctx)->r10,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 5, ctx_arrow(ctx)->r4.u8);
	// lwz ctx_arrow(ctx)->r5,21420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821143B0:
	// fmuls f13,f24,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f24.f64 * ctx.f13.f64));
	// fmadds f13,f23,f12,f13
	ctx.f13.f64 = double(float(f23.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f25,f0,f13
	f0.f64 = double(float(f25.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f26
	ctx_arrow(ctx)->r6.compare(f0.f64, f26.f64);
	// bgt ctx_arrow(ctx)->r6,0x821143e8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821143E8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821143e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821143E8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r5.u64;
	// lbz ctx_arrow(ctx)->r9,5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u8);
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// stb ctx_arrow(ctx)->r10,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 5, ctx_arrow(ctx)->r4.u8);
loc_821143E8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-96
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -96;
	// bl 0x823ed580
	// b 0x823ed16c
	return;
}

alias(__imp__sub_821143F8) PPC_WEAK_FUNC(sub_821143F8);
PPC_FUNC_IMPL(__imp__sub_821143F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ 1;
	// lbz ctx_arrow(ctx)->r9,6(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 1;
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 ^ ctx_arrow(ctx)->r10.u64;
	// stb ctx_arrow(ctx)->r10,6(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 6, ctx_arrow(ctx)->r4.u8);
	// blr 
	return;
}

alias(__imp__sub_82114428) PPC_WEAK_FUNC(sub_82114428);
PPC_FUNC_IMPL(__imp__sub_82114428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed104
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-144
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -144;
	// bl 0x823ed540
	// stwu ctx_arrow(ctx)->r1,-592(ctx_arrow(ctx)->r1)
	ea = -592 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x8210b2b0
	sub_8210B2B0(ctx, base);
	// lis ctx_arrow(ctx)->r22,-32014
	ctx_arrow(ctx)->r22.s64 = -2098069504;
	// lis ctx_arrow(ctx)->r21,-32123
	ctx_arrow(ctx)->r21.s64 = -2105212928;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,336
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 336;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,32580(ctx_arrow(ctx)->r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,208(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 208, ctx_arrow(ctx)->r4.u32);
	// stfs f0,228(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 228, ctx_arrow(ctx)->r4.u32);
	// stfs f0,248(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 248, ctx_arrow(ctx)->r4.u32);
	// lfs f0,184(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,256(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lfs f0,188(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,260(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lfs f0,192(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,264(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 264, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210be08
	sub_8210BE08(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x821141d8
	sub_821141D8(ctx, base);
	// lis ctx_arrow(ctx)->r18,-32010
	ctx_arrow(ctx)->r18.s64 = -2097807360;
	// rlwinm ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r17,3,0,28
	ctx_arrow(ctx)->r19.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r17.u32 | (ctx_arrow(ctx)->r17.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// li ctx_arrow(ctx)->r15,2
	ctx_arrow(ctx)->r15.s64 = 2;
	// lis ctx_arrow(ctx)->r28,-32123
	ctx_arrow(ctx)->r28.s64 = -2105212928;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r19.u64 + ctx_arrow(ctx)->r11.u64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f26,2728(ctx_arrow(ctx)->r10)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
loc_821144E0:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x82113f88
	sub_82113F88(ctx, base);
	// lfs f0,176(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f30,f0,f27
	f30.f64 = double(float(f0.f64 * f27.f64));
	// lfs f0,180(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f29,f0,f27
	f29.f64 = double(float(f0.f64 * f27.f64));
	// lfs f0,184(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f28,f0,f27
	f28.f64 = double(float(f0.f64 * f27.f64));
	// stfs f30,176(ctx_arrow(ctx)->r1)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 176, ctx_arrow(ctx)->r4.u32);
	// stfs f29,180(ctx_arrow(ctx)->r1)
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 180, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = 1;
	// stfs f28,184(ctx_arrow(ctx)->r1)
	temp.f32 = float(f28.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 184, ctx_arrow(ctx)->r4.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x821147a0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821147A0;
	// lis ctx_arrow(ctx)->r12,-12544
	ctx_arrow(ctx)->r12.s64 = -822083584;
	// li ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r30.s64 = 12;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,53056
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 53056;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64 & ctx_arrow(ctx)->r12.u64;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16,16,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,24,8,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31,8,24,31
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 8) & 0xFF;
	// clrlwi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
loc_82114548:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,16,16,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,24,8,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 24) & 0xFFFFFF;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,16,16,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 16) & 0xFFFF;
	// lfs f0,32580(ctx_arrow(ctx)->r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,24,8,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 24) & 0xFFFFFF;
	// lfs f13,4(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f13,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f12,8(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + f29.f64));
	// stfs f12,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lfs f11,12(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,8,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 8) & 0xFF;
	// fadds f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 + f28.f64));
	// stfs f11,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// stfs f31,96(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r29,92(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r29, 0);
	// stfs f31,100(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r9,105(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 105, ctx_arrow(ctx)->r4.u8);
	// stb ctx_arrow(ctx)->r8,106(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 106, ctx_arrow(ctx)->r4.u8);
	// stb ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u8);
	// stb ctx_arrow(ctx)->r31,107(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 107, ctx_arrow(ctx.u8)->r1,-88
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -88;
	// bl 0x823ed57c
	// b 0x823ed170
	return;
}

