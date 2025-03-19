#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8215F2A8) PPC_WEAK_FUNC(sub_8215F2A8);
PPC_FUNC_IMPL(__imp__sub_8215F2A8) {
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
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823b3828
	sub_823B3828(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x8215f300
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8215F300;
loc_8215F2D4:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823b3b18
	sub_823B3B18(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8215f300
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8215F300;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823b3828
	sub_823B3828(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8215f2d4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8215F2D4;
loc_8215F300:
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

alias(__imp__sub_8215F318) PPC_WEAK_FUNC(sub_8215F318);
PPC_FUNC_IMPL(__imp__sub_8215F318) {
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
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823b3828
	sub_823B3828(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x8215f374
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8215F374;
loc_8215F348:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823b3b18
	sub_823B3B18(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8215f374
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8215F374;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823b3828
	sub_823B3828(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8215f348
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8215F348;
loc_8215F374:
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

alias(__imp__sub_8215F388) PPC_WEAK_FUNC(sub_8215F388);
PPC_FUNC_IMPL(__imp__sub_8215F388) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r3,9
	ctx_arrow(ctx)->r3.s64 = 9;
	// blr 
	return;
}

alias(__imp__sub_8215F390) PPC_WEAK_FUNC(sub_8215F390);
PPC_FUNC_IMPL(__imp__sub_8215F390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-28000
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -28000;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -1;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx.u8);
	// blr 
	return;
}

