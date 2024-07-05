// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAS.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VRAS__Syms.h"
#include "VRAS___024root.h"

VL_INLINE_OPT void VRAS___024root___sequent__TOP__8(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag;
    vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value;
    ++(vlSymsp->__Vcoverage[5202]);
    ++(vlSymsp->__Vcoverage[5386]);
    ++(vlSymsp->__Vcoverage[8680]);
    if (vlSelf->RAS_top__DOT__io_s2_fire_3) {
        ++(vlSymsp->__Vcoverage[5198]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s2_fire_1)))) {
        ++(vlSymsp->__Vcoverage[5195]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s1_fire_3)))) {
        ++(vlSymsp->__Vcoverage[5191]);
    }
    if (vlSelf->RAS_top__DOT__io_s1_fire_3) {
        ++(vlSymsp->__Vcoverage[5190]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s1_fire_2)))) {
        ++(vlSymsp->__Vcoverage[5189]);
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_1) {
        ++(vlSymsp->__Vcoverage[5194]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s2_fire_0)))) {
        ++(vlSymsp->__Vcoverage[5193]);
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_0) {
        ++(vlSymsp->__Vcoverage[5192]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s2_fire_3)))) {
        ++(vlSymsp->__Vcoverage[5199]);
    }
    if (vlSelf->RAS_top__DOT__io_s1_fire_0) {
        ++(vlSymsp->__Vcoverage[5184]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s1_fire_0)))) {
        ++(vlSymsp->__Vcoverage[5185]);
    }
    if (vlSelf->RAS_top__DOT__io_s1_fire_1) {
        ++(vlSymsp->__Vcoverage[5186]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s1_fire_1)))) {
        ++(vlSymsp->__Vcoverage[5187]);
    }
    if (vlSelf->RAS_top__DOT__io_s1_fire_2) {
        ++(vlSymsp->__Vcoverage[5188]);
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        ++(vlSymsp->__Vcoverage[5200]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_redirect_valid)))) {
        ++(vlSymsp->__Vcoverage[5201]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s2_fire_2)))) {
        ++(vlSymsp->__Vcoverage[5197]);
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        ++(vlSymsp->__Vcoverage[5196]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s2_fire_2)))) {
        ++(vlSymsp->__Vcoverage[8679]);
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        ++(vlSymsp->__Vcoverage[8678]);
    }
    if (vlSelf->RAS_top__DOT__RAS__DOT__REG_1) {
        ++(vlSymsp->__Vcoverage[5182]);
    }
    if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__REG_1)))) {
        ++(vlSymsp->__Vcoverage[5183]);
        if (vlSelf->RAS_top__DOT__io_s0_fire_3) {
            ++(vlSymsp->__Vcoverage[5180]);
        }
        if (vlSelf->RAS_top__DOT__io_s0_fire_2) {
            ++(vlSymsp->__Vcoverage[5178]);
        }
        if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s0_fire_1)))) {
            ++(vlSymsp->__Vcoverage[5177]);
        }
        if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s0_fire_0)))) {
            ++(vlSymsp->__Vcoverage[5175]);
        }
        if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s0_fire_2)))) {
            ++(vlSymsp->__Vcoverage[5179]);
        }
        if (vlSelf->RAS_top__DOT__io_s0_fire_0) {
            ++(vlSymsp->__Vcoverage[5174]);
        }
        if (vlSelf->RAS_top__DOT__io_s0_fire_1) {
            ++(vlSymsp->__Vcoverage[5176]);
        }
        if ((1U & (~ (IData)(vlSelf->RAS_top__DOT__io_s0_fire_3)))) {
            ++(vlSymsp->__Vcoverage[5181]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
                  | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))))) {
        ++(vlSymsp->__Vcoverage[8677]);
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        ++(vlSymsp->__Vcoverage[8676]);
        ++(vlSymsp->__Vcoverage[8674]);
    }
    if ((1U & (~ ((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
                  | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))))) {
        ++(vlSymsp->__Vcoverage[8675]);
    }
    if ((1U & (~ ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
                  | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))))) {
        ++(vlSymsp->__Vcoverage[8671]);
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        ++(vlSymsp->__Vcoverage[8670]);
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall))) {
        ++(vlSymsp->__Vcoverage[8672]);
    }
    if ((1U & (~ ((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
                  | (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall))))) {
        ++(vlSymsp->__Vcoverage[8673]);
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRet 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_pd_isRet;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_popped_in_s2 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_pop;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush_REG 
        = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4;
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_flag 
            = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4)
                ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_flag)
                : (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        if (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4) {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_flag 
                = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_flag;
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value 
                = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value;
        } else {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_flag 
                = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag;
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value 
                = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value;
        }
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRVC 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_pd_isRVC;
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_pc;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_pushed_in_s2 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall))) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_0) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_1) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_3) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2;
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isCall 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_pd_isCall;
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rlevel 
            = vlSelf->RAS_top__DOT__io_redirect_bits_level;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value 
            = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4)
                ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value)
                : (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value));
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag;
        vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value;
        vlSelf->RAS_top__DOT__RAS__DOT__s3_top = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRet) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pd_isRet))) {
        ++(vlSymsp->__Vcoverage[5149]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pd_isRet 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRet;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_popped_in_s2) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_popped_in_s2))) {
        ++(vlSymsp->__Vcoverage[5076]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_popped_in_s2 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_popped_in_s2;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush_REG) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realPush_REG))) {
        ++(vlSymsp->__Vcoverage[8306]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realPush_REG 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush_REG;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8143]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8144]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8145]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8146]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8147]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8148]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8149]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8150]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_flag))) {
        ++(vlSymsp->__Vcoverage[8151]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_flag;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_flag))) {
        ++(vlSymsp->__Vcoverage[8300]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[8301]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[8302]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[8303]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[8304]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)))) {
        ++(vlSymsp->__Vcoverage[8305]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_next_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRVC) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pd_isRVC))) {
        ++(vlSymsp->__Vcoverage[5147]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pd_isRVC 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRVC;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc)))) {
        ++(vlSymsp->__Vcoverage[5106]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5107]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5108]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5109]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5110]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5111]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5112]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5113]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5114]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5115]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5116]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5117]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5118]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5119]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5120]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5121]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5122]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5123]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5124]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5125]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5126]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5127]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5128]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5129]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5130]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5131]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5132]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5133]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5134]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5135]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5136]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5137]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5138]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5139]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5140]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5141]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5142]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5143]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5144]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5145]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[5146]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
        = (0x1ffffffffffULL & (vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pc 
                               + (QData)((IData)(((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRVC)
                                                   ? 2U
                                                   : 4U)))));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pushed_in_s2) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pushed_in_s2))) {
        ++(vlSymsp->__Vcoverage[5075]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pushed_in_s2 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_pushed_in_s2;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr)))) {
        ++(vlSymsp->__Vcoverage[8205]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[8206]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[8207]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[8208]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[8209]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8210]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8211]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[8212]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[8213]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[8214]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[8215]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[8216]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[8217]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[8218]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[8219]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[8220]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[8221]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[8222]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[8223]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[8224]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[8225]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[8226]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[8227]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[8228]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[8229]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[8230]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[8231]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[8232]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[8233]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[8234]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[8235]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[8236]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[8237]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[8238]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[8239]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[8240]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[8241]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[8242]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[8243]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[8244]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[8245]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0)))) {
        ++(vlSymsp->__Vcoverage[4825]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4826]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4827]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4828]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4829]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4830]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4831]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4832]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4833]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4834]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4835]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4836]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4838]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4839]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4840]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4841]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4842]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4843]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4844]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4845]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4846]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4847]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4848]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4849]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4850]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4851]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4852]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4853]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4854]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4855]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4856]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4857]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4858]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4859]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4860]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4861]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4862]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4863]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4864]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s3_pc_0 = vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_0;
    if (vlSelf->RAS_top__DOT__io_s1_fire_0) {
        vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
            = vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1)))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s3_pc_1 = vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_1;
    if (vlSelf->RAS_top__DOT__io_s1_fire_1) {
        vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
            = vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3)))) {
        ++(vlSymsp->__Vcoverage[4948]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4949]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4950]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4951]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4952]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4953]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4954]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4955]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4956]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4957]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4958]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4959]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4960]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4961]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4962]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4963]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4979]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4980]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4981]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s3_pc_3 = vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_3;
    if (vlSelf->RAS_top__DOT__io_s1_fire_3) {
        vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
            = vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2)))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4934]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4935]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4936]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4937]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4938]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4941]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4942]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4943]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4944]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4945]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4946]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4947]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s3_pc_2 = vlSelf->RAS_top__DOT__RAS__DOT__s3_pc_dup_2;
    if (vlSelf->RAS_top__DOT__io_s1_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
            = vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isCall) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pd_isCall))) {
        ++(vlSymsp->__Vcoverage[5148]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_pd_isCall 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isCall;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rlevel) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rlevel))) {
        ++(vlSymsp->__Vcoverage[5105]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rlevel 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rlevel;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[8295]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[8296]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[8297]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[8298]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)))) {
        ++(vlSymsp->__Vcoverage[8299]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_next_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_top) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top)))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_top)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_top) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_top 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_top;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr)))) {
        ++(vlSymsp->__Vcoverage[5481]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5482]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5483]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5484]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5485]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5486]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5487]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5488]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5489]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5490]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5491]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5511]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5512]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5513]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5514]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5515]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5516]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5517]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5518]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5519]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5520]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[5521]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_callAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0)))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s2_pc_0 = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_0;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1)))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s2_pc_1 = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_1;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3)))) {
        ++(vlSymsp->__Vcoverage[4784]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4785]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4786]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4787]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4788]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4789]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4790]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4791]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4792]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4793]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4794]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4795]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4796]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4797]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4798]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4799]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4800]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4801]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4802]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4803]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4804]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4805]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4806]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4807]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4808]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4809]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4810]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4811]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4812]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4813]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4814]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4815]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4816]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4817]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4818]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4819]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4820]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4821]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4822]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4823]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4824]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s2_pc_3 = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_3;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2)))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4763]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4764]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4765]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4766]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4767]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4768]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4770]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4771]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4772]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4773]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4774]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4775]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4776]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4777]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4778]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4779]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4780]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4781]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4782]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4783]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__io_out_s2_pc_2 = vlSelf->RAS_top__DOT__RAS__DOT__s2_pc_dup_2;
    if (vlSelf->RAS_top__DOT__RAS__DOT__REG_1) {
        vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
            = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4;
        vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
            = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4;
        vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
            = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4;
        vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
            = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4;
    } else {
        if (vlSelf->RAS_top__DOT__io_s0_fire_0) {
            vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                = vlSelf->RAS_top__DOT__io_in_bits_s0_pc_0;
        }
        if (vlSelf->RAS_top__DOT__io_s0_fire_1) {
            vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                = vlSelf->RAS_top__DOT__io_in_bits_s0_pc_1;
        }
        if (vlSelf->RAS_top__DOT__io_s0_fire_2) {
            vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                = vlSelf->RAS_top__DOT__io_in_bits_s0_pc_2;
        }
        if (vlSelf->RAS_top__DOT__io_s0_fire_3) {
            vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                = vlSelf->RAS_top__DOT__io_in_bits_s0_pc_3;
        }
    }
    vlSelf->RAS_top__DOT__RAS__DOT__REG_1 = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__REG) 
                                             & (~ (IData)(vlSelf->RAS_top__DOT__reset)));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0)))) {
        ++(vlSymsp->__Vcoverage[4497]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4498]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4499]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4500]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4501]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4502]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4503]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4504]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4505]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4506]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4507]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4508]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4509]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4510]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4511]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4512]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4513]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4514]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4515]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4516]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4517]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4518]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4519]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4520]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4521]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4522]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4523]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4524]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4525]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4526]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4527]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4528]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4529]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4530]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4531]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4532]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4533]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4534]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4535]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4536]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4537]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1)))) {
        ++(vlSymsp->__Vcoverage[4538]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4539]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4540]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4541]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4542]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4543]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4544]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4545]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4546]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4547]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4548]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4549]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4550]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4551]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4552]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4553]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4554]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4555]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4556]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4557]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4558]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4559]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4560]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4577]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4578]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2)))) {
        ++(vlSymsp->__Vcoverage[4579]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4580]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4582]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4583]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4584]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4585]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4586]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4587]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4588]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4589]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4590]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4591]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4592]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4593]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4594]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4595]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4596]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4597]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4600]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4601]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4602]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4603]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4604]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4605]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4606]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4607]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4608]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4609]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4610]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4611]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4612]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4613]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4614]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4615]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4616]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4617]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4618]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4619]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3)))) {
        ++(vlSymsp->__Vcoverage[4620]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4621]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4623]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4624]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4625]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s1_pc_dup_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s1_pc_dup_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
        = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3;
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__REG_1) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__REG_1))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__REG_1 
            = vlSelf->RAS_top__DOT__RAS__DOT__REG_1;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__REG = vlSelf->RAS_top__DOT__reset;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out)))) {
        ++(vlSymsp->__Vcoverage[5206]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5207]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5208]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5209]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5210]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5211]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5212]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5213]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5214]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5215]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5216]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5217]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5218]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5219]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5220]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5221]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5222]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5223]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5224]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5225]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5226]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5227]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5228]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5229]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5230]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5231]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5232]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5233]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5234]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5235]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5236]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xfbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5237]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xf7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5238]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xeffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5239]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5240]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0xbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
                 >> 0x23U))) {
        ++(vlSymsp->__Vcoverage[5241]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out 
            = ((0x7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__io_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_4 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
        = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2;
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__REG) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__REG))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__REG 
            = vlSelf->RAS_top__DOT__RAS__DOT__REG;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3)))) {
        ++(vlSymsp->__Vcoverage[5350]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5351]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5352]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5353]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5354]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5355]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5356]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5357]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5358]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5359]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5360]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5361]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5362]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5363]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5364]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5365]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5366]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5367]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5368]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5369]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5370]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5371]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5372]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5373]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5374]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5375]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5376]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5377]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5378]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5379]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5380]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xfbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5381]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xf7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5382]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xeffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5383]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5384]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0xbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
                 >> 0x23U))) {
        ++(vlSymsp->__Vcoverage[5385]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3 
            = ((0x7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
        = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2)))) {
        ++(vlSymsp->__Vcoverage[5314]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5315]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5316]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5317]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5318]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5319]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5320]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5321]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5322]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5323]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5324]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5325]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5326]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5327]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5328]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5329]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5330]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5331]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5332]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5333]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5334]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5335]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5336]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5337]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5338]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5339]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5340]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5341]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5342]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5343]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5344]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xfbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5345]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xf7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5346]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xeffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5347]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5348]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0xbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
                 >> 0x23U))) {
        ++(vlSymsp->__Vcoverage[5349]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2 
            = ((0x7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
        = vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1)))) {
        ++(vlSymsp->__Vcoverage[5278]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5279]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5280]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5281]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5282]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5283]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5284]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5285]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5286]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5287]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5288]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5289]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5290]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5291]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5292]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5293]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5294]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5295]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5296]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5297]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5298]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5299]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5300]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5301]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5302]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5303]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5304]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5305]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5306]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5307]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5308]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xfbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5309]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xf7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5310]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xeffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5311]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5312]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0xbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
                 >> 0x23U))) {
        ++(vlSymsp->__Vcoverage[5313]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1 
            = ((0x7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
        = vlSelf->RAS_top__DOT__io_reset_vector;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG)))) {
        ++(vlSymsp->__Vcoverage[5242]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5243]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5244]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5245]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5246]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5247]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5248]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5249]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5250]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5251]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5252]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5253]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5254]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5255]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5256]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5257]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5258]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5259]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5260]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5261]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5262]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5263]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5264]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5265]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5266]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5267]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5268]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5269]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5270]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5271]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5272]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xfbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5273]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xf7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5274]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xeffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5275]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5276]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0xbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
                 >> 0x23U))) {
        ++(vlSymsp->__Vcoverage[5277]);
        vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG 
            = ((0x7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT____Vtogcov__REG) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__reset_vector_delay__DOT__REG 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
}
