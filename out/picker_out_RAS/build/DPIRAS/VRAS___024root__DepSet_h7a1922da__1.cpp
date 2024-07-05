// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAS.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VRAS__Syms.h"
#include "VRAS___024root.h"

VL_INLINE_OPT void VRAS___024root___sequent__TOP__3(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__3\n"); );
    // Body
    if ((2U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (2U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (4U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (8U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffffefU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x10U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x20U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x40U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x80U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x100U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x200U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x400U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x800U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffefffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ffbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7ff7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7feffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7fbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7f7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x100000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7efffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x100000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x200000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7dfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x200000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x400000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x7bfffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x400000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x800000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                      ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x77fffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x800000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x1000000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x6ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x1000000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x2000000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x5ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x2000000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if ((0x4000000U & (vlSelf->RAS_top__DOT__io_update_bits_meta[7U] 
                       ^ vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U] 
            = ((0x3ffffffU & vlSelf->RAS_top__DOT____Vtogcov__io_update_bits_meta[7U]) 
               | (0x4000000U & vlSelf->RAS_top__DOT__io_update_bits_meta[7U]));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->RAS_top__DOT____Vtogcov__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    }
    vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_is_br_sharing 
        = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    vlSelf->RAS_top__DOT__RAS__DOT___s3_pop_T_9 = ((IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing) 
                                                   & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1));
    if (((IData)(vlSelf->RAS_top__DOT__reset) ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->RAS_top__DOT____Vtogcov__reset = vlSelf->RAS_top__DOT__reset;
    }
    if (((IData)(vlSelf->RAS_top__DOT__clock) ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->RAS_top__DOT____Vtogcov__clock = vlSelf->RAS_top__DOT__clock;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_is_br_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_hit))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_hit 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_is_br_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_hit))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_hit 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughErr) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughErr))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughErr 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughErr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_is_br_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_hit))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_hit 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughErr) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughErr))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughErr 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughErr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_multiHit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_multiHit))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_multiHit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_multiHit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_is_br_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_hit))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_hit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughErr) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughErr))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughErr 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughErr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_multiHit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_multiHit))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_multiHit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_multiHit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_is_br_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_hit))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_hit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughErr) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughErr))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughErr 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughErr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_multiHit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_multiHit))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_multiHit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_multiHit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughErr) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughErr))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughErr 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughErr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_multiHit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_multiHit))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_multiHit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_multiHit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_is_br_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_hit))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_hit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_isCall) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_isCall))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_isCall 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_isCall;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_isRet) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_isRet))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_isRet 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_isRet;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_isJalr) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_isJalr))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_isJalr 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_isJalr;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_valid) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_valid))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_valid 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_valid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_sharing))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_sharing 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_valid) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_valid))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_valid 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_valid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_sharing))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_sharing 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_sharing;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_valid) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_valid))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_valid 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_valid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_carry) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_carry))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_carry 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_carry;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_last_may_be_rvi_call) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_last_may_be_rvi_call))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_last_may_be_rvi_call 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_last_may_be_rvi_call;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_always_taken_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_always_taken_0))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_always_taken_0 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_always_taken_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_always_taken_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_always_taken_1))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_always_taken_1 
            = vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_always_taken_1;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_tarStat)))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_tarStat 
            = ((2U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_tarStat)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_tarStat)))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_tarStat 
            = ((1U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_tarStat)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_tarStat)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_tarStat)))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_tarStat 
            = ((2U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_tarStat)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_tarStat)))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_tarStat 
            = ((1U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_tarStat)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_tarStat)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_hit))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_hit 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_hit;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_0)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_0)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_offsets_1)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_offsets_1)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_0)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_0)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_offsets_1)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_offsets_1)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_0)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_0)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_offsets_1)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_offsets_1)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_0)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_0)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_offsets_1)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_offsets_1)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_0)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_0)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_offsets_1)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_offsets_1)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_offset)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_offset)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_offset)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_offset)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr 
            = ((0xeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr 
            = ((0xdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr 
            = ((0xbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr 
            = ((7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_pftAddr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_pftAddr)));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_is_br_sharing;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xffeU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xffdU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xffbU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xff7U & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xfefU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xfdfU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xfbfU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                  ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xf7fU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x100U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                   ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xeffU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x100U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x200U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                   ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xdffU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x200U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x400U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                   ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0xbffU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x400U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((0x800U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower) 
                   ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower 
            = ((0x7ffU & (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_brSlots_0_lower)) 
               | (0x800U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_brSlots_0_lower)));
    }
    if ((1U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffffeU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (1U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((2U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffffdU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (2U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((4U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffffbU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (4U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((8U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
               ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffff7U & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (8U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x10U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfffefU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x10U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x20U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfffdfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x20U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x40U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfffbfU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x40U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x80U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfff7fU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x80U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x100U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffeffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x100U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x200U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffdffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x200U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x400U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xffbffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x400U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x800U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                   ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xff7ffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x800U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x1000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfefffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x1000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x2000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfdfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x2000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x4000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xfbfffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x4000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x8000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                    ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xf7fffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x8000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x10000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xeffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x10000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x20000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xdffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x20000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x40000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0xbffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x40000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((0x80000U & (vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower 
                     ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower 
            = ((0x7ffffU & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_ftb_entry_tailSlot_lower) 
               | (0x80000U & vlSelf->RAS_top__DOT__io_out_last_stage_ftb_entry_tailSlot_lower));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_0_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0)))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_1_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0)))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0)))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_3_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0)))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0)))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0)))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0)))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr)))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_full_pred_2_fallThroughAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_full_pred_2_fallThroughAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_slot_valids_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_slot_valids_1))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_slot_valids_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_slot_valids_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_hit) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_hit))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_hit 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_hit;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_br_taken_mask_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_br_taken_mask_0))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_br_taken_mask_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_br_taken_mask_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_br_taken_mask_1) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_br_taken_mask_1))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_br_taken_mask_1 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_br_taken_mask_1;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_slot_valids_0) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_slot_valids_0))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_slot_valids_0 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_slot_valids_0;
    }
    if (((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_is_br_sharing) 
         ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_is_br_sharing))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_is_br_sharing 
            = vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_is_br_sharing;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__s3_pop = ((((((~ 
                                                   ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s3_pop_T_8) 
                                                    & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_hit))) 
                                                  & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1)) 
                                                 & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s3_pop_T_9) 
                                                    | (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)))) 
                                                & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_hit)) 
                                               & (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing))) 
                                              & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_ret));
    vlSelf->RAS_top__DOT__RAS__DOT__s3_push = (((((
                                                   (~ 
                                                    ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s3_pop_T_8) 
                                                     & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_hit))) 
                                                   & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1)) 
                                                  & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT___s3_pop_T_9) 
                                                     | (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)))) 
                                                 & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_hit)) 
                                                & (~ (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing))) 
                                               & (IData)(vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_call));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pop) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pop))) {
        ++(vlSymsp->__Vcoverage[5078]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_pop 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_pop;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_push) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_push))) {
        ++(vlSymsp->__Vcoverage[5077]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__s3_push 
            = vlSelf->RAS_top__DOT__RAS__DOT__s3_push;
    }
}
