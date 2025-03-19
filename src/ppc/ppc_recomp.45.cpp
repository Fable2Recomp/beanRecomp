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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823edef0
	sub_823EDEF0(&ctx);
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

alias(__imp__sub_8240E428) PPC_WEAK_FUNC(sub_8240E428);
PPC_FUNC_IMPL(__imp__sub_8240E428) {
	PPC_FUNC_PROLOGUE();
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -256, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,516
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 516;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -64, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,128
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 128;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823b1750
	sub_823B1750(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-31192(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -31192, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + -31180, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r11,-31184(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -31184, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stfs f0,-20428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -20428, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20420
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20420;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// stfs f0,-21848(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -21848, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20412
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20412;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,-21840(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -21840, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21832
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21832;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfs f13,-21852(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,-20404(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -20404, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21824
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21824;
	// stfs f0,4(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 25988, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8240eff8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8240EFF8;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx.u8)->r1,4528
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

