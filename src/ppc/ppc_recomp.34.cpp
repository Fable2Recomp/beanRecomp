#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82395650) PPC_WEAK_FUNC(sub_82395650);
PPC_FUNC_IMPL(__imp__sub_82395650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r9,29(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823956a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823956A0;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82395668:
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r9.s32, xer);
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// blt ctx_arrow(ctx)->r6,0x8239567c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8239567C;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_8239567C:
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x82395690
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82395690;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82395694
	goto loc_82395694;
loc_82395690:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82395694:
	// lbz ctx_arrow(ctx)->r9,29(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82395668
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82395668;
loc_823956A0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823956A8) PPC_WEAK_FUNC(sub_823956A8);
PPC_FUNC_IMPL(__imp__sub_823956A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r9,49(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82395718
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82395718;
	// lbz ctx_arrow(ctx)->r8,2(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
loc_823956C0:
	// lbz ctx_arrow(ctx)->r9,14(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823956d4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823956D4;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// b 0x823956f4
	goto loc_823956F4;
loc_823956D4:
	// ble ctx_arrow(ctx)->r6,0x823956e0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823956E0;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// b 0x823956f4
	goto loc_823956F4;
loc_823956E0:
	// lhz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 12);
	// lhz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r7.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r4.u32 + 0);
	// subfc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	xer.ca = ctx_arrow(ctx)->r7.u32 >= ctx_arrow(ctx)->r9.u32;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r7.s64 - ctx_arrow(ctx)->r9.s64;
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
loc_823956F4:
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x82395708
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82395708;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8239570c
	goto loc_8239570C;
loc_82395708:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8239570C:
	// lbz ctx_arrow(ctx)->r9,49(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823956c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823956C0;
loc_82395718:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_82395720) PPC_WEAK_FUNC(sub_82395720);
PPC_FUNC_IMPL(__imp__sub_82395720) {
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
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// li ctx_arrow(ctx)->r5,167
	ctx_arrow(ctx)->r5.s64 = 167;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,24824
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 24824;
	// li ctx_arrow(ctx)->r3,52
	ctx_arrow(ctx)->r3.s64 = 52;
	// bl 0x8238eac8
	sub_8238EAC8(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u8);
	// stb ctx_arrow(ctx)->r11,49(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 49, base.u8);
	return;
}

