#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82183850) PPC_WEAK_FUNC(sub_82183850);
PPC_FUNC_IMPL(__imp__sub_82183850) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1276
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1276;
	// blr 
	return;
}

alias(__imp__sub_82183858) PPC_WEAK_FUNC(sub_82183858);
PPC_FUNC_IMPL(__imp__sub_82183858) {
	PPC_FUNC_PROLOGUE();
	// ld ctx_arrow(ctx)->r3,1288(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82183860) PPC_WEAK_FUNC(sub_82183860);
PPC_FUNC_IMPL(__imp__sub_82183860) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82183890
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82183890;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,652
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 652;
	// li ctx_arrow(ctx)->r5,232
	ctx_arrow(ctx)->r5.s64 = 232;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82183894
	goto loc_82183894;
loc_82183890:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82183894:
	// stb ctx_arrow(ctx)->r11,1358(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 1358, ctx_arrow(ctx.u8)->r3.u32 + 16);
	// blr 
	return;
}

