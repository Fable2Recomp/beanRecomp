#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823FE618) PPC_WEAK_FUNC(sub_823FE618);
PPC_FUNC_IMPL(__imp__sub_823FE618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r18{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz ctx_arrow(ctx)->r18,-1044(0)
	ctx_arrow(ctx)->r18.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r16,29808(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r16.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f4e20
	sub_823F4E20(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe6a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE6A0;
	// bl 0x823f4e20
	sub_823F4E20(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe6a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE6A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe674
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE674;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823fe438
	sub_823FE438(ctx, base);
	// b 0x823fe6a4
	goto loc_823FE6A4;
loc_823FE674:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f4f98
	sub_823F4F98(ctx, base);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823fe3b8
	sub_823FE3B8(ctx, base);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// bl 0x823fe6dc
	sub_823FE6DC(ctx, base);
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823fe6a4
	goto loc_823FE6A4;
loc_823FE6A0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823FE6A4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
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

alias(__imp__sub_823FE620) PPC_WEAK_FUNC(sub_823FE620);
PPC_FUNC_IMPL(__imp__sub_823FE620) {
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
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f4e20
	sub_823F4E20(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe6a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE6A0;
	// bl 0x823f4e20
	sub_823F4E20(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe6a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE6A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe674
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE674;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823fe438
	sub_823FE438(ctx, base);
	// b 0x823fe6a4
	goto loc_823FE6A4;
loc_823FE674:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f4f98
	sub_823F4F98(ctx, base);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823fe3b8
	sub_823FE3B8(ctx, base);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// bl 0x823fe6dc
	sub_823FE6DC(ctx, base);
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823fe6a4
	goto loc_823FE6A4;
loc_823FE6A0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823FE6A4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
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

alias(__imp__sub_823FE6BC) PPC_WEAK_FUNC(sub_823FE6BC);
PPC_FUNC_IMPL(__imp__sub_823FE6BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -112;
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -24, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823fe6f4
	goto loc_823FE6F4;
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -112;
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -24, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
loc_823FE6F4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f5058
	sub_823F5058(ctx, base);
	// lwz ctx_arrow(ctx)->r1,0(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r1.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r12,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823FE6DC) PPC_WEAK_FUNC(sub_823FE6DC);
PPC_FUNC_IMPL(__imp__sub_823FE6DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -112;
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -24, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f5058
	sub_823F5058(ctx, base);
	// lwz ctx_arrow(ctx)->r1,0(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r1.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r12,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823FE718) PPC_WEAK_FUNC(sub_823FE718);
PPC_FUNC_IMPL(__imp__sub_823FE718) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823fe438
	sub_823FE438(ctx, base);
	return;
}

alias(__imp__sub_823FE720) PPC_WEAK_FUNC(sub_823FE720);
PPC_FUNC_IMPL(__imp__sub_823FE720) {
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe764
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE764;
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,22
	ctx_arrow(ctx)->r10.s64 = 22;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// b 0x823fe768
	goto loc_823FE768;
loc_823FE764:
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_823FE768:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823FE778) PPC_WEAK_FUNC(sub_823FE778);
PPC_FUNC_IMPL(__imp__sub_823FE778) {
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
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe7a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE7A4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe7a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE7A4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe888
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE888;
	// b 0x823fe884
	goto loc_823FE884;
loc_823FE7A4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe7b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE7B4;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_823FE7B4:
	// lis ctx_arrow(ctx)->r10,32767
	ctx_arrow(ctx)->r10.s64 = 2147418112;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823fe7f4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823FE7F4;
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,22
	ctx_arrow(ctx)->r10.s64 = 22;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// li ctx_arrow(ctx)->r3,22
	ctx_arrow(ctx)->r3.s64 = 22;
	// b 0x823fe88c
	goto loc_823FE88C;
loc_823FE7F4:
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u32 & 0xFFFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,255
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 255, xer);
	// ble ctx_arrow(ctx)->r6,0x823fe834
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823FE834;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe81c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE81C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe81c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE81C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
loc_823FE81C:
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// li ctx_arrow(ctx)->r11,42
	ctx_arrow(ctx)->r11.s64 = 42;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3de0
	sub_823F3DE0(&ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823fe88c
	goto loc_823FE88C;
loc_823FE834:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe878
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE878;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe874
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE874;
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,34
	ctx_arrow(ctx)->r10.s64 = 34;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// li ctx_arrow(ctx)->r3,34
	ctx_arrow(ctx)->r3.s64 = 34;
	// b 0x823fe88c
	goto loc_823FE88C;
loc_823FE874:
	// stb ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
loc_823FE878:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe888
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE888;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_823FE884:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_823FE888:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823FE88C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823FE8A0) PPC_WEAK_FUNC(sub_823FE8A0);
PPC_FUNC_IMPL(__imp__sub_823FE8A0) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// b 0x823fe778
	sub_823FE778(ctx, base);
	return;
}

alias(__imp__sub_823FE8A8) PPC_WEAK_FUNC(sub_823FE8A8);
PPC_FUNC_IMPL(__imp__sub_823FE8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1,23,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0x1FE;
	// lwz ctx_arrow(ctx)->r11,-19456(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0,0,16
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

alias(__imp__sub_823FE8C8) PPC_WEAK_FUNC(sub_823FE8C8);
PPC_FUNC_IMPL(__imp__sub_823FE8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823fe950
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823FE950;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe950
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE950;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x823fe958
	goto loc_823FE958;
loc_823FE90C:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// lbz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// bl 0x823f5218
	sub_823F5218(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe950
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE950;
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,42
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 42, xer);
	// bne ctx_arrow(ctx)->r6,0x823fe958
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE958;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r3,63
	ctx_arrow(ctx)->r3.s64 = 63;
	// bl 0x823f5218
	sub_823F5218(ctx, base);
loc_823FE950:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x823fe90c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823FE90C;
loc_823FE958:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823FE960) PPC_WEAK_FUNC(sub_823FE960);
PPC_FUNC_IMPL(__imp__sub_823FE960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-1328(ctx_arrow(ctx)->r1)
	ea = -1328 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r27,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r27,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, 0, xer);
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x823fe9cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FE9CC;
loc_823FE99C:
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,22
	ctx_arrow(ctx)->r10.s64 = 22;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// b 0x823ff4e4
	goto loc_823FF4E4;
loc_823FE9CC:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823fea98
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823FEA98;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-15840
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -15840;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-18648
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -18648;
	// beq ctx_arrow(ctx)->r6,0x823fea30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEA30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -2, xer);
	// beq ctx_arrow(ctx)->r6,0x823fea30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEA30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,5
	xer.ca = (ctx_arrow(ctx)->r3.s32 < 0) & ((ctx_arrow(ctx)->r3.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s32 >> 5;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,6,21,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 6) & 0x7C0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823fea34
	goto loc_823FEA34;
loc_823FEA30:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
loc_823FEA34:
	// lbz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823fe99c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823FE99C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823fea88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEA88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -2, xer);
	// beq ctx_arrow(ctx)->r6,0x823fea88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEA88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,5
	xer.ca = (ctx_arrow(ctx)->r3.s32 < 0) & ((ctx_arrow(ctx)->r3.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s32 >> 5;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823fe720
	sub_823FE720(ctx, base);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,6,21,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 6) & 0x7C0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823fea8c
	goto loc_823FEA8C;
loc_823FEA88:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
loc_823FEA8C:
	// lbz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823fe99c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823FE99C;
loc_823FEA98:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r19.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823fe99c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE99C;
	// bl 0x823f4e20
	sub_823F4E20(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff4b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF4B0;
	// bl 0x823f4e20
	sub_823F4E20(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff4b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF4B0;
	// lbz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r27,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// extsb. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823ff4a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823FF4A8;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lwz ctx_arrow(ctx)->r20,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r20.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r14,-32249
	ctx_arrow(ctx)->r14.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,-19456
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + -19456;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lis ctx_arrow(ctx)->r17,-32249
	ctx_arrow(ctx)->r17.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11,-20552
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r11.s64 + -20552;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,12088
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r11.s64 + 12088;
loc_823FEB0C:
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823ff494
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823FF494;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 32, xer);
	// blt ctx_arrow(ctx)->r6,0x823feb38
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823FEB38;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,120
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 120, xer);
	// bgt ctx_arrow(ctx)->r6,0x823feb38
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823FEB38;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r18.u64;
	// lbz ctx_arrow(ctx)->r11,-32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// b 0x823feb3c
	goto loc_823FEB3C;
loc_823FEB38:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823FEB3C:
	// lwz ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 9;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28,4,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 8, xer);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823fe99c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FE99C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 7, xer);
	// bgt ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823FF480;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lis ctx_arrow(ctx)->r12,-32249
	ctx_arrow(ctx)->r12.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,12296
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 12296;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r12.u32 + ctx_arrow(ctx)->r0.u32);
	// lis ctx_arrow(ctx)->r12,-32192
	ctx_arrow(ctx)->r12.s64 = -2109734912;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-5232
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -5232;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823FED5C;
	case 1:
		goto loc_823FEB90;
	case 2:
		goto loc_823FEBB0;
	case 3:
		goto loc_823FEC00;
	case 4:
		goto loc_823FEC4C;
	case 5:
		goto loc_823FEC54;
	case 6:
		goto loc_823FEC8C;
	case 7:
		goto loc_823FEDAC;
	default:
		__builtin_unreachable();
	}
loc_823FEB90:
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// li ctx_arrow(ctx)->r25,-1
	ctx_arrow(ctx)->r25.s64 = -1;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r27,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEBB0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x823febf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEBF8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,35
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 35, xer);
	// beq ctx_arrow(ctx)->r6,0x823febf0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEBF0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,43
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 43, xer);
	// beq ctx_arrow(ctx)->r6,0x823febe8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEBE8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,45
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 45, xer);
	// beq ctx_arrow(ctx)->r6,0x823febe0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FEBE0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,48
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 48, xer);
	// bne ctx_arrow(ctx)->r6,0x823ff480
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FF480;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,8
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 8;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEBE0:
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 4;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEBE8:
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 1;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEBF0:
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,128
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 128;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEBF8:
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 2;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEC00:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,42
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 42, xer);
	// bne ctx_arrow(ctx)->r6,0x823fec34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FEC34;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r26.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// bge 0x823ff480
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823FF480;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 4;
	// neg ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = -ctx_arrow(ctx)->r11.s64;
	// b 0x823fec44
	goto loc_823FEC44;
loc_823FEC34:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 10;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -48;
loc_823FEC44:
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEC4C:
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEC54:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,42
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 42, xer);
	// bne ctx_arrow(ctx)->r6,0x823fec7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FEC7C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r26.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// lwz ctx_arrow(ctx)->r25,-4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// bge 0x823ff480
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823FF480;
	// li ctx_arrow(ctx)->r25,-1
	ctx_arrow(ctx)->r25.s64 = -1;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEC7C:
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 * 10;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,-48
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + -48;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEC8C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,73
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 73, xer);
	// beq ctx_arrow(ctx)->r6,0x823fecdc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FECDC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,104
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 104, xer);
	// beq ctx_arrow(ctx)->r6,0x823fecd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FECD4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,108
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 108, xer);
	// beq ctx_arrow(ctx)->r6,0x823fecb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FECB4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,119
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 119, xer);
	// bne ctx_arrow(ctx)->r6,0x823ff480
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FF480;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,2048
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 2048;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FECB4:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,108
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 108, xer);
	// bne ctx_arrow(ctx)->r6,0x823feccc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FECCC;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 1;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,4096
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 4096;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FECCC:
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,16
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 16;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FECD4:
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,32
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 32;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FECDC:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,54
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 54, xer);
	// bne ctx_arrow(ctx)->r6,0x823fed04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FED04;
	// lbz ctx_arrow(ctx)->r10,1(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,52
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 52, xer);
	// bne ctx_arrow(ctx)->r6,0x823fed04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FED04;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,2
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 2;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,32768
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 32768;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FED04:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,51
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 51, xer);
	// bne ctx_arrow(ctx)->r6,0x823fed24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FED24;
	// lbz ctx_arrow(ctx)->r10,1(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,50
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 50, xer);
	// bne ctx_arrow(ctx)->r6,0x823fed24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823FED24;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,2
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 2;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,0,17,15
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x823ff480
	goto loc_823FF480;
loc_823FED24:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,100
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 100, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF480;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,105
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 105, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF480;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,111
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 111, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF480;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,117
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 117, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF480;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,120
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 120, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF480;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,88
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 88, xer);
	// beq ctx_arrow(ctx)->r6,0x823ff480
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823FF480;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
loc_823FED5C:
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r22.u64;
	// li ctx_arrow(ctx)->r16,0
	ctx_arrow(ctx)->r16.s64 = 0;
	// bl 0x823fe8a8
	sub_823FE8A8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823fed94
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823FED94;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823f5218
	sub_823F5218(ctx, base);
	// lbz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq 0x823fe99c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823FE99C;
loc_823FED94:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823f5218
	sub_823F5218(ctx, base);
	// lwz ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823ff480
	goto loc_823FF480;
loc_823FEDAC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,-65
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + -65;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,55
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 55, xer);
	// bgt ctx_arrow(ctx)->r6,0x823ff2ac
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823FF2AC;
	// lis ctx_arrow(ctx)->r12,-32249
	ctx_arrow(ctx)->r12.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,12184
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 12184;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r12.u32 + ctx_arrow(ctx)->r0.u32);
	// lis ctx_arrow(ctx)->r12,-32192
	ctx_arrow(ctx)->r12.s64 = -2109734912;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-4640
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -4640;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823FEFBC;
	case 1:
		goto loc_823FF2AC;
	case 2:
		goto loc_823FEDE0;
	case 3:
		goto loc_823FF2AC;
	case 4:
		goto loc_823FEFBC;
	case 5:
		goto loc_823FF2AC;
	case 6:
		goto loc_823FEFBC;
	case 7:
		goto loc_823FF2AC;
	case 8:
		goto loc_823FF2AC;
	case 9:
		goto loc_823FF2AC;
	case 10:
		goto loc_823FF2AC;
	case 11:
		goto loc_823FF2AC;
	case 12:
		goto loc_823FF2AC;
	case 13:
		goto loc_823FF2AC;
	case 14:
		goto loc_823FF2AC;
	case 15:
		goto loc_823FF2AC;
	case 16:
		goto loc_823FF2AC;
	case 17:
		goto loc_823FF2AC;
	case 18:
		goto loc_823FEEC8;
	case 19:
		goto loc_823FF2AC;
	case 20:
		goto loc_823FF2AC;
	case 21:
		goto loc_823FF2AC;
	case 22:
		goto loc_823FF2AC;
	case 23:
		goto loc_823FF0FC;
	case 24:
		goto loc_823FF2AC;
	case 25:
		goto loc_823FEE4C;
	case 26:
		goto loc_823FF2AC;
	case 27:
		goto loc_823FF2AC;
	case 28:
		goto loc_823FF2AC;
	case 29:
		goto loc_823FF2AC;
	case 30:
		goto loc_823FF2AC;
	case 31:
		goto loc_823FF2AC;
	case 32:
		goto loc_823FEFC8;
	case 33:
		goto loc_823FF2AC;
	case 34:
		goto loc_823FEDF0;
	case 35:
		goto loc_823FF0EC;
	case 36:
		goto loc_823FEFC8;
	case 37:
		goto loc_823FEFC8;
	case 38:
		goto loc_823FEFC8;
	case 39:
		goto loc_823FF2AC;
	case 40:
		goto loc_823FF0EC;
	case 41:
		goto loc_823FF2AC;
	case 42:
		goto loc_823FF2AC;
	case 43:
		goto loc_823FF2AC;
	case 44:
		goto loc_823FF2AC;
	case 45:
		goto loc_823FEF80;
	case 46:
		goto loc_823FF134;
	case 47:
		goto loc_823FF0F8;
	case 48:
		goto loc_823FF2AC;
	case 49:
		goto loc_823FF2AC;
	case 50:
		goto loc_823FEED8;
	case 51:
		goto loc_823FF2AC;
	case 52:
		goto loc_823FF0F0;
	case 53:
		goto loc_823FF2AC;
	case 54:
		goto loc_823FF2AC;
	case 55:
		goto loc_823FF104;
	default:
		__builtin_unreachable();
	}
loc_823FEDE0:
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,2096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & 2096;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823fedf0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823FEDF0;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,2048
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 2048;
loc_823FEDF0:
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,2064
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & 2064;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,7
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r26.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// beq 0x823fee30
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823FEE30;
	// li ctx_arrow(ctx)->r5,512
	ctx_arrow(ctx)->r5.s64 = 512;
	// lhz ctx_arrow(ctx)->r6,-2(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r26.u32 + -2);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// bl 0x823fe8a0
	sub_823FE8A0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823fee40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823FEE40;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// b 0x823fee40
	goto loc_823FEE40;
loc_823FEE30:
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 144, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

