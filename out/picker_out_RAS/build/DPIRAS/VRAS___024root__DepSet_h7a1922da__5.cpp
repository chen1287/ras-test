// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAS.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VRAS__Syms.h"
#include "VRAS___024root.h"

VL_INLINE_OPT void VRAS___024root___sequent__TOP__13(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid 
        = ((((((IData)(vlSelf->RAS_top__DOT__io_update_valid) 
               & (IData)(vlSelf->RAS_top__DOT__io_update_bits_ftb_entry_tailSlot_valid)) 
              & (IData)(vlSelf->RAS_top__DOT__io_update_bits_ftb_entry_isRet)) 
             & (IData)(vlSelf->RAS_top__DOT__io_update_bits_jmp_taken)) 
            & (IData)(vlSelf->RAS_top__DOT__io_update_bits_cfi_idx_valid)) 
           & (IData)(vlSelf->RAS_top__DOT__RAS__DOT___GEN_1));
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_push_valid 
        = ((((((IData)(vlSelf->RAS_top__DOT__io_update_valid) 
               & (IData)(vlSelf->RAS_top__DOT__io_update_bits_ftb_entry_tailSlot_valid)) 
              & (IData)(vlSelf->RAS_top__DOT__io_update_bits_ftb_entry_isCall)) 
             & (IData)(vlSelf->RAS_top__DOT__io_update_bits_jmp_taken)) 
            & (IData)(vlSelf->RAS_top__DOT__io_update_bits_cfi_idx_valid)) 
           & (IData)(vlSelf->RAS_top__DOT__RAS__DOT___GEN_1));
    vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_pop = (
                                                   (((((((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
                                                         & (~ 
                                                            ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_pop_T_8) 
                                                             & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_hit)))) 
                                                        & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1)) 
                                                       & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_pop_T_9) 
                                                          | (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)))) 
                                                      & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_hit)) 
                                                     & (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing))) 
                                                    & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_ret)) 
                                                   & (~ (IData)(vlSelf->RAS_top__DOT__io_s3_redirect_2)));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_commit_pop_valid))) {
        ++(vlSymsp->__Vcoverage[5474]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_commit_pop_valid 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_push_valid) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_commit_push_valid))) {
        ++(vlSymsp->__Vcoverage[5473]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_commit_push_valid 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_push_valid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_pop) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_spec_pop))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_spec_pop 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_pop;
    }
}

VL_INLINE_OPT void VRAS___024root___sequent__TOP__14(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__14\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h441e8f3f__0;
    // Body
    vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag 
        = vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag;
    vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value 
        = vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value;
    if (((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall))) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr;
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_flag 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_NOS_flag;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_flag;
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_sctr;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value;
        vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr;
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_ssp;
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_flag 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_TOSR_flag;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag;
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_TOSR_value;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value 
            = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4)
                ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value)
                : (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value));
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
         | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4))) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr;
    }
    if (vlSelf->RAS_top__DOT__io_s2_fire_2) {
        vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
            = vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1;
        vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp;
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_TOSW_flag;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[5086]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag;
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_flag 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag;
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_TOSW_value;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5087]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5088]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5091]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSW_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_22 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag) 
            << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value));
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8246]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8247]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8248]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8249]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8250]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8251]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8252]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)))) {
        ++(vlSymsp->__Vcoverage[8253]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_next_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_ctr)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[5168]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_flag;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[5098]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_flag;
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_flag 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_flag;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_sctr)))) {
        ++(vlSymsp->__Vcoverage[5154]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_sctr 
            = ((2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_sctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_sctr)))) {
        ++(vlSymsp->__Vcoverage[5155]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_sctr 
            = ((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_sctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[5478]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr 
            = ((6U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[5479]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr 
            = ((5U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[5480]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr 
            = ((3U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_meta_sctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5099]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5100]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5101]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5102]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5103]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_NOS_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value)));
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[5083]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr 
            = ((6U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[5084]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr 
            = ((5U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr)))) {
        ++(vlSymsp->__Vcoverage[5085]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr 
            = ((3U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_sctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr)));
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr;
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[5150]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[5151]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[5152]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)))) {
        ++(vlSymsp->__Vcoverage[5153]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp 
            = ((7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_ssp)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[5162]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_flag;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[5092]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag;
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_flag 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag;
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_11 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5163]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5164]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5165]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5166]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5167]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSR_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)));
    }
    if (vlSelf->RAS_top__DOT__io_redirect_valid) {
        vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value 
            = vlSelf->RAS_top__DOT__io_redirect_bits_cfiUpdate_NOS_value;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[8152]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[8153]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[8154]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[8155]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)))) {
        ++(vlSymsp->__Vcoverage[8156]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassNos_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5094]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5097]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_TOSR_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)));
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value;
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_11 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
           < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr)))) {
        ++(vlSymsp->__Vcoverage[8102]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[8103]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[8104]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[8105]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[8106]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8107]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8108]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[8109]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[8110]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[8111]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[8112]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[8113]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[8114]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[8115]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[8116]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[8117]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[8118]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[8119]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[8120]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[8121]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[8122]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[8123]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[8124]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[8125]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[8126]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[8127]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[8128]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[8129]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[8130]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[8131]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[8132]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[8133]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[8134]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[8135]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[8136]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[8137]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[8138]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[8139]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[8140]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[8141]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[8142]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr)))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5065]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5066]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5067]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5068]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5069]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5070]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5071]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5072]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5073]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[5074]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_spec_new_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[5079]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[5080]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[5081]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)))) {
        ++(vlSymsp->__Vcoverage[5082]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp 
            = ((7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_meta_ssp)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)));
    }
    vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp 
        = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp;
    VL_EXTEND_WI(245,4, __Vtemp_h441e8f3f__0, (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
        = ((__Vtemp_h441e8f3f__0[0U] << 6U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag) 
                                                << 5U) 
                                               | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value)));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
        = ((__Vtemp_h441e8f3f__0[0U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[1U] 
                                                  << 6U));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
        = ((__Vtemp_h441e8f3f__0[1U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[2U] 
                                                  << 6U));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
        = ((__Vtemp_h441e8f3f__0[2U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[3U] 
                                                  << 6U));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
        = ((__Vtemp_h441e8f3f__0[3U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[4U] 
                                                  << 6U));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
        = ((__Vtemp_h441e8f3f__0[4U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[5U] 
                                                  << 6U));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
        = ((__Vtemp_h441e8f3f__0[5U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[6U] 
                                                  << 6U));
    vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
        = ((__Vtemp_h441e8f3f__0[6U] >> 0x1aU) | (__Vtemp_h441e8f3f__0[7U] 
                                                  << 6U));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[5156]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_16 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_flag) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5157]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5158]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5159]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5160]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5161]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_TOSW_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_74 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag) 
            << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_16 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
           < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_11) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_11))) {
        ++(vlSymsp->__Vcoverage[8311]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_11 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_11;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_11) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_11))) {
        ++(vlSymsp->__Vcoverage[8312]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_11 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_11;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_16) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_16))) {
        ++(vlSymsp->__Vcoverage[8161]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_16 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_16;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_16) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_16))) {
        ++(vlSymsp->__Vcoverage[8162]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_16 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_16;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5169]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5170]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5171]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5172]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5173]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_bits_rcfiUpdate_NOS_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value)));
    }
}

VL_INLINE_OPT void VRAS___024root___multiclk__TOP__15(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___multiclk__TOP__15\n"); );
    // Body
    if (vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_jalr) {
        if (vlSelf->RAS_top__DOT__RAS__DOT___GEN) {
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr;
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr;
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr;
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr;
        } else {
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
            vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
        }
    } else {
        vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
        vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
        vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
        vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_56 
        = ((7U > (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)) 
           & (((0x28fU >= (0x3ffU & ((IData)(0x29U) 
                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp))))
                ? (0x1ffffffffffULL & (((QData)((IData)(
                                                        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                        (((IData)(0x28U) 
                                                          + 
                                                          (0x3ffU 
                                                           & ((IData)(0x29U) 
                                                              * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp)))) 
                                                         >> 5U)])) 
                                        << ((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp))))
                                             ? 0x20U
                                             : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(0x29U) 
                                                      * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp)))))) 
                                       | (((0U == (0x1fU 
                                                   & ((IData)(0x29U) 
                                                      * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp))))
                                            ? 0ULL : 
                                           ((QData)((IData)(
                                                            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                            (((IData)(0x1fU) 
                                                              + 
                                                              (0x3ffU 
                                                               & ((IData)(0x29U) 
                                                                  * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp)))) 
                                                             >> 5U)])) 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x29U) 
                                                      * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp)))))) 
                                          | ((QData)((IData)(
                                                             vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                             (0x1fU 
                                                              & (((IData)(0x29U) 
                                                                  * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp)) 
                                                                 >> 5U))])) 
                                             >> (0x1fU 
                                                 & ((IData)(0x29U) 
                                                    * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp)))))))
                : 0ULL) == ((0x51fU >= (0x7ffU & ((IData)(0x29U) 
                                                  * 
                                                  (0x1fU 
                                                   & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))))
                             ? (0x1ffffffffffULL & 
                                (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                  (((IData)(0x28U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x29U) 
                                                        * 
                                                        (0x1fU 
                                                         & vlSelf->RAS_top__DOT__io_update_bits_meta[0U])))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * 
                                                 (0x1fU 
                                                  & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x29U) 
                                                      * 
                                                      (0x1fU 
                                                       & vlSelf->RAS_top__DOT__io_update_bits_meta[0U])))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x29U) 
                                                * (0x1fU 
                                                   & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * 
                                                                      (0x1fU 
                                                                       & vlSelf->RAS_top__DOT__io_update_bits_meta[0U])))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * 
                                                     (0x1fU 
                                                      & vlSelf->RAS_top__DOT__io_update_bits_meta[0U])))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                       (0x3fU 
                                                        & (((IData)(0x29U) 
                                                            * 
                                                            (0x1fU 
                                                             & vlSelf->RAS_top__DOT__io_update_bits_meta[0U])) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x29U) 
                                            * (0x1fU 
                                               & vlSelf->RAS_top__DOT__io_update_bits_meta[0U])))))))
                             : 0ULL)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_26 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_28 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x40U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_30 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x80U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_32 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0xc0U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_34 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x100U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_36 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x140U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_38 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x180U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_40 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x1c0U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_42 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x200U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_44 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x240U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_46 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x280U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_48 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x2c0U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_50 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x300U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_52 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x340U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_54 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x380U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_55 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_pop_valid) 
            & (0x3c0U == (0x3c0U & vlSelf->RAS_top__DOT__io_update_bits_meta[0U]))) 
           & (0U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_73 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_commit_push_valid) 
           & ((~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_overflowed)) 
              | (((1U & (((IData)(1U) + vlSelf->RAS_top__DOT__io_update_bits_meta[0U]) 
                         >> 5U)) ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag)) 
                 ^ ((0x1fU & ((IData)(1U) + vlSelf->RAS_top__DOT__io_update_bits_meta[0U])) 
                    > (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)))));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1)))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
}

VL_INLINE_OPT void VRAS___024root___sequent__TOP__16(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__16\n"); );
    // Init
    CData/*0:0*/ RAS_top__DOT__RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T;
    VlWide<3>/*95:0*/ __Vtemp_hafcfb41d__0;
    VlWide<5>/*159:0*/ __Vtemp_h2fe94f0d__0;
    // Body
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG) 
            & (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rlevel))) 
           & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isCall));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr 
        = vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr;
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag 
        = vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag;
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value 
        = vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value;
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp 
        = vlSelf->__Vdly__RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp;
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_23 
        = ((0x3fU & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_22))) 
           == (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag) 
                << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_17 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
           >= (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_15 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_flag) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_10 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_15 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
           < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_10 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
           < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_13 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
           >= (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isCall))) {
        ++(vlSymsp->__Vcoverage[5476]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isCall 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_75 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG) 
            & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall)) 
           & ((0x3fU & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_74))) 
              == (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag) 
                   << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG) 
           & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___sctr_T 
        = (7U & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr)));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)))) {
        ++(vlSymsp->__Vcoverage[5526]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr 
            = ((6U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)))) {
        ++(vlSymsp->__Vcoverage[5527]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr 
            = ((5U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)))) {
        ++(vlSymsp->__Vcoverage[5528]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr 
            = ((3U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_sctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[5529]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5530]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5531]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5532]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5533]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[5534]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSR_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_flag 
        = (1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid)
                  ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_flag)
                  : ((((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_31_flag) 
                       << 0x1fU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_30_flag) 
                                     << 0x1eU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_29_flag) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_28_flag) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_27_flag) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_26_flag) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_25_flag) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_24_flag) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_23_flag) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_22_flag) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_21_flag) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_20_flag) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_19_flag) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_18_flag) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_17_flag) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_16_flag) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_15_flag) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_14_flag) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_13_flag) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_12_flag) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_11_flag) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_10_flag) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_9_flag) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_8_flag) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_7_flag) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_6_flag) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_5_flag) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_4_flag) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_3_flag) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_2_flag) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_1_flag) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_0_flag)))))))))))))))))))))))))))))))) 
                     >> (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))));
    __Vtemp_hafcfb41d__0[1U] = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_12_value) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_11_value)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_10_value)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_9_value)) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_8_value)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_7_value)) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_6_value)) 
                                                                       << 0x1eU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_5_value) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_4_value) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_3_value) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_2_value) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_1_value) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_0_value)))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h2fe94f0d__0[0U] = (IData)((((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_11_value)) 
                                         << 0x37U) 
                                        | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_10_value)) 
                                            << 0x32U) 
                                           | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_9_value)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_8_value)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_7_value)) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_6_value)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_5_value) 
                                                                           << 0x19U) 
                                                                          | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_4_value) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_3_value) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_2_value) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_1_value) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_0_value)))))))))))))));
    __Vtemp_h2fe94f0d__0[1U] = __Vtemp_hafcfb41d__0[1U];
    __Vtemp_h2fe94f0d__0[2U] = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_19_value) 
                                 << 0x1fU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_18_value) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_17_value) 
                                                  << 0x15U) 
                                                 | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_16_value) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_15_value) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_14_value) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_13_value) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_12_value) 
                                                                >> 4U))))))));
    __Vtemp_h2fe94f0d__0[3U] = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_25_value) 
                                 << 0x1dU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_24_value) 
                                               << 0x18U) 
                                              | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_23_value) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_22_value) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_21_value) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_20_value) 
                                                           << 4U) 
                                                          | ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_19_value) 
                                                             >> 1U)))))));
    __Vtemp_h2fe94f0d__0[4U] = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_31_value) 
                                 << 0x1bU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_30_value) 
                                               << 0x16U) 
                                              | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_29_value) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_28_value) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_27_value) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_26_value) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_nos_25_value) 
                                                             >> 3U)))))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_8 
        = ((0x9fU >= (0xffU & ((IData)(5U) * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))))
                          ? 0U : (__Vtemp_h2fe94f0d__0[
                                  (((IData)(4U) + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                        | (__Vtemp_h2fe94f0d__0[(7U 
                                                 & (((IData)(5U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                    >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))))))
            : 0U);
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_1 
        = ((0x51fU >= (0x7ffU & ((IData)(0x29U) * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))))
            ? (0x1ffffffffffULL & (((QData)((IData)(
                                                    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                    (((IData)(0x28U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x29U) 
                                             * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x7ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x29U) 
                                                       * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))))) 
                                      | ((QData)((IData)(
                                                         vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                         (0x3fU 
                                                          & (((IData)(0x29U) 
                                                              * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x29U) 
                                                * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value)))))))
            : 0ULL);
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
           >= (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___sctr_T_4 
        = (0xfU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
                   - (IData)(1U)));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[5522]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[5523]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[5524]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)))) {
        ++(vlSymsp->__Vcoverage[5525]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp 
            = ((7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_ssp)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_4 
        = ((0x28fU >= (0x3ffU & ((IData)(0x29U) * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp))))
            ? (0x1ffffffffffULL & (((QData)((IData)(
                                                    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                    (((IData)(0x28U) 
                                                      + 
                                                      (0x3ffU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x29U) 
                                             * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x29U) 
                                                       * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)))))) 
                                      | ((QData)((IData)(
                                                         vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                         (0x1fU 
                                                          & (((IData)(0x29U) 
                                                              * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x29U) 
                                                * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp)))))))
            : 0ULL);
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_18 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_flag) 
            ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag)) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_17));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_15) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_15))) {
        ++(vlSymsp->__Vcoverage[8159]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_15 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_15;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_10) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_10))) {
        ++(vlSymsp->__Vcoverage[8309]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__differentFlag_10 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_10;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_15) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_15))) {
        ++(vlSymsp->__Vcoverage[8160]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_15 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_15;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_11 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isRet) 
            & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_15) 
               ^ (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_15)))) 
           & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_16) 
              ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_16)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_15) 
            ^ (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_15))) 
           & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_16) 
              ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_16)));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_10) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_10))) {
        ++(vlSymsp->__Vcoverage[8310]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__compare_10 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_10;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_10) 
            ^ (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_10))) 
           & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_11) 
              ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_11)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_14 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_flag) 
            ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag)) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_13));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[5541]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_flag;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid)
            ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassNos_value)
            : (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_8));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topEntry_inflightValid 
        = ((((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag) 
             ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag)) 
            ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN)) 
           & (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_flag) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                 < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_6 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_18) 
           & (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_flag) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_NOS_value) 
                 < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value))));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__redirectTopEntry_inflightValid))) {
        ++(vlSymsp->__Vcoverage[8163]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__redirectTopEntry_inflightValid 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1 
        = ((0x1ffffffffffULL & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid)
                                 ? ((0x51fU >= (0x7ffU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value))))
                                     ? (((QData)((IData)(
                                                         vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                         (((IData)(0x28U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                              (0x3fU 
                                                               & (((IData)(0x29U) 
                                                                   * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value)) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value))))))
                                     : 0ULL) : ((0x28fU 
                                                 >= 
                                                 (0x3ffU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x28U) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (0x1fU 
                                                                        & (((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp))))))
                                                 : 0ULL))) 
           == vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr);
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3TopEntry_inflightValid))) {
        ++(vlSymsp->__Vcoverage[8313]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3TopEntry_inflightValid 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid;
    }
    RAS_top__DOT__RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T 
        = ((0x1ffffffffffULL & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid)
                                 ? ((0x51fU >= (0x7ffU 
                                                & ((IData)(0x29U) 
                                                   * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value))))
                                     ? (((QData)((IData)(
                                                         vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                         (((IData)(0x28U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x29U) 
                                                               * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x29U) 
                                                  * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x29U) 
                                                 * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x29U) 
                                                                      * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[
                                                              (0x3fU 
                                                               & (((IData)(0x29U) 
                                                                   * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value)) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value))))))
                                     : 0ULL) : ((0x28fU 
                                                 >= 
                                                 (0x3ffU 
                                                  & ((IData)(0x29U) 
                                                     * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                  (((IData)(0x28U) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x29U) 
                                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x29U) 
                                                        * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x29U) 
                                                          * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x3ffU 
                                                                         & ((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_3[
                                                                       (0x1fU 
                                                                        & (((IData)(0x29U) 
                                                                            * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x29U) 
                                                           * (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp))))))
                                                 : 0ULL))) 
           == vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr);
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_8 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_14) 
           & (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_flag) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_NOS_value) 
                 < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value))));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5542]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5543]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5544]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5545]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[5546]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_NOS_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_15 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
           >= (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topEntry_inflightValid) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__topEntry_inflightValid))) {
        ++(vlSymsp->__Vcoverage[8158]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__topEntry_inflightValid 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topEntry_inflightValid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_6) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_6))) {
        ++(vlSymsp->__Vcoverage[8334]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_6 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_6;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_79 
        = ((IData)(RAS_top__DOT__RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T) 
           & (7U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr 
        = (((IData)(RAS_top__DOT__RAS__DOT__RASStack__DOT___s3_missPushEntry_ctr_T) 
            & (7U > (0xffU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3TopEntry_inflightValid)
                               ? (((0U == (0x1fU & 
                                           ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
                                            << 3U)))
                                    ? 0U : (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[
                                            (((IData)(7U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
                                                    << 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
                                                      << 3U))))) 
                                  | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[
                                     (7U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
                                            >> 2U))] 
                                     >> (0x1fU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value) 
                                                  << 3U))))
                               : (((0U == (0x1fU & 
                                           ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
                                            << 3U)))
                                    ? 0U : (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                                            (((IData)(7U) 
                                              + (0x7fU 
                                                 & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
                                                    << 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
                                                      << 3U))))) 
                                  | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                                     (3U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
                                            >> 2U))] 
                                     >> (0x1fU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_ssp) 
                                                  << 3U))))))))
            ? (7U & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_sctr)))
            : 0U);
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_8) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_8))) {
        ++(vlSymsp->__Vcoverage[8333]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_8 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_8;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_16 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_flag) 
            ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag)) 
           ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_15));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8314]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8315]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8316]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8317]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8318]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8319]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8320]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8321]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__s3_missPushEntry_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__s3_missPushEntry_ctr)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_4 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_16) 
           & (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_flag) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag)) 
              ^ ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topNos_value) 
                 < (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value))));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_4) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_4))) {
        ++(vlSymsp->__Vcoverage[8335]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__inflightValid_4 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__inflightValid_4;
    }
}

VL_INLINE_OPT void VRAS___024root___sequent__TOP__17(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__17\n"); );
    // Body
    vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push = 
        ((((((((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2) 
               & (~ ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_pop_T_8) 
                     & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_hit)))) 
              & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1)) 
             & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_pop_T_9) 
                | (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)))) 
            & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_hit)) 
           & (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing))) 
          & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_is_call)) 
         & (~ (IData)(vlSelf->RAS_top__DOT__io_s3_redirect_2)));
    vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
        = (0x1ffffffffffULL & (vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr 
                               + ((QData)((IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call)) 
                                  << 1U)));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_spec_push))) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s2_spec_push 
            = vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr)))) {
        ++(vlSymsp->__Vcoverage[5388]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5389]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5390]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5391]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5392]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5393]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5394]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5395]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5396]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5397]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5398]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5399]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5400]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5401]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5402]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5403]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5404]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5405]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5406]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5407]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5408]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5409]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5410]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5411]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5412]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5413]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5414]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5415]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5416]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5417]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5418]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5419]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5420]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5421]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5422]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5423]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5424]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5425]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5426]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5427]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[5428]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_push_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
}

VL_INLINE_OPT void VRAS___024root___multiclk__TOP__18(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___multiclk__TOP__18\n"); );
    // Body
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_flag 
            = vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSW_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSW_value)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_flag))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_flag 
            = vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_NOS_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_NOS_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr 
            = ((6U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr 
            = ((5U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr 
            = ((3U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_sctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_sctr)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_flag))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_flag 
            = vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_TOSR_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_TOSR_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_ssp)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_ssp)));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[0U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[0U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[1U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[1U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[2U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[2U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[3U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[3U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[4U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[4U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[5U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[5U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfffbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfff7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffefffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffdfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xffbfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xff7fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfeffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfdffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xfbffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x8000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xf7ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x8000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x10000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xefffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x10000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x20000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xdfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x20000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((0x40000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
                        ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0xbfffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x40000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if (((vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U] 
          ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U] 
            = ((0x7fffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[6U]) 
               | (0x80000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[6U]));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7ff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7feffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7fbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7f7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7efffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7dfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x7bfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x77fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x6ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x5ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U] 
            = ((0x3ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_meta[7U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_out_last_stage_meta[7U]));
    }
}

VL_INLINE_OPT void VRAS___024root___multiclk__TOP__19(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___multiclk__TOP__19\n"); );
    // Init
    CData/*0:0*/ RAS_top__DOT__RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7;
    // Body
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall) 
                 | (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_77 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop) 
            & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_10) 
               ^ (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_10)))) 
           & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__differentFlag_11) 
              ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__compare_11)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_21 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) 
           & ((0x3fU & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_19))) 
              == (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag) 
                   << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValidWire 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4) 
           | ((~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG)) 
              & ((IData)(vlSelf->RAS_top__DOT__io_s2_fire_2)
                  ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push)
                  : ((~ (IData)(vlSelf->RAS_top__DOT__io_s3_fire_2)) 
                     & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid)))));
    RAS_top__DOT__RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid)
             ? vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_retAddr
             : ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topEntry_inflightValid)
                 ? vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_1
                 : vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_4)) 
           == vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1);
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4)
            ? vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_callAddr
            : vlSelf->RAS_top__DOT__RAS__DOT___s2_spec_new_addr_T_1);
    if (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_9) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_flag;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_next_value;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_next_value;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_next_retAddr;
    } else {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_flag;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSR_value;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_spec_new_addr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValidWire) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassValidWire))) {
        ++(vlSymsp->__Vcoverage[8308]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassValidWire 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValidWire;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_12 
        = ((IData)(RAS_top__DOT__RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7) 
           & (7U != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr 
        = (7U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___realPush_T_4)
                  ? (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___writeEntry_ctr_T_1) 
                      & (7U > (0xffU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__redirectTopEntry_inflightValid)
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
                                                  << 3U)))
                                              ? 0U : 
                                             (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[
                                              (((IData)(7U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
                                                      << 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
                                                      << 3U))))) 
                                            | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[
                                               (7U 
                                                & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
                                                   >> 2U))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSR_value) 
                                                      << 3U))))
                                         : (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
                                                  << 3U)))
                                              ? 0U : 
                                             (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                                              (((IData)(7U) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
                                                      << 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
                                                      << 3U))))) 
                                            | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                                               (3U 
                                                & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
                                                   >> 2U))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_ssp) 
                                                      << 3U))))))))
                      ? ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_sctr))
                      : 0U) : (((IData)(RAS_top__DOT__RAS__DOT__RASStack__DOT___writeEntry_ctr_T_7) 
                                & (7U > (0xffU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid)
                                                   ? (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassEntry_ctr)
                                                   : 
                                                  ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__topEntry_inflightValid)
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                                                            << 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                                                           << 3U))))) 
                                                    | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[
                                                       (7U 
                                                        & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSR_value) 
                                                           << 3U))))
                                                    : 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
                                                            << 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
                                                           << 3U))))) 
                                                    | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                                                       (3U 
                                                        & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__ssp) 
                                                           << 3U)))))))))
                                ? ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__sctr))
                                : 0U)));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr)))) {
        ++(vlSymsp->__Vcoverage[8164]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[8165]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[8166]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[8167]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[8168]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8169]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8170]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[8171]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[8172]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[8173]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[8174]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[8175]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[8176]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[8177]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[8178]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[8179]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[8180]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[8181]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[8182]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[8183]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[8184]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[8185]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[8186]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[8187]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[8188]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[8189]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[8190]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[8191]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[8192]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[8193]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[8194]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[8195]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[8196]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[8197]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[8198]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[8199]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[8200]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[8201]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[8202]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[8203]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[8204]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_flag))) {
        ++(vlSymsp->__Vcoverage[8327]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[8322]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[8323]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[8324]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[8325]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)))) {
        ++(vlSymsp->__Vcoverage[8326]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteAddr_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteAddr_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[8328]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[8329]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[8330]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[8331]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)))) {
        ++(vlSymsp->__Vcoverage[8332]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realNos_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realNos_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr)))) {
        ++(vlSymsp->__Vcoverage[8254]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[8255]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[8256]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[8257]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[8258]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8259]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8260]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[8261]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[8262]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[8263]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[8264]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[8265]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[8266]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[8267]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[8268]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[8269]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[8270]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[8271]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[8272]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[8273]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[8274]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[8275]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[8276]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[8277]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[8278]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[8279]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[8280]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[8281]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[8282]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[8283]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[8284]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[8285]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[8286]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[8287]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[8288]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[8289]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[8290]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[8291]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[8292]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[8293]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[8294]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realWriteEntry_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realWriteEntry_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8662]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8663]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8664]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8665]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8666]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8667]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8668]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)))) {
        ++(vlSymsp->__Vcoverage[8669]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeEntry_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeEntry_ctr)));
    }
}
