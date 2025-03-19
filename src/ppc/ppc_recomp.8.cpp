#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8213EAC0) PPC_WEAK_FUNC(sub_8213EAC0);
PPC_FUNC_IMPL(__imp__sub_8213EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x823ed13c
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-32
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -32;
	// bl 0x823ed528
	// stwu ctx_arrow(ctx)->r1,-368(ctx_arrow(ctx)->r1)
	ea = -368 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stfs f31,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stfs f31,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stfs f31,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// stfs f31,96(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r11, 0);
	// li ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r11.s64 = 255;
	// stfs f31,100(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx.u8)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed188
	return;
}

