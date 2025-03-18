#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8240DAE0) PPC_WEAK_FUNC(sub_8240DAE0);
PPC_FUNC_IMPL(__imp__sub_8240DAE0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-27064
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -27064;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-6132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -6132;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18584
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 18584;
	// li ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 5;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3832
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3832;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DB30) PPC_WEAK_FUNC(sub_8240DB30);
PPC_FUNC_IMPL(__imp__sub_8240DB30) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-27052
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -27052;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-6108
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -6108;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18952
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 18952;
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3816
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3816;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DB80) PPC_WEAK_FUNC(sub_8240DB80);
PPC_FUNC_IMPL(__imp__sub_8240DB80) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-27036
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -27036;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-6060
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -6060;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20016
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 20016;
	// li ctx_arrow(ctx)->r4,7
	ctx_arrow(ctx)->r4.s64 = 7;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3800
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3800;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DBD0) PPC_WEAK_FUNC(sub_8240DBD0);
PPC_FUNC_IMPL(__imp__sub_8240DBD0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-27024
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -27024;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-6084
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -6084;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20544
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 20544;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3784
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3784;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DC20) PPC_WEAK_FUNC(sub_8240DC20);
PPC_FUNC_IMPL(__imp__sub_8240DC20) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-26928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -26928;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-6012
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -6012;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,23696
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 23696;
	// li ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.s64 = 9;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3768
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3768;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DC70) PPC_WEAK_FUNC(sub_8240DC70);
PPC_FUNC_IMPL(__imp__sub_8240DC70) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-26916
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -26916;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-6036
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -6036;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,24264
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 24264;
	// li ctx_arrow(ctx)->r4,10
	ctx_arrow(ctx)->r4.s64 = 10;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3752
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3752;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DCC0) PPC_WEAK_FUNC(sub_8240DCC0);
PPC_FUNC_IMPL(__imp__sub_8240DCC0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32234
	ctx_arrow(ctx)->r11.s64 = -2112487424;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-26180
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -26180;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5972
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5972;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32704
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 32704;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3736
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3736;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DD10) PPC_WEAK_FUNC(sub_8240DD10);
PPC_FUNC_IMPL(__imp__sub_8240DD10) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-26172
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -26172;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5948
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5948;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-32224
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -32224;
	// li ctx_arrow(ctx)->r4,29
	ctx_arrow(ctx)->r4.s64 = 29;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3720
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3720;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DD60) PPC_WEAK_FUNC(sub_8240DD60);
PPC_FUNC_IMPL(__imp__sub_8240DD60) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-26164
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -26164;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5924
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5924;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-30264
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -30264;
	// li ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.s64 = 30;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3704
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3704;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DDB0) PPC_WEAK_FUNC(sub_8240DDB0);
PPC_FUNC_IMPL(__imp__sub_8240DDB0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-26156
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -26156;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5900
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5900;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-28872
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -28872;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3688
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3688;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DE00) PPC_WEAK_FUNC(sub_8240DE00);
PPC_FUNC_IMPL(__imp__sub_8240DE00) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25976
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25976;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5876
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5876;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-17248
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -17248;
	// li ctx_arrow(ctx)->r4,89
	ctx_arrow(ctx)->r4.s64 = 89;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3672
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3672;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DE50) PPC_WEAK_FUNC(sub_8240DE50);
PPC_FUNC_IMPL(__imp__sub_8240DE50) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25880
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25880;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5828
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5828;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-13816
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -13816;
	// li ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r4.s64 = 92;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3656
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3656;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DEA0) PPC_WEAK_FUNC(sub_8240DEA0);
PPC_FUNC_IMPL(__imp__sub_8240DEA0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25784
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25784;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5804
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5804;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-11608
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -11608;
	// li ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r4.s64 = 17;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3640
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3640;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DEF0) PPC_WEAK_FUNC(sub_8240DEF0);
PPC_FUNC_IMPL(__imp__sub_8240DEF0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25244
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25244;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5732
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5732;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-9752
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -9752;
	// li ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r4.s64 = 48;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3624
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3624;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DF40) PPC_WEAK_FUNC(sub_8240DF40);
PPC_FUNC_IMPL(__imp__sub_8240DF40) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25236
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25236;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5756
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5756;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-8656
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -8656;
	// li ctx_arrow(ctx)->r4,49
	ctx_arrow(ctx)->r4.s64 = 49;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3608
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3608;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DF90) PPC_WEAK_FUNC(sub_8240DF90);
PPC_FUNC_IMPL(__imp__sub_8240DF90) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25228
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25228;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5684
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5684;
	// li ctx_arrow(ctx)->r7,6
	ctx_arrow(ctx)->r7.s64 = 6;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-6424
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -6424;
	// li ctx_arrow(ctx)->r4,50
	ctx_arrow(ctx)->r4.s64 = 50;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3592
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3592;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240DFE0) PPC_WEAK_FUNC(sub_8240DFE0);
PPC_FUNC_IMPL(__imp__sub_8240DFE0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25220
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25220;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5660
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5660;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-5344
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -5344;
	// li ctx_arrow(ctx)->r4,51
	ctx_arrow(ctx)->r4.s64 = 51;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3576
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3576;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E030) PPC_WEAK_FUNC(sub_8240E030);
PPC_FUNC_IMPL(__imp__sub_8240E030) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25212
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25212;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5708
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5708;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-4608
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -4608;
	// li ctx_arrow(ctx)->r4,52
	ctx_arrow(ctx)->r4.s64 = 52;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3560
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3560;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E080) PPC_WEAK_FUNC(sub_8240E080);
PPC_FUNC_IMPL(__imp__sub_8240E080) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25196
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25196;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5780
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5780;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-2072
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -2072;
	// li ctx_arrow(ctx)->r4,76
	ctx_arrow(ctx)->r4.s64 = 76;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3544
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3544;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E0D0) PPC_WEAK_FUNC(sub_8240E0D0);
PPC_FUNC_IMPL(__imp__sub_8240E0D0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25104
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25104;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5584
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5584;
	// li ctx_arrow(ctx)->r7,6
	ctx_arrow(ctx)->r7.s64 = 6;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -96;
	// li ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 11;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3528
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3528;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E120) PPC_WEAK_FUNC(sub_8240E120);
PPC_FUNC_IMPL(__imp__sub_8240E120) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25096
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25096;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5632
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5632;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,336
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 336;
	// li ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r4.s64 = 12;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3512
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3512;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E170) PPC_WEAK_FUNC(sub_8240E170);
PPC_FUNC_IMPL(__imp__sub_8240E170) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25080
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25080;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5608
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5608;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// li ctx_arrow(ctx)->r4,13
	ctx_arrow(ctx)->r4.s64 = 13;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3496
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3496;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E1C0) PPC_WEAK_FUNC(sub_8240E1C0);
PPC_FUNC_IMPL(__imp__sub_8240E1C0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25068
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25068;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5536
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5536;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 680;
	// li ctx_arrow(ctx)->r4,14
	ctx_arrow(ctx)->r4.s64 = 14;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3480
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3480;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E210) PPC_WEAK_FUNC(sub_8240E210);
PPC_FUNC_IMPL(__imp__sub_8240E210) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-25048
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -25048;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5560
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5560;
	// li ctx_arrow(ctx)->r7,6
	ctx_arrow(ctx)->r7.s64 = 6;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1224
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 1224;
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3464
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3464;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E260) PPC_WEAK_FUNC(sub_8240E260);
PPC_FUNC_IMPL(__imp__sub_8240E260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3448
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3448;
	// b 0x823edef0
	sub_823EDEF0(ctx, base);
	return;
}

alias(__imp__sub_8240E270) PPC_WEAK_FUNC(sub_8240E270);
PPC_FUNC_IMPL(__imp__sub_8240E270) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-24704
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -24704;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5500
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5500;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3848
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 3848;
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3440
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3440;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E2C0) PPC_WEAK_FUNC(sub_8240E2C0);
PPC_FUNC_IMPL(__imp__sub_8240E2C0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-24692
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -24692;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5452
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5452;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5712
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 5712;
	// li ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r4.s64 = 25;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3424
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3424;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E310) PPC_WEAK_FUNC(sub_8240E310);
PPC_FUNC_IMPL(__imp__sub_8240E310) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-24680
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -24680;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5476
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5476;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6632
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 6632;
	// li ctx_arrow(ctx)->r4,26
	ctx_arrow(ctx)->r4.s64 = 26;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3408
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3408;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E360) PPC_WEAK_FUNC(sub_8240E360);
PPC_FUNC_IMPL(__imp__sub_8240E360) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5380
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5380;
	// bl 0x8216b7b0
	sub_8216B7B0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3392
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3392;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E398) PPC_WEAK_FUNC(sub_8240E398);
PPC_FUNC_IMPL(__imp__sub_8240E398) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// li ctx_arrow(ctx)->r5,256
	ctx_arrow(ctx)->r5.s64 = 256;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5408
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5408;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8216a7a0
	sub_8216A7A0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3376
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3376;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E3D8) PPC_WEAK_FUNC(sub_8240E3D8);
PPC_FUNC_IMPL(__imp__sub_8240E3D8) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-5296
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -5296;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82178d10
	sub_82178D10(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r10,-32191
	ctx_arrow(ctx)->r10.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-24668
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -24668;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-3360
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -3360;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823edef0
	sub_823EDEF0(&ctx);
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

alias(__imp__sub_8240E428) PPC_WEAK_FUNC(sub_8240E428);
PPC_FUNC_IMPL(__imp__sub_8240E428) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23888
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23888;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5284
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5284;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9392
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9392;
	// li ctx_arrow(ctx)->r4,87
	ctx_arrow(ctx)->r4.s64 = 87;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3328
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3328;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E478) PPC_WEAK_FUNC(sub_8240E478);
PPC_FUNC_IMPL(__imp__sub_8240E478) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23876
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23876;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5320
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5320;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10136
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 10136;
	// li ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.s64 = 28;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3312
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3312;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E4C8) PPC_WEAK_FUNC(sub_8240E4C8);
PPC_FUNC_IMPL(__imp__sub_8240E4C8) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23864
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23864;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5140
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5140;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10880
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 10880;
	// li ctx_arrow(ctx)->r4,61
	ctx_arrow(ctx)->r4.s64 = 61;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3296
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3296;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E518) PPC_WEAK_FUNC(sub_8240E518);
PPC_FUNC_IMPL(__imp__sub_8240E518) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23852
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23852;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5260
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5260;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,11304
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 11304;
	// li ctx_arrow(ctx)->r4,62
	ctx_arrow(ctx)->r4.s64 = 62;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3280
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3280;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E568) PPC_WEAK_FUNC(sub_8240E568);
PPC_FUNC_IMPL(__imp__sub_8240E568) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23836
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23836;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5188
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5188;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12200
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 12200;
	// li ctx_arrow(ctx)->r4,63
	ctx_arrow(ctx)->r4.s64 = 63;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3264
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3264;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E5B8) PPC_WEAK_FUNC(sub_8240E5B8);
PPC_FUNC_IMPL(__imp__sub_8240E5B8) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23824
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23824;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5164
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5164;
	// li ctx_arrow(ctx)->r7,8
	ctx_arrow(ctx)->r7.s64 = 8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 13160;
	// li ctx_arrow(ctx)->r4,64
	ctx_arrow(ctx)->r4.s64 = 64;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3248
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3248;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E608) PPC_WEAK_FUNC(sub_8240E608);
PPC_FUNC_IMPL(__imp__sub_8240E608) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23812
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23812;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5212
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5212;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13648
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 13648;
	// li ctx_arrow(ctx)->r4,65
	ctx_arrow(ctx)->r4.s64 = 65;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3232
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3232;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E658) PPC_WEAK_FUNC(sub_8240E658);
PPC_FUNC_IMPL(__imp__sub_8240E658) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23796
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23796;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5236
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5236;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14608
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 14608;
	// li ctx_arrow(ctx)->r4,83
	ctx_arrow(ctx)->r4.s64 = 83;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3216
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3216;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E6A8) PPC_WEAK_FUNC(sub_8240E6A8);
PPC_FUNC_IMPL(__imp__sub_8240E6A8) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-23696
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -23696;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5096
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5096;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20904
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 20904;
	// li ctx_arrow(ctx)->r4,33
	ctx_arrow(ctx)->r4.s64 = 33;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3200
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3200;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E6F8) PPC_WEAK_FUNC(sub_8240E6F8);
PPC_FUNC_IMPL(__imp__sub_8240E6F8) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32233
	ctx_arrow(ctx)->r11.s64 = -2112421888;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-22928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -22928;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5056
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5056;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32424
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 32424;
	// li ctx_arrow(ctx)->r4,55
	ctx_arrow(ctx)->r4.s64 = 55;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3184
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3184;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E748) PPC_WEAK_FUNC(sub_8240E748);
PPC_FUNC_IMPL(__imp__sub_8240E748) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32232
	ctx_arrow(ctx)->r11.s64 = -2112356352;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-22924
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -22924;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-5032
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -5032;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-32720
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -32720;
	// li ctx_arrow(ctx)->r4,56
	ctx_arrow(ctx)->r4.s64 = 56;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3168
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3168;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E798) PPC_WEAK_FUNC(sub_8240E798);
PPC_FUNC_IMPL(__imp__sub_8240E798) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32232
	ctx_arrow(ctx)->r11.s64 = -2112356352;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-22912
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -22912;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-4992
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -4992;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-22152
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -22152;
	// li ctx_arrow(ctx)->r4,27
	ctx_arrow(ctx)->r4.s64 = 27;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3152
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3152;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E7E8) PPC_WEAK_FUNC(sub_8240E7E8);
PPC_FUNC_IMPL(__imp__sub_8240E7E8) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32232
	ctx_arrow(ctx)->r11.s64 = -2112356352;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-22824
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -22824;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,20684
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 20684;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-20728
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -20728;
	// li ctx_arrow(ctx)->r4,34
	ctx_arrow(ctx)->r4.s64 = 34;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3136
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3136;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E838) PPC_WEAK_FUNC(sub_8240E838);
PPC_FUNC_IMPL(__imp__sub_8240E838) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20712
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 20712;
	// bl 0x8217d158
	sub_8217D158(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3120;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E870) PPC_WEAK_FUNC(sub_8240E870);
PPC_FUNC_IMPL(__imp__sub_8240E870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,30976
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 30976;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,260
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 260;
loc_8240E884:
	// stw ctx_arrow(ctx)->r8,-256(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -256);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,516
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 516;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8240e884
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8240E884;
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3088
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3088;
	// b 0x823edef0
	sub_823EDEF0(ctx, base);
	return;
}

alias(__imp__sub_8240E8A8) PPC_WEAK_FUNC(sub_8240E8A8);
PPC_FUNC_IMPL(__imp__sub_8240E8A8) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32232
	ctx_arrow(ctx)->r11.s64 = -2112356352;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-22688
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -22688;
	// lis ctx_arrow(ctx)->r10,-31992
	ctx_arrow(ctx)->r10.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,31492
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 31492;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7184
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 7184;
	// li ctx_arrow(ctx)->r4,93
	ctx_arrow(ctx)->r4.s64 = 93;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3104;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E8F8) PPC_WEAK_FUNC(sub_8240E8F8);
PPC_FUNC_IMPL(__imp__sub_8240E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// li ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31520
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 31520;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 64;
loc_8240E90C:
	// stw ctx_arrow(ctx)->r8,-64(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -64);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,128
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 128;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8240e90c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8240E90C;
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3080
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3080;
	// b 0x823edef0
	sub_823EDEF0(ctx, base);
	return;
}

alias(__imp__sub_8240E930) PPC_WEAK_FUNC(sub_8240E930);
PPC_FUNC_IMPL(__imp__sub_8240E930) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31680
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31680;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2512
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2512;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E968) PPC_WEAK_FUNC(sub_8240E968);
PPC_FUNC_IMPL(__imp__sub_8240E968) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31704
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31704;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-3072
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -3072;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E9A0) PPC_WEAK_FUNC(sub_8240E9A0);
PPC_FUNC_IMPL(__imp__sub_8240E9A0) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31800
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31800;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2992
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2992;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240E9D8) PPC_WEAK_FUNC(sub_8240E9D8);
PPC_FUNC_IMPL(__imp__sub_8240E9D8) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31656
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31656;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2912
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2912;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EA10) PPC_WEAK_FUNC(sub_8240EA10);
PPC_FUNC_IMPL(__imp__sub_8240EA10) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31752
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31752;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2832
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2832;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EA48) PPC_WEAK_FUNC(sub_8240EA48);
PPC_FUNC_IMPL(__imp__sub_8240EA48) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31776
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31776;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2752
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2752;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EA80) PPC_WEAK_FUNC(sub_8240EA80);
PPC_FUNC_IMPL(__imp__sub_8240EA80) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31728
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31728;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2672
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2672;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EAB8) PPC_WEAK_FUNC(sub_8240EAB8);
PPC_FUNC_IMPL(__imp__sub_8240EAB8) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31824
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31824;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2592
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2592;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EAF0) PPC_WEAK_FUNC(sub_8240EAF0);
PPC_FUNC_IMPL(__imp__sub_8240EAF0) {
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
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r11,-32232
	ctx_arrow(ctx)->r11.s64 = -2112356352;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-20232
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -20232;
	// lis ctx_arrow(ctx)->r10,-31991
	ctx_arrow(ctx)->r10.s64 = -2096562176;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-31860
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -31860;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,17024
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 17024;
	// li ctx_arrow(ctx)->r4,19
	ctx_arrow(ctx)->r4.s64 = 19;
	// bl 0x8215c868
	sub_8215C868(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2432
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2432;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EB40) PPC_WEAK_FUNC(sub_8240EB40);
PPC_FUNC_IMPL(__imp__sub_8240EB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// li ctx_arrow(ctx)->r4,113
	ctx_arrow(ctx)->r4.s64 = 113;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5508
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5508;
	// b 0x82318430
	sub_82318430(ctx, base);
	return;
}

alias(__imp__sub_8240EB50) PPC_WEAK_FUNC(sub_8240EB50);
PPC_FUNC_IMPL(__imp__sub_8240EB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-5508
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -5508;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5468
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5468;
	// b 0x82319200
	sub_82319200(ctx, base);
	return;
}

alias(__imp__sub_8240EB68) PPC_WEAK_FUNC(sub_8240EB68);
PPC_FUNC_IMPL(__imp__sub_8240EB68) {
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
	// lis ctx_arrow(ctx)->r11,-32017
	ctx_arrow(ctx)->r11.s64 = -2098266112;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-15784
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -15784;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bl 0x8240f94c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2416
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2416;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EBA0) PPC_WEAK_FUNC(sub_8240EBA0);
PPC_FUNC_IMPL(__imp__sub_8240EBA0) {
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
	// lis ctx_arrow(ctx)->r11,-32017
	ctx_arrow(ctx)->r11.s64 = -2098266112;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-15752
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -15752;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bl 0x8240f94c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2392
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2392;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240EBD8) PPC_WEAK_FUNC(sub_8240EBD8);
PPC_FUNC_IMPL(__imp__sub_8240EBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31989
	ctx_arrow(ctx)->r11.s64 = -2096431104;
	// lis ctx_arrow(ctx)->r10,-32250
	ctx_arrow(ctx)->r10.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31536
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 31536;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,11952
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 11952;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
loc_8240EBF0:
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// bdnz 0x8240ebf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8240EBF0;
	// blr 
	return;
}

alias(__imp__sub_8240EC08) PPC_WEAK_FUNC(sub_8240EC08);
PPC_FUNC_IMPL(__imp__sub_8240EC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31989
	ctx_arrow(ctx)->r11.s64 = -2096431104;
	// lis ctx_arrow(ctx)->r10,-32250
	ctx_arrow(ctx)->r10.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31600
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 31600;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,11952
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 11952;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
loc_8240EC20:
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// bdnz 0x8240ec20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8240EC20;
	// blr 
	return;
}

alias(__imp__sub_8240EC38) PPC_WEAK_FUNC(sub_8240EC38);
PPC_FUNC_IMPL(__imp__sub_8240EC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31989
	ctx_arrow(ctx)->r11.s64 = -2096431104;
	// lis ctx_arrow(ctx)->r10,-32250
	ctx_arrow(ctx)->r10.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31664
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 31664;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,11952
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 11952;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
loc_8240EC50:
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 8;
	// bdnz 0x8240ec50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8240EC50;
	// blr 
	return;
}

alias(__imp__sub_8240EC68) PPC_WEAK_FUNC(sub_8240EC68);
PPC_FUNC_IMPL(__imp__sub_8240EC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-31520
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -31520;
	// b 0x823af1e0
	sub_823AF1E0(ctx, base);
	return;
}

alias(__imp__sub_8240EC78) PPC_WEAK_FUNC(sub_8240EC78);
PPC_FUNC_IMPL(__imp__sub_8240EC78) {
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
	// bl 0x823b1750
	sub_823B1750(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-31192(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -31192);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240ECA0) PPC_WEAK_FUNC(sub_8240ECA0);
PPC_FUNC_IMPL(__imp__sub_8240ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r9,-31987
	ctx_arrow(ctx)->r9.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r10,-31180(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bnelr 
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) return;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-22224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -22224;
	// stw ctx_arrow(ctx)->r10,-31180(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + -31180);
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r11,-31184(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + -31184);
	// blr 
	return;
}

alias(__imp__sub_8240ECD0) PPC_WEAK_FUNC(sub_8240ECD0);
PPC_FUNC_IMPL(__imp__sub_8240ECD0) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r5,2048
	ctx_arrow(ctx)->r5.s64 = 2048;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-23056
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -23056;
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,19632
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 19632;
	// bl 0x823b2a68
	sub_823B2A68(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2368
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2368;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240ED10) PPC_WEAK_FUNC(sub_8240ED10);
PPC_FUNC_IMPL(__imp__sub_8240ED10) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r5,2048
	ctx_arrow(ctx)->r5.s64 = 2048;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-25112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -25112;
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,19656
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 19656;
	// bl 0x823b2a68
	sub_823B2A68(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32191
	ctx_arrow(ctx)->r11.s64 = -2109669376;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2360
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2360;
	// bl 0x823edef0
	sub_823EDEF0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8240ED50) PPC_WEAK_FUNC(sub_8240ED50);
PPC_FUNC_IMPL(__imp__sub_8240ED50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// li ctx_arrow(ctx)->r5,44
	ctx_arrow(ctx)->r5.s64 = 44;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-20720
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -20720;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x823edf70
	sub_823EDF70(ctx, base);
	return;
}

alias(__imp__sub_8240ED68) PPC_WEAK_FUNC(sub_8240ED68);
PPC_FUNC_IMPL(__imp__sub_8240ED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f0,-21852(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stfs f0,-20428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20428);
	// blr 
	return;
}

alias(__imp__sub_8240ED80) PPC_WEAK_FUNC(sub_8240ED80);
PPC_FUNC_IMPL(__imp__sub_8240ED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f0,-21852(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20420
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20420;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_8240ED98) PPC_WEAK_FUNC(sub_8240ED98);
PPC_FUNC_IMPL(__imp__sub_8240ED98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f0,-21852(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// stfs f0,-21848(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -21848);
	// blr 
	return;
}

alias(__imp__sub_8240EDB0) PPC_WEAK_FUNC(sub_8240EDB0);
PPC_FUNC_IMPL(__imp__sub_8240EDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20412
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20412;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_8240EDD8) PPC_WEAK_FUNC(sub_8240EDD8);
PPC_FUNC_IMPL(__imp__sub_8240EDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,-21840(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -21840);
	// blr 
	return;
}

alias(__imp__sub_8240EDF8) PPC_WEAK_FUNC(sub_8240EDF8);
PPC_FUNC_IMPL(__imp__sub_8240EDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21832
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21832;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_8240EE20) PPC_WEAK_FUNC(sub_8240EE20);
PPC_FUNC_IMPL(__imp__sub_8240EE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,-20404(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -20404);
	// blr 
	return;
}

alias(__imp__sub_8240EE40) PPC_WEAK_FUNC(sub_8240EE40);
PPC_FUNC_IMPL(__imp__sub_8240EE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f0,-21852(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21824
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21824;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_8240EE58) PPC_WEAK_FUNC(sub_8240EE58);
PPC_FUNC_IMPL(__imp__sub_8240EE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240EE60) PPC_WEAK_FUNC(sub_8240EE60);
PPC_FUNC_IMPL(__imp__sub_8240EE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31993
	ctx_arrow(ctx)->r11.s64 = -2096693248;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29036
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29036;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30696
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30696;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x821777e0
	sub_821777E0(&ctx);
	return;
}

alias(__imp__sub_8240EE78) PPC_WEAK_FUNC(sub_8240EE78);
PPC_FUNC_IMPL(__imp__sub_8240EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31993
	ctx_arrow(ctx)->r11.s64 = -2096693248;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29076
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29076;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EE88) PPC_WEAK_FUNC(sub_8240EE88);
PPC_FUNC_IMPL(__imp__sub_8240EE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r10,-32019
	ctx_arrow(ctx)->r10.s64 = -2098397184;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30724
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30724;
	// stw ctx_arrow(ctx)->r11,25988(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 25988);
	// blr 
	return;
}

alias(__imp__sub_8240EEA0) PPC_WEAK_FUNC(sub_8240EEA0);
PPC_FUNC_IMPL(__imp__sub_8240EEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31993
	ctx_arrow(ctx)->r11.s64 = -2096693248;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29104;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30052
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30052;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x821777e0
	sub_821777E0(&ctx);
	return;
}

alias(__imp__sub_8240EEB8) PPC_WEAK_FUNC(sub_8240EEB8);
PPC_FUNC_IMPL(__imp__sub_8240EEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31993
	ctx_arrow(ctx)->r11.s64 = -2096693248;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29116;
	// b 0x82150c58
	sub_82150C58(ctx, base);
	return;
}

alias(__imp__sub_8240EEC8) PPC_WEAK_FUNC(sub_8240EEC8);
PPC_FUNC_IMPL(__imp__sub_8240EEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-30132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -30132;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-29956
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -29956;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x821777e0
	sub_821777E0(&ctx);
	return;
}

alias(__imp__sub_8240EEE0) PPC_WEAK_FUNC(sub_8240EEE0);
PPC_FUNC_IMPL(__imp__sub_8240EEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-30092
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -30092;
	// b 0x82151390
	sub_82151390(ctx, base);
	return;
}

alias(__imp__sub_8240EEF0) PPC_WEAK_FUNC(sub_8240EEF0);
PPC_FUNC_IMPL(__imp__sub_8240EEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-30192
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -30192;
	// b 0x8216b5f0
	sub_8216B5F0(ctx, base);
	return;
}

alias(__imp__sub_8240EF00) PPC_WEAK_FUNC(sub_8240EF00);
PPC_FUNC_IMPL(__imp__sub_8240EF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-30220
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -30220;
	// b 0x8216a880
	sub_8216A880(ctx, base);
	return;
}

alias(__imp__sub_8240EF10) PPC_WEAK_FUNC(sub_8240EF10);
PPC_FUNC_IMPL(__imp__sub_8240EF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-30120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -30120;
	// b 0x8216a880
	sub_8216A880(ctx, base);
	return;
}

alias(__imp__sub_8240EF20) PPC_WEAK_FUNC(sub_8240EF20);
PPC_FUNC_IMPL(__imp__sub_8240EF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-29352
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -29352;
	// b 0x82156f10
	sub_82156F10(ctx, base);
	return;
}

alias(__imp__sub_8240EF30) PPC_WEAK_FUNC(sub_8240EF30);
PPC_FUNC_IMPL(__imp__sub_8240EF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-29440
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -29440;
	// b 0x8216b5f0
	sub_8216B5F0(ctx, base);
	return;
}

alias(__imp__sub_8240EF40) PPC_WEAK_FUNC(sub_8240EF40);
PPC_FUNC_IMPL(__imp__sub_8240EF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-29380
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -29380;
	// b 0x8216a880
	sub_8216A880(ctx, base);
	return;
}

alias(__imp__sub_8240EF50) PPC_WEAK_FUNC(sub_8240EF50);
PPC_FUNC_IMPL(__imp__sub_8240EF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28156
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28156;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EF60) PPC_WEAK_FUNC(sub_8240EF60);
PPC_FUNC_IMPL(__imp__sub_8240EF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28108
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28108;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EF70) PPC_WEAK_FUNC(sub_8240EF70);
PPC_FUNC_IMPL(__imp__sub_8240EF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28204
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28204;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EF80) PPC_WEAK_FUNC(sub_8240EF80);
PPC_FUNC_IMPL(__imp__sub_8240EF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28084
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28084;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EF90) PPC_WEAK_FUNC(sub_8240EF90);
PPC_FUNC_IMPL(__imp__sub_8240EF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28180
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28180;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EFA0) PPC_WEAK_FUNC(sub_8240EFA0);
PPC_FUNC_IMPL(__imp__sub_8240EFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28132;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240EFB0) PPC_WEAK_FUNC(sub_8240EFB0);
PPC_FUNC_IMPL(__imp__sub_8240EFB0) {
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
	// lis ctx_arrow(ctx)->r10,-32019
	ctx_arrow(ctx)->r10.s64 = -2098397184;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,26044
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 + 26044;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-28772
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -28772;
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240eff8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240EFF8;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 4, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x823bc6a8
	sub_823BC6A8(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_8240EFF8:
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

alias(__imp__sub_8240F010) PPC_WEAK_FUNC(sub_8240F010);
PPC_FUNC_IMPL(__imp__sub_8240F010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28024
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28024;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F020) PPC_WEAK_FUNC(sub_8240F020);
PPC_FUNC_IMPL(__imp__sub_8240F020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-28048
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -28048;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F030) PPC_WEAK_FUNC(sub_8240F030);
PPC_FUNC_IMPL(__imp__sub_8240F030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-26548
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -26548;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F040) PPC_WEAK_FUNC(sub_8240F040);
PPC_FUNC_IMPL(__imp__sub_8240F040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240F048) PPC_WEAK_FUNC(sub_8240F048);
PPC_FUNC_IMPL(__imp__sub_8240F048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-26524
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -26524;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F058) PPC_WEAK_FUNC(sub_8240F058);
PPC_FUNC_IMPL(__imp__sub_8240F058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-26500
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -26500;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F068) PPC_WEAK_FUNC(sub_8240F068);
PPC_FUNC_IMPL(__imp__sub_8240F068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-14448
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -14448;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F078) PPC_WEAK_FUNC(sub_8240F078);
PPC_FUNC_IMPL(__imp__sub_8240F078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-14424
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -14424;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F088) PPC_WEAK_FUNC(sub_8240F088);
PPC_FUNC_IMPL(__imp__sub_8240F088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-12432
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -12432;
	// b 0x82154758
	sub_82154758(ctx, base);
	return;
}

alias(__imp__sub_8240F098) PPC_WEAK_FUNC(sub_8240F098);
PPC_FUNC_IMPL(__imp__sub_8240F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-10416
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -10416;
	// b 0x82154758
	sub_82154758(ctx, base);
	return;
}

alias(__imp__sub_8240F0A8) PPC_WEAK_FUNC(sub_8240F0A8);
PPC_FUNC_IMPL(__imp__sub_8240F0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-14056
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -14056;
	// b 0x821554f8
	sub_821554F8(ctx, base);
	return;
}

alias(__imp__sub_8240F0B8) PPC_WEAK_FUNC(sub_8240F0B8);
PPC_FUNC_IMPL(__imp__sub_8240F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-14096
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -14096;
	// b 0x82155e00
	sub_82155E00(ctx, base);
	return;
}

alias(__imp__sub_8240F0C8) PPC_WEAK_FUNC(sub_8240F0C8);
PPC_FUNC_IMPL(__imp__sub_8240F0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-8376
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -8376;
	// b 0x8214cdb0
	sub_8214CDB0(ctx, base);
	return;
}

alias(__imp__sub_8240F0D8) PPC_WEAK_FUNC(sub_8240F0D8);
PPC_FUNC_IMPL(__imp__sub_8240F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-8400
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -8400;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F0E8) PPC_WEAK_FUNC(sub_8240F0E8);
PPC_FUNC_IMPL(__imp__sub_8240F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6176;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F0F8) PPC_WEAK_FUNC(sub_8240F0F8);
PPC_FUNC_IMPL(__imp__sub_8240F0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6200
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6200;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F108) PPC_WEAK_FUNC(sub_8240F108);
PPC_FUNC_IMPL(__imp__sub_8240F108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6132;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F118) PPC_WEAK_FUNC(sub_8240F118);
PPC_FUNC_IMPL(__imp__sub_8240F118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6108
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6108;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F128) PPC_WEAK_FUNC(sub_8240F128);
PPC_FUNC_IMPL(__imp__sub_8240F128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6060
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6060;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F138) PPC_WEAK_FUNC(sub_8240F138);
PPC_FUNC_IMPL(__imp__sub_8240F138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6084
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6084;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F148) PPC_WEAK_FUNC(sub_8240F148);
PPC_FUNC_IMPL(__imp__sub_8240F148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6012
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6012;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F158) PPC_WEAK_FUNC(sub_8240F158);
PPC_FUNC_IMPL(__imp__sub_8240F158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-6036
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -6036;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F168) PPC_WEAK_FUNC(sub_8240F168);
PPC_FUNC_IMPL(__imp__sub_8240F168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5972
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5972;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F178) PPC_WEAK_FUNC(sub_8240F178);
PPC_FUNC_IMPL(__imp__sub_8240F178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5948
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5948;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F188) PPC_WEAK_FUNC(sub_8240F188);
PPC_FUNC_IMPL(__imp__sub_8240F188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5924
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5924;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F198) PPC_WEAK_FUNC(sub_8240F198);
PPC_FUNC_IMPL(__imp__sub_8240F198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5900
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5900;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F1A8) PPC_WEAK_FUNC(sub_8240F1A8);
PPC_FUNC_IMPL(__imp__sub_8240F1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5876
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5876;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F1B8) PPC_WEAK_FUNC(sub_8240F1B8);
PPC_FUNC_IMPL(__imp__sub_8240F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5828
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5828;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F1C8) PPC_WEAK_FUNC(sub_8240F1C8);
PPC_FUNC_IMPL(__imp__sub_8240F1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5804
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5804;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F1D8) PPC_WEAK_FUNC(sub_8240F1D8);
PPC_FUNC_IMPL(__imp__sub_8240F1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5732
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5732;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F1E8) PPC_WEAK_FUNC(sub_8240F1E8);
PPC_FUNC_IMPL(__imp__sub_8240F1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5756
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5756;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F1F8) PPC_WEAK_FUNC(sub_8240F1F8);
PPC_FUNC_IMPL(__imp__sub_8240F1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5684
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5684;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F208) PPC_WEAK_FUNC(sub_8240F208);
PPC_FUNC_IMPL(__imp__sub_8240F208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5660
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5660;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F218) PPC_WEAK_FUNC(sub_8240F218);
PPC_FUNC_IMPL(__imp__sub_8240F218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5708
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5708;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F228) PPC_WEAK_FUNC(sub_8240F228);
PPC_FUNC_IMPL(__imp__sub_8240F228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5780
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5780;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F238) PPC_WEAK_FUNC(sub_8240F238);
PPC_FUNC_IMPL(__imp__sub_8240F238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5584
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5584;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F248) PPC_WEAK_FUNC(sub_8240F248);
PPC_FUNC_IMPL(__imp__sub_8240F248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5632
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5632;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F258) PPC_WEAK_FUNC(sub_8240F258);
PPC_FUNC_IMPL(__imp__sub_8240F258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5608
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5608;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F268) PPC_WEAK_FUNC(sub_8240F268);
PPC_FUNC_IMPL(__imp__sub_8240F268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5536
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5536;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F278) PPC_WEAK_FUNC(sub_8240F278);
PPC_FUNC_IMPL(__imp__sub_8240F278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5560
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5560;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F288) PPC_WEAK_FUNC(sub_8240F288);
PPC_FUNC_IMPL(__imp__sub_8240F288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240F290) PPC_WEAK_FUNC(sub_8240F290);
PPC_FUNC_IMPL(__imp__sub_8240F290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5500
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5500;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F2A0) PPC_WEAK_FUNC(sub_8240F2A0);
PPC_FUNC_IMPL(__imp__sub_8240F2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5452
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5452;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F2B0) PPC_WEAK_FUNC(sub_8240F2B0);
PPC_FUNC_IMPL(__imp__sub_8240F2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5476
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5476;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F2C0) PPC_WEAK_FUNC(sub_8240F2C0);
PPC_FUNC_IMPL(__imp__sub_8240F2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5380
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5380;
	// b 0x8216b5f0
	sub_8216B5F0(ctx, base);
	return;
}

alias(__imp__sub_8240F2D0) PPC_WEAK_FUNC(sub_8240F2D0);
PPC_FUNC_IMPL(__imp__sub_8240F2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5408
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5408;
	// b 0x8216a880
	sub_8216A880(ctx, base);
	return;
}

alias(__imp__sub_8240F2E0) PPC_WEAK_FUNC(sub_8240F2E0);
PPC_FUNC_IMPL(__imp__sub_8240F2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5296
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5296;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-24668
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -24668;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x821777e0
	sub_821777E0(&ctx);
	return;
}

alias(__imp__sub_8240F2F8) PPC_WEAK_FUNC(sub_8240F2F8);
PPC_FUNC_IMPL(__imp__sub_8240F2F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240F300) PPC_WEAK_FUNC(sub_8240F300);
PPC_FUNC_IMPL(__imp__sub_8240F300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5284
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5284;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F310) PPC_WEAK_FUNC(sub_8240F310);
PPC_FUNC_IMPL(__imp__sub_8240F310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5320
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5320;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F320) PPC_WEAK_FUNC(sub_8240F320);
PPC_FUNC_IMPL(__imp__sub_8240F320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5140
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5140;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F330) PPC_WEAK_FUNC(sub_8240F330);
PPC_FUNC_IMPL(__imp__sub_8240F330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5260
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5260;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F340) PPC_WEAK_FUNC(sub_8240F340);
PPC_FUNC_IMPL(__imp__sub_8240F340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5188
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5188;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F350) PPC_WEAK_FUNC(sub_8240F350);
PPC_FUNC_IMPL(__imp__sub_8240F350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5164
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5164;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F360) PPC_WEAK_FUNC(sub_8240F360);
PPC_FUNC_IMPL(__imp__sub_8240F360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5212
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5212;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F370) PPC_WEAK_FUNC(sub_8240F370);
PPC_FUNC_IMPL(__imp__sub_8240F370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5236
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5236;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F380) PPC_WEAK_FUNC(sub_8240F380);
PPC_FUNC_IMPL(__imp__sub_8240F380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5096
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5096;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F390) PPC_WEAK_FUNC(sub_8240F390);
PPC_FUNC_IMPL(__imp__sub_8240F390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5056
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5056;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F3A0) PPC_WEAK_FUNC(sub_8240F3A0);
PPC_FUNC_IMPL(__imp__sub_8240F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5032
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5032;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F3B0) PPC_WEAK_FUNC(sub_8240F3B0);
PPC_FUNC_IMPL(__imp__sub_8240F3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4992
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4992;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F3C0) PPC_WEAK_FUNC(sub_8240F3C0);
PPC_FUNC_IMPL(__imp__sub_8240F3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20684
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 20684;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F3D0) PPC_WEAK_FUNC(sub_8240F3D0);
PPC_FUNC_IMPL(__imp__sub_8240F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20712
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 20712;
	// b 0x8217d290
	sub_8217D290(ctx, base);
	return;
}

alias(__imp__sub_8240F3E0) PPC_WEAK_FUNC(sub_8240F3E0);
PPC_FUNC_IMPL(__imp__sub_8240F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31492
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 31492;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F3F0) PPC_WEAK_FUNC(sub_8240F3F0);
PPC_FUNC_IMPL(__imp__sub_8240F3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240F3F8) PPC_WEAK_FUNC(sub_8240F3F8);
PPC_FUNC_IMPL(__imp__sub_8240F3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240F400) PPC_WEAK_FUNC(sub_8240F400);
PPC_FUNC_IMPL(__imp__sub_8240F400) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31704
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31704;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f43c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F43C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F43C:
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

alias(__imp__sub_8240F450) PPC_WEAK_FUNC(sub_8240F450);
PPC_FUNC_IMPL(__imp__sub_8240F450) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31800
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31800;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f48c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F48C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F48C:
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

alias(__imp__sub_8240F4A0) PPC_WEAK_FUNC(sub_8240F4A0);
PPC_FUNC_IMPL(__imp__sub_8240F4A0) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31656
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31656;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f4dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F4DC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F4DC:
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

alias(__imp__sub_8240F4F0) PPC_WEAK_FUNC(sub_8240F4F0);
PPC_FUNC_IMPL(__imp__sub_8240F4F0) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31752
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31752;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f52c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F52C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F52C:
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

alias(__imp__sub_8240F540) PPC_WEAK_FUNC(sub_8240F540);
PPC_FUNC_IMPL(__imp__sub_8240F540) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31776
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31776;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f57c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F57C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F57C:
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

alias(__imp__sub_8240F590) PPC_WEAK_FUNC(sub_8240F590);
PPC_FUNC_IMPL(__imp__sub_8240F590) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31728
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31728;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f5cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F5CC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F5CC:
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

alias(__imp__sub_8240F5E0) PPC_WEAK_FUNC(sub_8240F5E0);
PPC_FUNC_IMPL(__imp__sub_8240F5E0) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31824
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31824;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f61c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F61C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F61C:
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

alias(__imp__sub_8240F630) PPC_WEAK_FUNC(sub_8240F630);
PPC_FUNC_IMPL(__imp__sub_8240F630) {
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
	// lis ctx_arrow(ctx)->r11,-31992
	ctx_arrow(ctx)->r11.s64 = -2096627712;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,31680
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 31680;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82183470
	sub_82183470(ctx, base);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240f66c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240F66C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8209cc20
	sub_8209CC20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_8240F66C:
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

alias(__imp__sub_8240F680) PPC_WEAK_FUNC(sub_8240F680);
PPC_FUNC_IMPL(__imp__sub_8240F680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-31860
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -31860;
	// b 0x823d22e0
	sub_823D22E0(ctx, base);
	return;
}

alias(__imp__sub_8240F690) PPC_WEAK_FUNC(sub_8240F690);
PPC_FUNC_IMPL(__imp__sub_8240F690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lis ctx_arrow(ctx)->r10,-32017
	ctx_arrow(ctx)->r10.s64 = -2098266112;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,532
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 532;
	// stw ctx_arrow(ctx)->r11,-15784(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + -15784);
	// blr 
	return;
}

alias(__imp__sub_8240F6A8) PPC_WEAK_FUNC(sub_8240F6A8);
PPC_FUNC_IMPL(__imp__sub_8240F6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lis ctx_arrow(ctx)->r10,-32017
	ctx_arrow(ctx)->r10.s64 = -2098266112;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,532
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 532;
	// stw ctx_arrow(ctx)->r11,-15752(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + -15752);
	// blr 
	return;
}

alias(__imp__sub_8240F6C0) PPC_WEAK_FUNC(sub_8240F6C0);
PPC_FUNC_IMPL(__imp__sub_8240F6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240F6C8) PPC_WEAK_FUNC(sub_8240F6C8);
PPC_FUNC_IMPL(__imp__sub_8240F6C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8240FF3C) PPC_WEAK_FUNC(sub_8240FF3C);
PPC_FUNC_IMPL(__imp__sub_8240FF3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_82410400) PPC_WEAK_FUNC(sub_82410400);
PPC_FUNC_IMPL(__imp__sub_82410400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = 8;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_8241042C:
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// bdnz 0x8241042c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8241042C;
	// li ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.s64 = 256;
loc_8241043C:
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2,26,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0x3C;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 4;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r7.u32);
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
	// bne 0x8241043c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8241043C;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 512, xer);
	// beq ctx_arrow(ctx)->r6,0x82410698
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82410698;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,511
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 511, xer);
	// beq ctx_arrow(ctx)->r6,0x824104cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_824104CC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r5,64
	ctx_arrow(ctx)->r5.s64 = 64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,15
	ctx_arrow(ctx)->r9.s64 = 15;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 140;
loc_824104A4:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r10.u64;
	// clrlwi. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x824104cc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_824104CC;
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// bne 0x824104a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_824104A4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x824104d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_824104D4;
loc_824104CC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8241069c
	goto loc_8241069C;
loc_824104D4:
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// li ctx_arrow(ctx)->r10,15
	ctx_arrow(ctx)->r10.s64 = 15;
loc_824104E0:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x824104e0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_824104E0;
	// lwz ctx_arrow(ctx)->r3,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.s64 = 8192;
loc_82410500:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-16
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -16;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,5
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s32 >> 5;
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28,4,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0xFFFFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82410534
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82410534;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r8.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
	// sthx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	PPC_STORE_U16(ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r7.u16);
loc_82410534:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 + -16;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,5
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32 >> 5;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82410568
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82410568;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r8.u32);
	// sthx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	PPC_STORE_U16(ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r7.u16);
loc_82410568:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82410500
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410500;
	// li ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.s64 = 2048;
	// li ctx_arrow(ctx)->r10,2048
	ctx_arrow(ctx)->r10.s64 = 2048;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,204
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 204;
	// li ctx_arrow(ctx)->r5,5
	ctx_arrow(ctx)->r5.s64 = 5;
loc_82410580:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x824105c0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_824105C0;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,31,1,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r8.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_824105A8:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -2;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,32768
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 | 32768;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r4.s32, xer);
	// sth ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	PPC_STORE_U16(ctx_arrow(ctx)->r9.u32 + 0, ctx_arrow(ctx)->r8.u16);
	// bgt ctx_arrow(ctx)->r6,0x824105a8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_824105A8;
loc_824105C0:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blt 0x82410600
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82410600;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r10.s64;
loc_824105E8:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -2;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -2;
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + 0);
	// sth ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	PPC_STORE_U16(ctx_arrow(ctx)->r7.u32 + 0, ctx_arrow(ctx)->r10.u16);
	// bge 0x824105e8
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_824105E8;
loc_82410600:
	// addic. ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,-1
	xer.ca = ctx_arrow(ctx)->r5.u32 > 0;
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,-4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + -4;
	// bne 0x82410580
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82410580;
	// li ctx_arrow(ctx)->r9,1024
	ctx_arrow(ctx)->r9.s64 = 1024;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x82410648
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410648;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,2048
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 2048;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1023
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 1023;
	ctx_arrow(ctx)->r9.s64 = 1023 - ctx_arrow(ctx)->r9.s64;
loc_82410630:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -2;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,32768
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64 | 32768;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// sth ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r8)
	PPC_STORE_U16(ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r7.u16);
	// bgt ctx_arrow(ctx)->r6,0x82410630
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410630;
loc_82410648:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82410698
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410698;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
loc_82410658:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li ctx_arrow(ctx)->r6,1024
	ctx_arrow(ctx)->r6.s64 = 1024;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// sraw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	temp.u32 = ctx_arrow(ctx)->r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx_arrow(ctx)->r6.s32 < 0) & (((ctx_arrow(ctx)->r6.s32 >> temp.u32) << temp.u32) != ctx_arrow(ctx)->r6.s32);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r6.s32 >> temp.u32;
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r7.s64;
loc_8241067C:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -2;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r7.s32, xer);
	// sth ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r11, 0);
	// bne ctx_arrow(ctx)->r6,0x8241067c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8241067C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x82410658
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410658;
loc_82410698:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_8241069C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
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

alias(__imp__sub_824106B8) PPC_WEAK_FUNC(sub_824106B8);
PPC_FUNC_IMPL(__imp__sub_824106B8) {
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
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r8.s64 = 16;
	// lwz ctx_arrow(ctx)->r5,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r5.u32, xer);
	// lhz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 16);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r6.u64;
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,32798
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64 | 32798;
	// bge ctx_arrow(ctx)->r6,0x82410990
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410990;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410990
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410990;
loc_82410708:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,10,22,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 10) & 0x3FF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 30;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r3.u32));
loc_82410718:
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt 0x8241073c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_8241073C;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r6.u64;
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r8.s64;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r6, 0);
	// b 0x82410774
	goto loc_82410774;
loc_8241073C:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,10,0,21
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 10) & 0xFFFFFC00;
loc_82410740:
	// cntlzw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r6.u32);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,27,31,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 27) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r3.u32));
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt 0x82410740
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82410740;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r6.s64;
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
loc_82410774:
	// mr. ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 4;
	// bge 0x824107b8
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_824107B8;
	// lwz ctx_arrow(ctx)->r5,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r5.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410a04
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410A04;
	// lwz ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r5.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410a04
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410A04;
	// neg ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.s64 = -ctx_arrow(ctx)->r6.s64;
	// lhz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r7.u32 + 0);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,16
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 16;
	// extsb ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r4.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r6, 0);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2;
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r9.u64;
loc_824107B8:
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-256
	xer.ca = ctx_arrow(ctx)->r10.u32 > 255;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -256;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt 0x82410858
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82410858;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
	// srawi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,4
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s32 >> 4;
	// oris ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6,32768
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64 | 2147483648;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// extsb ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r4, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 5, xer);
	// xori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 ^ 31;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// neg ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.s64 = -ctx_arrow(ctx)->r10.s64;
	// bgt ctx_arrow(ctx)->r6,0x82410874
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410874;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82410c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410C5C;
	// lbz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r11.u64;
	// stb ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// lbz ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1));
	// lbz ctx_arrow(ctx)->r6,2(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// lbz ctx_arrow(ctx)->r6,3(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,3(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 3));
	// lbz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4));
	// lbz ctx_arrow(ctx)->r6,5(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 5));
	// lbz ctx_arrow(ctx)->r6,6(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,6(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 6));
	// lbz ctx_arrow(ctx)->r10,7(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,7(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 7));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r7.s64 + 3;
	// lwz ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x8241094c
	goto loc_8241094C;
loc_82410858:
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,10,22,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 10) & 0x3FF;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 30;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1,0,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r3.u32));
	// b 0x82410718
	goto loc_82410718;
loc_82410874:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 15, xer);
	// bne ctx_arrow(ctx)->r6,0x824108a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_824108A4;
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 15;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,270
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 270, xer);
	// bne ctx_arrow(ctx)->r6,0x824108a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_824108A0;
	// lhz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,270
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 270, xer);
	// blt ctx_arrow(ctx)->r6,0x82410c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410C5C;
loc_824108A0:
	// stw ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
loc_824108A4:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,3
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r6.s64 + 3;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r5.u32, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r11.u64;
	// blt ctx_arrow(ctx)->r6,0x82410c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410C5C;
	// lwz ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410ad8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410AD8;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r7.s64;
	// b 0x8241091c
	goto loc_8241091C;
loc_824108D0:
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -8;
	// stb ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// lbz ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1));
	// lbz ctx_arrow(ctx)->r6,2(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// lbz ctx_arrow(ctx)->r6,3(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,3(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 3));
	// lbz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4));
	// lbz ctx_arrow(ctx)->r6,5(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 5));
	// lbz ctx_arrow(ctx)->r6,6(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,6(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 6));
	// lbz ctx_arrow(ctx)->r6,7(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// stb ctx_arrow(ctx)->r6,7(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 7));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_8241091C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 8, xer);
	// bgt ctx_arrow(ctx)->r6,0x824108d0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_824108D0;
loc_82410924:
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	xer.ca = ctx_arrow(ctx)->r7.u32 > 0;
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stb ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bne 0x82410924
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82410924;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410b84
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410B84;
loc_8241094C:
	// extsb. ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// bge 0x82410708
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_82410708;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410b8c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410B8C;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410b8c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410B8C;
	// neg ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.s64 = -ctx_arrow(ctx)->r5.s64;
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r7.u32 + 0);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r5.s64 + 16;
	// extsb ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2;
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r6, 0);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// b 0x82410708
	goto loc_82410708;
loc_82410990:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,10,22,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 10) & 0x3FF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 30;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r3.u32));
loc_824109A0:
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt 0x824109c4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_824109C4;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r6.u64;
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r8.s64;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// extsb. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r6, 0);
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// b 0x824109fc
	goto loc_824109FC;
loc_824109C4:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,10,0,21
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 10) & 0xFFFFFC00;
loc_824109C8:
	// cntlzw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r6.u32);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,27,31,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 27) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r3.u32));
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt 0x824109c8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_824109C8;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r6.s64;
	// extsb. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
loc_824109FC:
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 4;
	// bge 0x82410a34
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_82410A34;
loc_82410A04:
	// lwz ctx_arrow(ctx)->r6,40(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410c5c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410C5C;
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// lhz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r7.u32 + 0);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2;
	// neg ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.s64 = -ctx_arrow(ctx)->r8.s64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 16;
	// extsb ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r5, 0);
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r9.u64;
loc_82410A34:
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-256
	xer.ca = ctx_arrow(ctx)->r10.u32 > 255;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -256;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// blt 0x82410af4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82410AF4;
	// bge ctx_arrow(ctx)->r6,0x82410bc0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410BC0;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
	// srawi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,4
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s32 >> 4;
	// oris ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6,32768
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64 | 2147483648;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// extsb ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r4, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 15, xer);
	// xori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 ^ 31;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// neg ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.s64 = -ctx_arrow(ctx)->r10.s64;
	// bne ctx_arrow(ctx)->r6,0x82410ac0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410AC0;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410c5c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410C5C;
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 15;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,270
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 270, xer);
	// bne ctx_arrow(ctx)->r6,0x82410abc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410ABC;
	// lwz ctx_arrow(ctx)->r7,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r7.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410c5c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410C5C;
	// lhz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,270
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 270, xer);
	// blt ctx_arrow(ctx)->r6,0x82410c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410C5C;
loc_82410ABC:
	// stw ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
loc_82410AC0:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,3
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r6.s64 + 3;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r5.u32, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r11.u64;
	// blt ctx_arrow(ctx)->r6,0x82410c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410C5C;
loc_82410AD8:
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r7.s64;
	// ble ctx_arrow(ctx)->r6,0x82410b60
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410B60;
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 0);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r11.s64;
	// b 0x82410c28
	goto loc_82410C28;
loc_82410AF4:
	// bge ctx_arrow(ctx)->r6,0x82410c4c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410C4C;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,10,22,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 10) & 0x3FF;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 30;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1,0,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r3.u32));
	// b 0x824109a0
	goto loc_824109A0;
loc_82410B14:
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -8;
	// stb ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// lbz ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1));
	// lbz ctx_arrow(ctx)->r6,2(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// lbz ctx_arrow(ctx)->r6,3(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,3(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 3));
	// lbz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4));
	// lbz ctx_arrow(ctx)->r6,5(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 5));
	// lbz ctx_arrow(ctx)->r6,6(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,6(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 6));
	// lbz ctx_arrow(ctx)->r6,7(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// stb ctx_arrow(ctx)->r6,7(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 7));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_82410B60:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 8, xer);
	// bgt ctx_arrow(ctx)->r6,0x82410b14
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410B14;
loc_82410B68:
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	xer.ca = ctx_arrow(ctx)->r7.u32 > 0;
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stb ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bne 0x82410b68
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82410B68;
	// lwz ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
loc_82410B84:
	// extsb. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bge 0x82410990
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_82410990;
loc_82410B8C:
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x82410c5c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82410C5C;
	// extsb ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r8, 0);
	// lhz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r7.u32 + 0);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2;
	// neg ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.s64 = -ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// extsb ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r10, 0);
	// extsb ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r5, 0);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// b 0x82410990
	goto loc_82410990;
loc_82410BC0:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82410c4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410C4C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82410c4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410C4C;
	// stw ctx_arrow(ctx)->r30,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 52);
	// b 0x82410c4c
	goto loc_82410C4C;
loc_82410BDC:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -8;
	// stb ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// lbz ctx_arrow(ctx)->r8,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r8,1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1));
	// lbz ctx_arrow(ctx)->r8,2(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r8,2(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 2));
	// lbz ctx_arrow(ctx)->r8,3(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r8,3(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 3));
	// lbz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4));
	// lbz ctx_arrow(ctx)->r8,5(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r8,5(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 5));
	// lbz ctx_arrow(ctx)->r8,6(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r8,6(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 6));
	// lbz ctx_arrow(ctx)->r8,7(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// stb ctx_arrow(ctx)->r8,7(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 7));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_82410C28:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 8, xer);
	// bgt ctx_arrow(ctx)->r6,0x82410bdc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410BDC;
loc_82410C30:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stb ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bne 0x82410c30
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82410C30;
	// lwz ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
loc_82410C4C:
	// stw ctx_arrow(ctx)->r7,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// stw ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// b 0x82410c64
	goto loc_82410C64;
loc_82410C5C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
loc_82410C64:
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82410C70) PPC_WEAK_FUNC(sub_82410C70);
PPC_FUNC_IMPL(__imp__sub_82410C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// ld ctx_arrow(ctx)->r12,-4096(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U64(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r1,-4528(ctx_arrow(ctx)->r1)
	ea = -4528 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,336
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 336;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r5.s32, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ble ctx_arrow(ctx)->r6,0x82410ca8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410CA8;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
loc_82410CA8:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r5.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x82410dc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82410DC8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82410dc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82410DC8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r8.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410DC0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410DC0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,261
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 261, xer);
	// ble ctx_arrow(ctx)->r6,0x82410dc0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410DC0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,261
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 261, xer);
	// blt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410DC0;
	// lis ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 65536;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410DC0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82410DC0;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r4.s64;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,264
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 264, xer);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r8,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// stw ctx_arrow(ctx)->r9,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// stw ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// ble ctx_arrow(ctx)->r6,0x82410d34
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410D34;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-264
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -264;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_82410D34:
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r3.s64;
	// stw ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,232
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 232, xer);
	// ble ctx_arrow(ctx)->r6,0x82410d4c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82410D4C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-232
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -232;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
loc_82410D4C:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,60
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 60;
	// bl 0x82410400
	sub_82410400(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x82410dc0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82410DC0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,256
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 256;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// bl 0x824106b8
	sub_824106B8(&ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82410DC0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410DC0;
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82410dc0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82410DC0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82410dc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410DC8;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82410dc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82410DC8;
loc_82410DC0:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// b 0x82410dcc
	goto loc_82410DCC;
loc_82410DC8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_82410DCC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,4528
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 4528;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82410DD8) PPC_WEAK_FUNC(sub_82410DD8);
PPC_FUNC_IMPL(__imp__sub_82410DD8) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

