#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82371CF0) PPC_WEAK_FUNC(sub_82371CF0);
PPC_FUNC_IMPL(__imp__sub_82371CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,2048
	ctx_arrow(ctx)->r10.s64 = 2048;
loc_82371CF8:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371cf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371CF8;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371D58) PPC_WEAK_FUNC(sub_82371D58);
PPC_FUNC_IMPL(__imp__sub_82371D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r10.s64 = 64;
loc_82371D60:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371d60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371D60;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371DC0) PPC_WEAK_FUNC(sub_82371DC0);
PPC_FUNC_IMPL(__imp__sub_82371DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = 16;
loc_82371DC8:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371dc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371DC8;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371E28) PPC_WEAK_FUNC(sub_82371E28);
PPC_FUNC_IMPL(__imp__sub_82371E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r10.s64 = 256;
loc_82371E30:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371e30
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371E30;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371E90) PPC_WEAK_FUNC(sub_82371E90);
PPC_FUNC_IMPL(__imp__sub_82371E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
loc_82371E98:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371e98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371E98;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371EF8) PPC_WEAK_FUNC(sub_82371EF8);
PPC_FUNC_IMPL(__imp__sub_82371EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,128
	ctx_arrow(ctx)->r10.s64 = 128;
loc_82371F00:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371f00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371F00;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371F60) PPC_WEAK_FUNC(sub_82371F60);
PPC_FUNC_IMPL(__imp__sub_82371F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// li ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r10.s64 = 512;
loc_82371F68:
	// lfs f0,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stfs f0,-4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// bne ctx_arrow(ctx)->r6,0x82371f68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82371F68;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371FC8) PPC_WEAK_FUNC(sub_82371FC8);
PPC_FUNC_IMPL(__imp__sub_82371FC8) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,100(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371FD0) PPC_WEAK_FUNC(sub_82371FD0);
PPC_FUNC_IMPL(__imp__sub_82371FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,3904(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,92(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82371FE8) PPC_WEAK_FUNC(sub_82371FE8);
PPC_FUNC_IMPL(__imp__sub_82371FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// bl 0x823ed100
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-152
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -152;
	// bl 0x823ed510
	// stwu ctx_arrow(ctx)->r1,-432(ctx_arrow(ctx)->r1)
	ea = -432 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,84
	ctx_arrow(ctx)->r5.s64 = 84;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lfs f0,14440(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,96(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x82372030
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372030;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x82372060
	goto loc_82372060;
loc_82372030:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// lfs f13,88(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// std ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// lfd f12,120(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82372060:
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4095
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 4095, xer);
	// ble ctx_arrow(ctx)->r6,0x82372070
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82372070;
	// li ctx_arrow(ctx)->r3,4095
	ctx_arrow(ctx)->r3.s64 = 4095;
loc_82372070:
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,40712
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 40712;
	// lis ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 196608;
	// lis ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 262144;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,61380
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 61380;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,41056
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 41056;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,20736
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 20736;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// lfs f10,2960(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
	// lfs f0,80(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1344
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 1344;
	// fcmpu ctx_arrow(ctx)->r6,f0,f10
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f10.f64);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f13,1332(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// blt ctx_arrow(ctx)->r6,0x823720e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823720E0;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,3904(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f12,88(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// b 0x82372104
	goto loc_82372104;
loc_823720E0:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,4(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,88(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,3112(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmadds f12,f0,f12,f11
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,3904(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f12,f0,f9
	ctx.f12.f64 = double(float(f0.f64 * ctx.f9.f64));
loc_82372104:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,4672(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmuls f25,f12,f0
	f25.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f0,14016(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f25,f0
	ctx_arrow(ctx)->r6.compare(f25.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x82372124
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82372124;
	// fmr f25,f0
	f25.f64 = f0.f64;
loc_82372124:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,3060(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f25,f12
	f30.f64 = double(float(f25.f64 * ctx.f12.f64));
	// fcmpu ctx_arrow(ctx)->r6,f30,f0
	ctx_arrow(ctx)->r6.compare(f30.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x82372140
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82372140;
	// fmr f30,f0
	f30.f64 = f0.f64;
	// b 0x8237214c
	goto loc_8237214C;
loc_82372140:
	// fcmpu ctx_arrow(ctx)->r6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f30.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x8237214c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8237214C;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
loc_8237214C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,76(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,25532(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f12
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f12.f64);
	// blt ctx_arrow(ctx)->r6,0x82372180
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82372180;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// lfs f0,4668(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * f0.f64));
	// b 0x823721ec
	goto loc_823721EC;
loc_82372180:
	// fcmpu ctx_arrow(ctx)->r6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f10.f64);
	// blt ctx_arrow(ctx)->r6,0x823721ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823721AC;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// lfs f31,1328(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,4668(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * f0.f64));
	// b 0x823721ec
	goto loc_823721EC;
loc_823721AC:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,14292(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fcmpu ctx_arrow(ctx)->r6,f0,f12
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f12.f64);
	// lfs f31,1328(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// blt ctx_arrow(ctx)->r6,0x823721e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823721E0;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f0,4668(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// fmuls f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 * f0.f64));
	// b 0x823721ec
	goto loc_823721EC;
loc_823721E0:
	// lfs f13,4668(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmuls f27,f0,f13
	f27.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_823721EC:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,4664(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r28,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82378900
	sub_82378900(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,240
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 240;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,252
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 252;
	// lfs f0,4660(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// bl 0x82378900
	sub_82378900(&ctx);
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2868
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2868;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2880
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 2880;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,31,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,21
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC0F;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1020
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1020;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// std ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// lfd f0,120(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r27,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82378900
	sub_82378900(ctx, base);
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,14224
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 14224;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// bl 0x82378900
	sub_82378900(&ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,18360
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 18360;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,18372
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 18372;
	// lfs f0,4656(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// bl 0x82378900
	sub_82378900(&ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,20988
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 20988;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,21000
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 21000;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// bl 0x82378900
	sub_82378900(&ctx);
	// fmuls f26,f31,f30
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f31.f64 * f30.f64));
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32344
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32344;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,4652(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372368
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372368;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_82372368:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r15.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addis ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r14.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r15,-29064
	ctx_arrow(ctx)->r15.s64 = ctx_arrow(ctx)->r15.s64 + -29064;
	// addi ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r14,-26992
	ctx_arrow(ctx)->r14.s64 = ctx_arrow(ctx)->r14.s64 + -26992;
	// lfs f0,4648(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r15)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r15.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r15,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r14,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// fmuls f13,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f25.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r14)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r14.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4644(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823723d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823723D8;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823723D8:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r16.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r16,-24836
	ctx_arrow(ctx)->r16.s64 = ctx_arrow(ctx)->r16.s64 + -24836;
	// lfs f0,4640(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r16)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r16.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372410
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372410;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_82372410:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addis ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r17.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,-8396
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + -8396;
	// addi ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r17,-6324
	ctx_arrow(ctx)->r17.s64 = ctx_arrow(ctx)->r17.s64 + -6324;
	// lfs f0,4636(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r18)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r18.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r18,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r17,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// fmuls f13,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 * f25.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r17)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r17.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4632(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372480
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372480;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_82372480:
	// fmuls f28,f28,f30
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 * f30.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,-4168
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + -4168;
	// lfs f0,4628(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r19)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r19.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f28,f0
	f0.f64 = double(float(f28.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823724bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823724BC;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823724BC:
	// fmuls f31,f29,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f29.f64 * f30.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r20,12272
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r20.s64 + 12272;
	// lfs f0,4624(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r20)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r20.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823724f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823724F8;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823724F8:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r22,20488
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r22.s64 + 20488;
	// addis ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,4620(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,28708
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + 28708;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r22)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r22.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r21)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r21.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4616(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372560
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372560;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_82372560:
	// fmuls f13,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 * f25.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,-28612
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + -28612;
	// lfs f0,4612(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823725a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823725A0;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823725A0:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r24,-24492
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r24.s64 + -24492;
	// lfs f0,4608(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f28,f0
	f0.f64 = double(float(f28.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823725d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823725D8;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823725D8:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,-8048
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + -8048;
	// lfs f0,4604(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372610
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372610;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_82372610:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,168
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 168;
	// lfs f0,4600(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372648
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372648;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_82372648:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addis ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addis ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,8388
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 8388;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,16604
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 16604;
	// lfs f0,4596(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4592(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmuls f0,f25,f0
	f0.f64 = double(float(f25.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82378900
	sub_82378900(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823726b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823726B0;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823726B0:
	// lis ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 262144;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,88(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,20724
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u64 | 20724;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r9,-32254
	ctx_arrow(ctx)->r9.s64 = -2113798144;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r16)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfd f30,28184(ctx_arrow(ctx)->r9)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r15)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
	// lfs f13,72(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r4.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r5.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r6.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f12,88(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fdiv f0,f13,f0
	f0.f64 = ctx.f13.f64 / f0.f64;
	// lfd f13,4584(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fdiv f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 / f0.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30,888
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r30.s64 + 888;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,192
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r30.s64 + 192;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,376
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 376;
	// lfd f13,28168(ctx_arrow(ctx)->r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// fmul f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 * ctx.f13.f64;
	// lfs f0,4576(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,504
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r30.s64 + 504;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,632
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r30.s64 + 632;
	// lfsx f28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f28.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,760
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 760;
	// lfsx f9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// lfsx f25,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f25.f64 = double(temp.f32);
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f13,2692(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f24,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f24.f64 = double(temp.f32);
	// lfsx f23,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f23.f64 = double(temp.f32);
	// lfs f13,9508(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f28,f13
	f22.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r30,632
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r30.s64 + 632;
	// lwz ctx_arrow(ctx)->r26,24(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,14064(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r30,504
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r30.s64 + 504;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r30,760
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r30.s64 + 760;
	// fnmsubs f12,f11,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * f0.f64 - ctx.f12.f64)));
	// addi ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r30,3144
	ctx_arrow(ctx)->r15.s64 = ctx_arrow(ctx)->r30.s64 + 3144;
	// lwz ctx_arrow(ctx)->r25,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,32(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r30,3144
	ctx_arrow(ctx)->r14.s64 = ctx_arrow(ctx)->r30.s64 + 3144;
	// lfsx f19,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f19.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfsx f20,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f20.f64 = double(temp.f32);
	// lfsx f18,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f18.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r25,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r7,40(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,376
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 376;
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r15
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,888
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 888;
	// lwz ctx_arrow(ctx)->r6,44(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r10.u64;
	// lfsx f31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r14
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,4,0,27
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 4) & 0xFFFFFFF0;
	// fmuls f21,f9,f12
	f21.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30,192
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r30.s64 + 192;
	// lfsx f9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f26,f9,f12
	f26.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	// fmuls f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r4.u64;
	// lfsx f27,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f27.f64 = double(temp.f32);
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfsx f9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f16,f9,f12
	f16.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r30,1016
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r30.s64 + 1016;
	// fmuls f15,f27,f13
	f15.f64 = double(float(f27.f64 * ctx.f13.f64));
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r30,316
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r30.s64 + 316;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r30,1536
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r30.s64 + 1536;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r30,2056
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r30.s64 + 2056;
	// fmuls f14,f26,f13
	f14.f64 = double(float(f26.f64 * ctx.f13.f64));
	// addi ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r30,2600
	ctx_arrow(ctx)->r17.s64 = ctx_arrow(ctx)->r30.s64 + 2600;
	// fmuls f17,f29,f13
	f17.f64 = double(float(f29.f64 * ctx.f13.f64));
	// addi ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r30,132
	ctx_arrow(ctx)->r16.s64 = ctx_arrow(ctx)->r30.s64 + 132;
	// lfsx f6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r20
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// lfsx f4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r18
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r17
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bne ctx_arrow(ctx)->r6,0x823728f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823728F0;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// b 0x82372924
	goto loc_82372924;
loc_823728F0:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64 & 0xFFFFFFFF;
	// lfs f13,88(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f12,88(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,96(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82372924:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,104
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 104;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82372948
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372948;
	// lfs f13,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_82372948:
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 65536;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,136
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 136;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82372970
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372970;
	// lfs f13,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_82372970:
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// lfs f12,0(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 131072;
	// lfs f9,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,244
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 244;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,256
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 256;
	// lfs f8,20(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 131072;
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,268
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 268;
	// stfsx f12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// stfsx f9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r5.u32);
	// lis ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 131072;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6,14228
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64 | 14228;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// stfsx f25,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	temp.f32 = float(f25.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
	// lis ctx_arrow(ctx)->r28,2
	ctx_arrow(ctx)->r28.s64 = 131072;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6,14240
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64 | 14240;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// lis ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r27.s64 = 131072;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6,232
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64 | 232;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r6,236
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r6.u64 | 236;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2332
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2332;
	// ori ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r6,18364
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r6.u64 | 18364;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// addis ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6,18376
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r6.u64 | 18376;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,2872
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 2872;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r6,18388
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r6.u64 | 18388;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,2884
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 2884;
	// ori ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r6,20992
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r6.u64 | 20992;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// stfsx f12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,2896
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 2896;
	// ori ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r6,21004
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r6.u64 | 21004;
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// stfsx f8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r28.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,11104
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 11104;
	// addis ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,12152
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 12152;
	// stfsx f22,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	temp.f32 = float(f22.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
	// ori ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r6,21016
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r6.u64 | 21016;
	// addis ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,20452
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 20452;
	// stfs f0,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// stfs f13,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,29224
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 29224;
	// stfs f0,8(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30272
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 30272;
	// stfs f13,4(ctx_arrow(ctx)->r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfsx f12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r24.u32);
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// stfsx f21,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	temp.f32 = float(f21.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// stfsx f29,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r5.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32348
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32348;
	// stfsx f24,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	temp.f32 = float(f24.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32360
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 32360;
	// stfsx f23,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	temp.f32 = float(f23.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
	// stfsx f9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r23.u32);
	// stfsx f20,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	temp.f32 = float(f20.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r22.u32);
	// stfs f0,8(ctx_arrow(ctx)->r8)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfsx f12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r21
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r21.u32);
	// fneg f12,f31
	ctx.f12.u64 = f31.u64 ^ 0x8000000000000000;
	// stfsx f8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r20.u32);
	// stfsx f15,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	temp.f32 = float(f15.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r19.u32);
	// stfs f0,8(ctx_arrow(ctx)->r7)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfsx f16,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	temp.f32 = float(f16.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// stfsx f26,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	temp.f32 = float(f26.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,40648
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 | 40648;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,18352
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 18352;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lis ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r8.s64 = 131072;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,40652
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 40652;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,18356
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 18356;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// stfsx f19,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	temp.f32 = float(f19.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// lis ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 131072;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,40680
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 | 40680;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// stfsx f18,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	temp.f32 = float(f18.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
	// lis ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 131072;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,40684
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 | 40684;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,40620
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 40620;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,57120
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 | 57120;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,40644
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 40644;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,61288
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | 61288;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,61312
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 | 61312;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,61316
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64 | 61316;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,61320
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64 | 61320;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,61348
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64 | 61348;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,61352
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64 | 61352;
	// lis ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 196608;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,12252
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64 | 12252;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f31,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f31,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfsx f2,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	temp.f32 = float(ctx.f2.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// lis ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 196608;
	// stfsx f1,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
	// stfsx f6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	temp.f32 = float(ctx.f6.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r7.u32);
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,57472
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 57472;
	// stfsx f3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	temp.f32 = float(ctx.f3.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// stfsx f5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	temp.f32 = float(ctx.f5.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
	// stfsx f4,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	temp.f32 = float(ctx.f4.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r5.u32);
	// stfsx f11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
	// stfs f31,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f31,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 196608;
	// stfsx f1,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r24.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,57468
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 57468;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfsx f6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	temp.f32 = float(ctx.f6.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// stfsx f5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	temp.f32 = float(ctx.f5.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r28.u32);
	// stfsx f4,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	temp.f32 = float(ctx.f4.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
	// stfsx f3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	temp.f32 = float(ctx.f3.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// stfsx f2,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	temp.f32 = float(ctx.f2.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
	// stfsx f11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r23.u32);
	// stfs f31,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 262144;
	// stfsx f10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,37148
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 | 37148;
	// stfsx f10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// lis ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 262144;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,37152
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 | 37152;
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f31,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfsx f7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	temp.f32 = float(ctx.f7.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
	// stfsx f7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	temp.f32 = float(ctx.f7.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r7.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,68(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfd f29,4568(ctx_arrow(ctx)->r11)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,40716
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 40716;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// stfsx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lfs f0,68(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,61384
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 61384;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// stfsx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lfs f0,68(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 196608;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,41060
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 41060;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f17
	f0.f64 = double(float(f0.f64 * f17.f64));
	// stfsx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lfs f0,68(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 262144;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20740
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 20740;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f14
	f0.f64 = double(float(f0.f64 * f14.f64));
	// stfsx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lfs f0,64(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// lfs f0,20(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-28368
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -28368;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,96(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-26296
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -26296;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-24224
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -24224;
	// addis ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,168
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 168;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// stfs f0,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-22152
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -22152;
	// stfs f0,8(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,52(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f0,56(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f0,60(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// lfs f0,52(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,200
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 200;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stfs f0,4(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f0,56(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f0,60(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82372d84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372D84;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// b 0x82372db8
	goto loc_82372DB8;
loc_82372D84:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// lfs f0,88(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// std ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// lfd f13,120(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,96(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82372DB8:
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20080
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20080;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82372de0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372DE0;
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_82372DE0:
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19024
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19024;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82372e08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82372E08;
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_82372E08:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,432
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 432;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-152
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -152;
	// bl 0x823ed55c
	// b 0x823ed150
	return;
}

alias(__imp__sub_82372E18) PPC_WEAK_FUNC(sub_82372E18);
PPC_FUNC_IMPL(__imp__sub_82372E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// bl 0x823ed118
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-104
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -104;
	// bl 0x823ed51c
	// stwu ctx_arrow(ctx)->r1,-304(ctx_arrow(ctx)->r1)
	ea = -304 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r25,-32250
	ctx_arrow(ctx)->r25.s64 = -2113536000;
	// lis ctx_arrow(ctx)->r30,-32250
	ctx_arrow(ctx)->r30.s64 = -2113536000;
	// li ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 5;
	// lfs f12,1324(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// li ctx_arrow(ctx)->r7,6
	ctx_arrow(ctx)->r7.s64 = 6;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,532
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 532;
	// lfs f9,1332(ctx_arrow(ctx)->r25)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lis ctx_arrow(ctx)->r24,-32250
	ctx_arrow(ctx)->r24.s64 = -2113536000;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lfs f13,1336(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// stfs f12,56(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f11,1340(ctx_arrow(ctx)->r24)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,60(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfd f29,2752(ctx_arrow(ctx)->r9)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r9,-32254
	ctx_arrow(ctx)->r9.s64 = -2113798144;
	// stfs f0,64(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,68(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stfs f0,72(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stfs f9,76(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lfd f28,28184(ctx_arrow(ctx)->r9)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stfs f13,80(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stfs f13,84(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// stfs f11,88(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f10,92(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f0100
	sub_823F0100(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,104
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 104;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// stfs f12,96(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r28,40
	ctx_arrow(ctx)->r28.s64 = 40;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// lfs f13,1340(ctx_arrow(ctx)->r24)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stfs f13,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371cf0
	sub_82371CF0(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 65536;
	// lfs f13,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1340(ctx_arrow(ctx)->r24)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,136
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 136;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371cf0
	sub_82371CF0(&ctx);
	// lfs f13,88(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r26,-32256
	ctx_arrow(ctx)->r26.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,168
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 168;
	// lfs f12,2692(ctx_arrow(ctx)->r26)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// addis ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f13,88(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2692(ctx_arrow(ctx)->r26)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,200
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 200;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371b88
	sub_82371B88(&ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,1344
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 1344;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,236
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 236;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,232
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 232;
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// li ctx_arrow(ctx)->r20,509
	ctx_arrow(ctx)->r20.s64 = 509;
	// lfs f26,44(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f26.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,240
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 240;
	// lfs f25,48(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f25.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r21,508
	ctx_arrow(ctx)->r21.s64 = 508;
	// stfsx f25,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	temp.f32 = float(f25.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// stfsx f26,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	temp.f32 = float(f26.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,36
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 36;
	// lfs f30,0(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// lfs f24,4(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f24.f64 = double(temp.f32);
	// lfs f23,8(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f23.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r20,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r21,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f24,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f24.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f12,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f23,28(ctx_arrow(ctx)->r11)
	temp.f32 = float(f23.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stfs f0,32(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,83
	ctx_arrow(ctx)->r10.s64 = 83;
	// lfs f21,12(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f21.f64 = double(temp.f32);
	// lfs f22,4688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f22.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2332
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2332;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f22,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f22.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f21,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f21.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371dc0
	sub_82371DC0(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f20,20(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f20.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r9,2039
	ctx_arrow(ctx)->r9.s64 = 2039;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2868
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2868;
	// li ctx_arrow(ctx)->r8,2038
	ctx_arrow(ctx)->r8.s64 = 2038;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r22,600
	ctx_arrow(ctx)->r22.s64 = 600;
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,36
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 36;
	// stfs f20,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f20.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,32(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f19,14116(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f19.f64 = double(temp.f32);
	// stfs f19,28(ctx_arrow(ctx)->r11)
	temp.f32 = float(f19.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r22,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r10,211
	ctx_arrow(ctx)->r10.s64 = 211;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f27,2692(ctx_arrow(ctx)->r26)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f27.f64 = double(temp.f32);
	// lfs f31,6584(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,11104
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 11104;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e90
	sub_82371E90(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,311
	ctx_arrow(ctx)->r10.s64 = 311;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12152
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12152;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r23,1020
	ctx_arrow(ctx)->r23.s64 = 1020;
	// lfs f18,36(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f18.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,14224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 14224;
	// lfs f17,40(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f17.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// stfs f18,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f18.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f17,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f17.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f12,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371ef8
	sub_82371EF8(&ctx);
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lfs f13,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,18352
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 18352;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,18356
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 18356;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,18360
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 18360;
	// stfsx f26,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	temp.f32 = float(f26.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,36
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 36;
	// stfsx f25,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	temp.f32 = float(f25.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r20,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r21,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f24,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f24.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f12,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f23,28(ctx_arrow(ctx)->r11)
	temp.f32 = float(f23.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stfs f0,32(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,97
	ctx_arrow(ctx)->r10.s64 = 97;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20452
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20452;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f22,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f22.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f21,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f21.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371dc0
	sub_82371DC0(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1297
	ctx_arrow(ctx)->r10.s64 = 1297;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20988
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20988;
	// li ctx_arrow(ctx)->r9,1296
	ctx_arrow(ctx)->r9.s64 = 1296;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,36
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 36;
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f20,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f20.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r22,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f19,28(ctx_arrow(ctx)->r11)
	temp.f32 = float(f19.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stfs f13,32(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,223
	ctx_arrow(ctx)->r10.s64 = 223;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29224;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e90
	sub_82371E90(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,293
	ctx_arrow(ctx)->r10.s64 = 293;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30272
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 30272;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 131072;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32344
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32344;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f18,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f18.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f17,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f17.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371ef8
	sub_82371EF8(&ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,76(ctx_arrow(ctx)->r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,409
	ctx_arrow(ctx)->r10.s64 = 409;
	// lfs f13,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,4684(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-29064
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -29064;
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// li ctx_arrow(ctx)->r10,257
	ctx_arrow(ctx)->r10.s64 = 257;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-26992
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -26992;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f13,52(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-24920
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -24920;
	// lfs f12,56(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f11,60(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-24896
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -24896;
	// lfs f10,64(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-24864
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -24864;
	// lfs f9,68(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,72(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// stfs f13,4(ctx_arrow(ctx)->r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f0,12(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r9)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f11,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f10,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f9,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f8,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f0100
	sub_823F0100(&ctx);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// li ctx_arrow(ctx)->r10,3432
	ctx_arrow(ctx)->r10.s64 = 3432;
	// lfs f0,84(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-24836
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -24836;
	// lfs f12,1332(ctx_arrow(ctx)->r25)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f12,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371f60
	sub_82371F60(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// fmr f13,f20
	ctx.f13.f64 = f20.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-8420
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -8420;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-8396
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -8396;
	// li ctx_arrow(ctx)->r9,383
	ctx_arrow(ctx)->r9.s64 = 383;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f12,76(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f12,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,233
	ctx_arrow(ctx)->r10.s64 = 233;
	// fmr f13,f27
	ctx.f13.f64 = f27.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-6324
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -6324;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,52(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4252
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -4252;
	// lfs f11,64(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f10,68(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4228
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4228;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f13,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f12,16(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f13,56(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4196
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -4196;
	// lfs f12,60(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f12,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f11,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f10,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f9,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f0100
	sub_823F0100(&ctx);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// li ctx_arrow(ctx)->r10,3820
	ctx_arrow(ctx)->r10.s64 = 3820;
	// lfs f12,84(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4168
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4168;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,1332(ctx_arrow(ctx)->r25)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371f60
	sub_82371F60(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmr f13,f20
	ctx.f13.f64 = f20.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12248
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12248;
	// lfs f27,76(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f27.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1511
	ctx_arrow(ctx)->r10.s64 = 1511;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12272
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12272;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1061
	ctx_arrow(ctx)->r10.s64 = 1061;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20488
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20488;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// stfs f27,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f30,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 196608;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,853
	ctx_arrow(ctx)->r10.s64 = 853;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28708
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 28708;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,541
	ctx_arrow(ctx)->r10.s64 = 541;
	// lfs f13,2692(ctx_arrow(ctx)->r26)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-28612
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -28612;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371ef8
	sub_82371EF8(&ctx);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// lfs f0,84(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1510
	ctx_arrow(ctx)->r10.s64 = 1510;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-24492
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -24492;
	// lfs f13,1332(ctx_arrow(ctx)->r25)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// stfs f12,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f11,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// stfs f10,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371f60
	sub_82371F60(&ctx);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r9,1657
	ctx_arrow(ctx)->r9.s64 = 1657;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-8076
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -8076;
	// lfs f13,14016(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-8048
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -8048;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f30,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1103
	ctx_arrow(ctx)->r10.s64 = 1103;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,168
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 168;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// stfs f27,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f30,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,887
	ctx_arrow(ctx)->r10.s64 = 887;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8388
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8388;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f30,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f27,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e28
	sub_82371E28(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,491
	ctx_arrow(ctx)->r10.s64 = 491;
	// lfs f13,2692(ctx_arrow(ctx)->r26)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16604
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16604;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371ef8
	sub_82371EF8(&ctx);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 262144;
	// li ctx_arrow(ctx)->r10,1438
	ctx_arrow(ctx)->r10.s64 = 1438;
	// lfs f12,84(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20724
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20724;
	// lfs f13,1332(ctx_arrow(ctx)->r25)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f12,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371f60
	sub_82371F60(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f13,120(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-28396
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -28396;
	// lfs f30,124(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-28368
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -28368;
	// lis ctx_arrow(ctx)->r9,-32250
	ctx_arrow(ctx)->r9.s64 = -2113536000;
	// li ctx_arrow(ctx)->r8,131
	ctx_arrow(ctx)->r8.s64 = 131;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f13,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f31,4680(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// stfs f31,4(ctx_arrow(ctx)->r10)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f30,8(ctx_arrow(ctx)->r10)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,113
	ctx_arrow(ctx)->r10.s64 = 113;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-26296
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -26296;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f30,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,107
	ctx_arrow(ctx)->r10.s64 = 107;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-24224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -24224;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f30,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,127
	ctx_arrow(ctx)->r10.s64 = 127;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-22152
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -22152;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// stfs f31,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f30,8(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371d58
	sub_82371D58(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f0,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r28,20
	ctx_arrow(ctx)->r28.s64 = 20;
	// lfs f13,1340(ctx_arrow(ctx)->r24)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20080
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20080;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f13,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e90
	sub_82371E90(&ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 327680;
	// lfs f13,1328(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19024
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19024;
	// lfs f0,1340(ctx_arrow(ctx)->r24)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f13,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82371e90
	sub_82371E90(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,304
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 304;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-104
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -104;
	// bl 0x823ed568
	// b 0x823ed168
	return;
}

alias(__imp__sub_823739E8) PPC_WEAK_FUNC(sub_823739E8);
PPC_FUNC_IMPL(__imp__sub_823739E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f30,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stfd f31,-32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = 4;
	// li ctx_arrow(ctx)->r8,6
	ctx_arrow(ctx)->r8.s64 = 6;
	// lwz ctx_arrow(ctx)->r11,1320(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lwz ctx_arrow(ctx)->r10,1312(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,1312(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lwz ctx_arrow(ctx)->r10,1316(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,1316(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,1336(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f31,3904(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,56(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// stw ctx_arrow(ctx)->r8,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f30,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,60(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// lfs f0,16(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f30
	ctx_arrow(ctx)->r6.compare(f0.f64, f30.f64);
	// blt ctx_arrow(ctx)->r6,0x82373b44
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82373B44;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// lfs f1,16(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f10c0
	sub_823F10C0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfd f0,4712(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -8, xer);
	// bge ctx_arrow(ctx)->r6,0x82373b0c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82373B0C;
	// li ctx_arrow(ctx)->r11,-8
	ctx_arrow(ctx)->r11.s64 = -8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,16(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82373ba0
	goto loc_82373BA0;
loc_82373B0C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x82373b2c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82373B2C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,16(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82373ba0
	goto loc_82373BA0;
loc_82373B2C:
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,16(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82373ba0
	goto loc_82373BA0;
loc_82373B44:
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lfs f1,16(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f10c0
	sub_823F10C0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfd f0,4704(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -8, xer);
	// bge ctx_arrow(ctx)->r6,0x82373b84
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82373B84;
	// li ctx_arrow(ctx)->r11,-8
	ctx_arrow(ctx)->r11.s64 = -8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// b 0x82373b98
	goto loc_82373B98;
loc_82373B84:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x82373b94
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82373B94;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// b 0x82373b98
	goto loc_82373B98;
loc_82373B94:
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
loc_82373B98:
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
loc_82373BA0:
	// stfs f0,72(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,64(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,1304(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,24(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f12,14108(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x82373bf8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82373BF8;
	// fsubs f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 - f30.f64));
loc_82373BF8:
	// fcmpu ctx_arrow(ctx)->r6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, f30.f64);
	// bgt ctx_arrow(ctx)->r6,0x82373c04
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82373C04;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_82373C04:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,68(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,1308(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,32(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x82373c58
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82373C58;
	// fsubs f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 - f30.f64));
loc_82373C58:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,36(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,14396(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lfs f0,40(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,76(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// lfs f0,44(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,52(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-40(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-32(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82373CC0) PPC_WEAK_FUNC(sub_82373CC0);
PPC_FUNC_IMPL(__imp__sub_82373CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r23{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 12, xer);
	// bgt ctx_arrow(ctx)->r6,0x82373dcc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82373DCC;
	// lis ctx_arrow(ctx)->r12,-32201
	ctx_arrow(ctx)->r12.s64 = -2110324736;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,15608
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 15608;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r4.u64) {
	case 0:
		goto loc_82373D2C;
	case 1:
		goto loc_82373D40;
	case 2:
		goto loc_82373D4C;
	case 3:
		goto loc_82373D58;
	case 4:
		goto loc_82373D64;
	case 5:
		goto loc_82373D70;
	case 6:
		goto loc_82373D7C;
	case 7:
		goto loc_82373D88;
	case 8:
		goto loc_82373D94;
	case 9:
		goto loc_82373DA0;
	case 10:
		goto loc_82373DAC;
	case 11:
		goto loc_82373DB8;
	case 12:
		goto loc_82373DC4;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,15660(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15680(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15692(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15704(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15716(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15728(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15740(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15752(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15764(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15776(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15788(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15800(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15812(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82373D2C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// li ctx_arrow(ctx)->r5,48
	ctx_arrow(ctx)->r5.s64 = 48;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D40:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D4C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D58:
	// lfs f0,8(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D64:
	// lfs f0,12(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D70:
	// lfs f0,16(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D7C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D88:
	// lfs f0,24(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,28(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373D94:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373DA0:
	// lfs f0,32(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,36(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373DAC:
	// lfs f0,36(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373DB8:
	// lfs f0,40(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,44(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// b 0x82373dcc
	goto loc_82373DCC;
loc_82373DC4:
	// lfs f0,44(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,48(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_82373DCC:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82371b08
	sub_82371B08(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lfs f1,88(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823739e8
	sub_823739E8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// bl 0x82371fe8
	sub_82371FE8(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82373E18) PPC_WEAK_FUNC(sub_82373E18);
PPC_FUNC_IMPL(__imp__sub_82373E18) {
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
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// stw ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x82373e54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82373E54;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4720
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4720;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82372e18
	sub_82372E18(&ctx);
loc_82373E54:
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,504
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 504;
	// li ctx_arrow(ctx)->r11,-10000
	ctx_arrow(ctx)->r11.s64 = -10000;
	// lfs f13,2688(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,2776(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// stfs f13,12(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f12,16(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lfs f11,2692(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// stfs f11,20(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lfs f10,14460(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32250
	ctx_arrow(ctx)->r9.s64 = -2113536000;
	// stfs f10,28(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lfs f9,4668(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// stfs f9,36(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lfs f0,2944(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// stfs f0,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stfs f0,44(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// lfs f8,17848(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,48(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_82373EF0) PPC_WEAK_FUNC(sub_82373EF0);
PPC_FUNC_IMPL(__imp__sub_82373EF0) {
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
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4736
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4736;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82378af8
	sub_82378AF8(&ctx);
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

alias(__imp__sub_82373F30) PPC_WEAK_FUNC(sub_82373F30);
PPC_FUNC_IMPL(__imp__sub_82373F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r10,-32250
	ctx_arrow(ctx)->r10.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4736
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4736;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x82378a00
	sub_82378A00(&ctx);
	return;
}

alias(__imp__sub_82373F48) PPC_WEAK_FUNC(sub_82373F48);
PPC_FUNC_IMPL(__imp__sub_82373F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,36
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 36;
	// li ctx_arrow(ctx)->r5,56
	ctx_arrow(ctx)->r5.s64 = 56;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.s64 = 32;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// stfs f0,96(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// stfs f0,100(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r9,156(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 156, ctx_arrow(ctx)->r4.u8);
	// sth ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 92, ctx_arrow(ctx)->r10.u16);
	// sth ctx_arrow(ctx)->r10,94(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 94, ctx_arrow(ctx)->r10.u16);
	// stw ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 152, ctx_arrow(ctx)->r4.u32);
	// bl 0x82378a38
	sub_82378A38(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82373FB0) PPC_WEAK_FUNC(sub_82373FB0);
PPC_FUNC_IMPL(__imp__sub_82373FB0) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82373ff0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82373FF0;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,65535
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 65535;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_82373FF0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r5,-32768
	ctx_arrow(ctx)->r5.s64 = -2147483648;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,16388
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 16388;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82373ff0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82373FF0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 152, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_82374058) PPC_WEAK_FUNC(sub_82374058);
PPC_FUNC_IMPL(__imp__sub_82374058) {
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
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4736
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4736;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82378a00
	sub_82378A00(&ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823740a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823740A8;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// lis ctx_arrow(ctx)->r5,24962
	ctx_arrow(ctx)->r5.s64 = 1635909632;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5060
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5060;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82369440
	sub_82369440(ctx, base);
loc_823740A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
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

alias(__imp__sub_823740C8) PPC_WEAK_FUNC(sub_823740C8);
PPC_FUNC_IMPL(__imp__sub_823740C8) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// clrlwi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 0) & 0x10;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-5176
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -5176;
	// bne ctx_arrow(ctx)->r6,0x82374274
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82374274;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82374108
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82374108;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 32, ctx_arrow(ctx)->r4.u32);
loc_82374108:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823741c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823741C4;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blt ctx_arrow(ctx)->r6,0x82374170
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82374170;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r13
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r13.u64;
	// beq ctx_arrow(ctx)->r6,0x82374170
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82374170;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82374170
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82374170;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x82374170
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82374170;
	// lbz ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32.u8);
	// blr 
	return;
}

