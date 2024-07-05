// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VRAS.h"
#include "VRAS__Syms.h"
#include "verilated_dpi.h"


void VRAS::get_clock(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_clock\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_clock_t __Vcb = (VRAS__Vcb_get_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_clock(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_clock\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_clock_t __Vcb = (VRAS__Vcb_set_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_reset(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_reset\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_reset_t __Vcb = (VRAS__Vcb_get_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_reset(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_reset\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_reset_t __Vcb = (VRAS__Vcb_set_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_reset_vector(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_reset_vector\n"); );
    // Init
    QData/*35:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_reset_vector");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_reset_vector_t __Vcb = (VRAS__Vcb_get_io_reset_vector_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(36, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_reset_vector(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_reset_vector\n"); );
    // Init
    QData/*35:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_reset_vector");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_reset_vector_t __Vcb = (VRAS__Vcb_set_io_reset_vector_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_s0_pc_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_s0_pc_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_s0_pc_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_s0_pc_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_s0_pc_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_s0_pc_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_s0_pc_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_s0_pc_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_s0_pc_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_s0_pc_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_s0_pc_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_s0_pc_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_s0_pc_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_s0_pc_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_s0_pc_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_s0_pc_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_s0_pc_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_s0_pc_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_s0_pc_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_s0_pc_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_s0_pc_2(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_s0_pc_2\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_s0_pc_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_s0_pc_2_t __Vcb = (VRAS__Vcb_get_io_in_bits_s0_pc_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_s0_pc_2(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_s0_pc_2\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_s0_pc_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_s0_pc_2_t __Vcb = (VRAS__Vcb_set_io_in_bits_s0_pc_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_s0_pc_3(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_s0_pc_3\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_s0_pc_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_s0_pc_3_t __Vcb = (VRAS__Vcb_get_io_in_bits_s0_pc_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_s0_pc_3(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_s0_pc_3\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_s0_pc_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_s0_pc_3_t __Vcb = (VRAS__Vcb_set_io_in_bits_s0_pc_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_0_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_0_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_1_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_1_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_is_call(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_is_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_is_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_call_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_is_call(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_is_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_is_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_call_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_2_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_2_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s2_full_pred_3_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s2_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s2_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s2_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s2_full_pred_3_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s2_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s2_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s2_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_0_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_0_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_1_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_1_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_is_call(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_is_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_is_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_call_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_is_call(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_is_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_is_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_call_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_2_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_2_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_s3_full_pred_3_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_s3_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_s3_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_hit_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_s3_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_s3_full_pred_3_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_s3_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_s3_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_hit_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_s3_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower\n"); );
    // Init
    SData/*11:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(12, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower\n"); );
    // Init
    SData/*11:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(2, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (3U & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower\n"); );
    // Init
    IData/*19:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(20, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower\n"); );
    // Init
    IData/*19:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfffffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(2, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (3U & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1_t __Vcb = (VRAS__Vcb_get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1_t __Vcb = (VRAS__Vcb_set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_pc_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_pc_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_pc_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_pc_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_pc_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_pc_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_pc_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_pc_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_pc_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_pc_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_pc_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_pc_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_pc_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_pc_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_pc_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_pc_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_pc_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_pc_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_pc_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_pc_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_pc_2(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_pc_2\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_pc_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_pc_2_t __Vcb = (VRAS__Vcb_get_io_out_s2_pc_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_pc_2(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_pc_2\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_pc_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_pc_2_t __Vcb = (VRAS__Vcb_set_io_out_s2_pc_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_pc_3(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_pc_3\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_pc_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_pc_3_t __Vcb = (VRAS__Vcb_get_io_out_s2_pc_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_pc_3(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_pc_3\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_pc_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_pc_3_t __Vcb = (VRAS__Vcb_set_io_out_s2_pc_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_0_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_0_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_0_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_0_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_0_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_0_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_offsets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_0_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_offsets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_offsets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_0_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_offsets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_0_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_0_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_0_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_0_hit_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_0_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_0_hit_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_1_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_1_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_1_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_1_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_1_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_1_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_offsets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_1_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_offsets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_offsets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_1_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_offsets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_1_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_1_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_1_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_1_hit_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_1_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_1_hit_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_2_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_2_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_2_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_2_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_2_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_2_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_offsets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_2_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_offsets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_offsets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_2_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_offsets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_2_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_2_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_2_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_2_hit_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_2_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_2_hit_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_3_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_3_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_3_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_3_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s2_full_pred_3_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s2_full_pred_3_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s2_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s2_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s2_full_pred_3_hit_t __Vcb = (VRAS__Vcb_get_io_out_s2_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s2_full_pred_3_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s2_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s2_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s2_full_pred_3_hit_t __Vcb = (VRAS__Vcb_set_io_out_s2_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_pc_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_pc_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_pc_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_pc_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_pc_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_pc_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_pc_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_pc_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_pc_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_pc_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_pc_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_pc_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_pc_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_pc_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_pc_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_pc_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_pc_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_pc_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_pc_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_pc_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_pc_2(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_pc_2\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_pc_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_pc_2_t __Vcb = (VRAS__Vcb_get_io_out_s3_pc_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_pc_2(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_pc_2\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_pc_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_pc_2_t __Vcb = (VRAS__Vcb_set_io_out_s3_pc_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_pc_3(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_pc_3\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_pc_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_pc_3_t __Vcb = (VRAS__Vcb_get_io_out_s3_pc_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_pc_3(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_pc_3\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_pc_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_pc_3_t __Vcb = (VRAS__Vcb_set_io_out_s3_pc_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_0_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_0_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_0_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_multiHit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_multiHit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_0_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_0_hit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_0_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_0_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_0_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_0_hit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_0_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_1_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_1_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_1_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_multiHit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_multiHit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_1_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_1_hit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_1_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_1_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_1_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_1_hit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_1_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_2_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_2_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_2_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_multiHit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_multiHit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_2_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_2_hit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_2_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_2_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_2_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_2_hit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_2_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_br_taken_mask_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_br_taken_mask_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_br_taken_mask_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_br_taken_mask_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_br_taken_mask_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_br_taken_mask_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_br_taken_mask_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_br_taken_mask_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_br_taken_mask_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_br_taken_mask_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_br_taken_mask_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_br_taken_mask_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_slot_valids_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_slot_valids_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_slot_valids_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_slot_valids_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_slot_valids_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_slot_valids_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_slot_valids_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_slot_valids_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_slot_valids_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_slot_valids_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_slot_valids_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_slot_valids_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_targets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_3_targets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_targets_0\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_targets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_targets_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_targets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_targets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_3_targets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_targets_1\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_targets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_targets_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_targets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_offsets_0(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_3_offsets_0(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_offsets_0\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_offsets_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_offsets_0_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_offsets_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_offsets_1(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_3_offsets_1(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_offsets_1\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_offsets_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_offsets_1_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_offsets_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_fallThroughAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_s3_full_pred_3_fallThroughAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_fallThroughAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_fallThroughAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_fallThroughAddr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_fallThroughAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_fallThroughErr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_fallThroughErr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_fallThroughErr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_fallThroughErr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_fallThroughErr_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_fallThroughErr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_multiHit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_multiHit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_multiHit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_multiHit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_multiHit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_multiHit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_multiHit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_is_br_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_is_br_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_is_br_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_is_br_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_is_br_sharing_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_is_br_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_s3_full_pred_3_hit(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_s3_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_s3_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_s3_full_pred_3_hit_t __Vcb = (VRAS__Vcb_get_io_out_s3_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_s3_full_pred_3_hit(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_s3_full_pred_3_hit\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_s3_full_pred_3_hit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_s3_full_pred_3_hit_t __Vcb = (VRAS__Vcb_set_io_out_s3_full_pred_3_hit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_meta(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_meta\n"); );
    // Init
    VlWide<8>/*250:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_meta");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_meta_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_meta_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_W(251, value + 8 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_meta(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_meta\n"); );
    // Init
    VlWide<8>/*250:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_meta");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_meta_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_meta_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVLV(251,value__Vcvt,value + 0);
(*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_ssp(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_ssp\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_ssp");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_ssp_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_ssp_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_spec_info_ssp(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_ssp\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_ssp");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_ssp_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_ssp_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_sctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_sctr\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_sctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_sctr_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_sctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(3, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_spec_info_sctr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_sctr\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_sctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_sctr_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_sctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (7U & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_TOSW_flag(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_TOSW_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_TOSW_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_TOSW_flag_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_TOSW_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_spec_info_TOSW_flag(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_TOSW_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_TOSW_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_TOSW_flag_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_TOSW_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_TOSW_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_TOSW_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_TOSW_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_TOSW_value_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_TOSW_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_spec_info_TOSW_value(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_TOSW_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_TOSW_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_TOSW_value_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_TOSW_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1fU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_TOSR_flag(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_TOSR_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_TOSR_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_TOSR_flag_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_TOSR_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_spec_info_TOSR_flag(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_TOSR_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_TOSR_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_TOSR_flag_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_TOSR_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_TOSR_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_TOSR_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_TOSR_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_TOSR_value_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_TOSR_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_spec_info_TOSR_value(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_TOSR_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_TOSR_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_TOSR_value_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_TOSR_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1fU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_NOS_flag(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_NOS_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_NOS_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_NOS_flag_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_NOS_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_spec_info_NOS_flag(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_NOS_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_NOS_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_NOS_flag_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_NOS_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_NOS_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_NOS_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_NOS_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_NOS_value_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_NOS_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_spec_info_NOS_value(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_NOS_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_NOS_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_NOS_value_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_NOS_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1fU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_spec_info_topAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_spec_info_topAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_spec_info_topAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_spec_info_topAddr_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_spec_info_topAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_spec_info_topAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_spec_info_topAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_spec_info_topAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_spec_info_topAddr_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_spec_info_topAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_isCall(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_isCall_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_isCall(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_isCall_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_isRet(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_isRet_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_isRet(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_isRet_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_isJalr(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_isJalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_isJalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_isJalr_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_isJalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_isJalr(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_isJalr\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_isJalr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_isJalr_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_isJalr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_valid_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_valid_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_brSlots_0_offset(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_brSlots_0_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_brSlots_0_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_offset_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_brSlots_0_offset(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_brSlots_0_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_brSlots_0_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_offset_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_brSlots_0_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_brSlots_0_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_brSlots_0_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_sharing_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_brSlots_0_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_brSlots_0_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_brSlots_0_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_sharing_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_brSlots_0_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_brSlots_0_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_brSlots_0_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_valid_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_brSlots_0_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_brSlots_0_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_brSlots_0_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_valid_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_brSlots_0_lower(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_brSlots_0_lower\n"); );
    // Init
    SData/*11:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_brSlots_0_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_lower_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(12, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_brSlots_0_lower(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_brSlots_0_lower\n"); );
    // Init
    SData/*11:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_brSlots_0_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_lower_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_brSlots_0_tarStat(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_brSlots_0_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_brSlots_0_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_tarStat_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_brSlots_0_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(2, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_brSlots_0_tarStat(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_brSlots_0_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_brSlots_0_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_tarStat_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_brSlots_0_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (3U & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_tailSlot_offset(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_tailSlot_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_tailSlot_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_offset_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_tailSlot_offset(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_tailSlot_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_tailSlot_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_offset_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_tailSlot_sharing(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_tailSlot_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_tailSlot_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_sharing_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_tailSlot_sharing(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_tailSlot_sharing\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_tailSlot_sharing");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_sharing_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_sharing_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_tailSlot_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_tailSlot_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_tailSlot_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_valid_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_tailSlot_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_tailSlot_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_tailSlot_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_valid_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_tailSlot_lower(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_tailSlot_lower\n"); );
    // Init
    IData/*19:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_tailSlot_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_lower_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(20, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_tailSlot_lower(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_tailSlot_lower\n"); );
    // Init
    IData/*19:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_tailSlot_lower");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_lower_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_lower_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfffffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_tailSlot_tarStat(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_tailSlot_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_tailSlot_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_tarStat_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_tailSlot_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(2, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_tailSlot_tarStat(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_tailSlot_tarStat\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_tailSlot_tarStat");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_tarStat_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_tailSlot_tarStat_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (3U & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_pftAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_pftAddr\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_pftAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_pftAddr_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_pftAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_out_last_stage_ftb_entry_pftAddr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_pftAddr\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_pftAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_pftAddr_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_pftAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_carry(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_carry\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_carry");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_carry_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_carry_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_carry(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_carry\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_carry");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_carry_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_carry_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_last_may_be_rvi_call(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_last_may_be_rvi_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_last_may_be_rvi_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_last_may_be_rvi_call_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_last_may_be_rvi_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_last_may_be_rvi_call(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_last_may_be_rvi_call\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_last_may_be_rvi_call");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_last_may_be_rvi_call_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_last_may_be_rvi_call_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_always_taken_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_always_taken_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_always_taken_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_always_taken_0_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_always_taken_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_always_taken_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_always_taken_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_always_taken_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_always_taken_0_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_always_taken_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_out_last_stage_ftb_entry_always_taken_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_out_last_stage_ftb_entry_always_taken_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_last_stage_ftb_entry_always_taken_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_out_last_stage_ftb_entry_always_taken_1_t __Vcb = (VRAS__Vcb_get_io_out_last_stage_ftb_entry_always_taken_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_out_last_stage_ftb_entry_always_taken_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_out_last_stage_ftb_entry_always_taken_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_last_stage_ftb_entry_always_taken_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_out_last_stage_ftb_entry_always_taken_1_t __Vcb = (VRAS__Vcb_set_io_out_last_stage_ftb_entry_always_taken_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_ctrl_ras_enable(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_ctrl_ras_enable\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_ctrl_ras_enable");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_ctrl_ras_enable_t __Vcb = (VRAS__Vcb_get_io_ctrl_ras_enable_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_ctrl_ras_enable(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_ctrl_ras_enable\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_ctrl_ras_enable");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_ctrl_ras_enable_t __Vcb = (VRAS__Vcb_set_io_ctrl_ras_enable_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s0_fire_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s0_fire_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s0_fire_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s0_fire_0_t __Vcb = (VRAS__Vcb_get_io_s0_fire_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s0_fire_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s0_fire_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s0_fire_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s0_fire_0_t __Vcb = (VRAS__Vcb_set_io_s0_fire_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s0_fire_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s0_fire_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s0_fire_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s0_fire_1_t __Vcb = (VRAS__Vcb_get_io_s0_fire_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s0_fire_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s0_fire_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s0_fire_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s0_fire_1_t __Vcb = (VRAS__Vcb_set_io_s0_fire_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s0_fire_2(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s0_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s0_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s0_fire_2_t __Vcb = (VRAS__Vcb_get_io_s0_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s0_fire_2(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s0_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s0_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s0_fire_2_t __Vcb = (VRAS__Vcb_set_io_s0_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s0_fire_3(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s0_fire_3\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s0_fire_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s0_fire_3_t __Vcb = (VRAS__Vcb_get_io_s0_fire_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s0_fire_3(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s0_fire_3\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s0_fire_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s0_fire_3_t __Vcb = (VRAS__Vcb_set_io_s0_fire_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s1_fire_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s1_fire_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s1_fire_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s1_fire_0_t __Vcb = (VRAS__Vcb_get_io_s1_fire_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s1_fire_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s1_fire_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s1_fire_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s1_fire_0_t __Vcb = (VRAS__Vcb_set_io_s1_fire_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s1_fire_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s1_fire_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s1_fire_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s1_fire_1_t __Vcb = (VRAS__Vcb_get_io_s1_fire_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s1_fire_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s1_fire_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s1_fire_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s1_fire_1_t __Vcb = (VRAS__Vcb_set_io_s1_fire_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s1_fire_2(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s1_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s1_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s1_fire_2_t __Vcb = (VRAS__Vcb_get_io_s1_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s1_fire_2(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s1_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s1_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s1_fire_2_t __Vcb = (VRAS__Vcb_set_io_s1_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s1_fire_3(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s1_fire_3\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s1_fire_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s1_fire_3_t __Vcb = (VRAS__Vcb_get_io_s1_fire_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s1_fire_3(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s1_fire_3\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s1_fire_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s1_fire_3_t __Vcb = (VRAS__Vcb_set_io_s1_fire_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s2_fire_0(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s2_fire_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s2_fire_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s2_fire_0_t __Vcb = (VRAS__Vcb_get_io_s2_fire_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s2_fire_0(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s2_fire_0\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s2_fire_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s2_fire_0_t __Vcb = (VRAS__Vcb_set_io_s2_fire_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s2_fire_1(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s2_fire_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s2_fire_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s2_fire_1_t __Vcb = (VRAS__Vcb_get_io_s2_fire_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s2_fire_1(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s2_fire_1\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s2_fire_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s2_fire_1_t __Vcb = (VRAS__Vcb_set_io_s2_fire_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s2_fire_2(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s2_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s2_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s2_fire_2_t __Vcb = (VRAS__Vcb_get_io_s2_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s2_fire_2(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s2_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s2_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s2_fire_2_t __Vcb = (VRAS__Vcb_set_io_s2_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s2_fire_3(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s2_fire_3\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s2_fire_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s2_fire_3_t __Vcb = (VRAS__Vcb_get_io_s2_fire_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s2_fire_3(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s2_fire_3\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s2_fire_3");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s2_fire_3_t __Vcb = (VRAS__Vcb_set_io_s2_fire_3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s3_fire_2(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s3_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s3_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s3_fire_2_t __Vcb = (VRAS__Vcb_get_io_s3_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s3_fire_2(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s3_fire_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s3_fire_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s3_fire_2_t __Vcb = (VRAS__Vcb_set_io_s3_fire_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_s3_redirect_2(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_s3_redirect_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_s3_redirect_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_s3_redirect_2_t __Vcb = (VRAS__Vcb_get_io_s3_redirect_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_s3_redirect_2(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_s3_redirect_2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_s3_redirect_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_s3_redirect_2_t __Vcb = (VRAS__Vcb_set_io_s3_redirect_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_valid_t __Vcb = (VRAS__Vcb_get_io_update_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_update_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_valid_t __Vcb = (VRAS__Vcb_set_io_update_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_ftb_entry_isCall(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_ftb_entry_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_ftb_entry_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_ftb_entry_isCall_t __Vcb = (VRAS__Vcb_get_io_update_bits_ftb_entry_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_update_bits_ftb_entry_isCall(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_ftb_entry_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_ftb_entry_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_ftb_entry_isCall_t __Vcb = (VRAS__Vcb_set_io_update_bits_ftb_entry_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_ftb_entry_isRet(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_ftb_entry_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_ftb_entry_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_ftb_entry_isRet_t __Vcb = (VRAS__Vcb_get_io_update_bits_ftb_entry_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_update_bits_ftb_entry_isRet(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_ftb_entry_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_ftb_entry_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_ftb_entry_isRet_t __Vcb = (VRAS__Vcb_set_io_update_bits_ftb_entry_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_ftb_entry_tailSlot_offset(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_ftb_entry_tailSlot_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_ftb_entry_tailSlot_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_ftb_entry_tailSlot_offset_t __Vcb = (VRAS__Vcb_get_io_update_bits_ftb_entry_tailSlot_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_update_bits_ftb_entry_tailSlot_offset(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_ftb_entry_tailSlot_offset\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_ftb_entry_tailSlot_offset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_ftb_entry_tailSlot_offset_t __Vcb = (VRAS__Vcb_set_io_update_bits_ftb_entry_tailSlot_offset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_ftb_entry_tailSlot_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_ftb_entry_tailSlot_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_ftb_entry_tailSlot_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_ftb_entry_tailSlot_valid_t __Vcb = (VRAS__Vcb_get_io_update_bits_ftb_entry_tailSlot_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_update_bits_ftb_entry_tailSlot_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_ftb_entry_tailSlot_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_ftb_entry_tailSlot_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_ftb_entry_tailSlot_valid_t __Vcb = (VRAS__Vcb_set_io_update_bits_ftb_entry_tailSlot_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_cfi_idx_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_cfi_idx_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_cfi_idx_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_cfi_idx_valid_t __Vcb = (VRAS__Vcb_get_io_update_bits_cfi_idx_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_update_bits_cfi_idx_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_cfi_idx_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_cfi_idx_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_cfi_idx_valid_t __Vcb = (VRAS__Vcb_set_io_update_bits_cfi_idx_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_cfi_idx_bits(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_cfi_idx_bits\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_cfi_idx_bits");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_cfi_idx_bits_t __Vcb = (VRAS__Vcb_get_io_update_bits_cfi_idx_bits_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_update_bits_cfi_idx_bits(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_cfi_idx_bits\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_cfi_idx_bits");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_cfi_idx_bits_t __Vcb = (VRAS__Vcb_set_io_update_bits_cfi_idx_bits_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_jmp_taken(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_jmp_taken\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_jmp_taken");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_jmp_taken_t __Vcb = (VRAS__Vcb_get_io_update_bits_jmp_taken_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_update_bits_jmp_taken(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_jmp_taken\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_jmp_taken");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_jmp_taken_t __Vcb = (VRAS__Vcb_set_io_update_bits_jmp_taken_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_update_bits_meta(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_update_bits_meta\n"); );
    // Init
    VlWide<8>/*250:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_update_bits_meta");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_update_bits_meta_t __Vcb = (VRAS__Vcb_get_io_update_bits_meta_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_W(251, value + 8 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_update_bits_meta(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_update_bits_meta\n"); );
    // Init
    VlWide<8>/*250:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_update_bits_meta");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_update_bits_meta_t __Vcb = (VRAS__Vcb_set_io_update_bits_meta_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVLV(251,value__Vcvt,value + 0);
(*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_valid_t __Vcb = (VRAS__Vcb_get_io_redirect_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_valid_t __Vcb = (VRAS__Vcb_set_io_redirect_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_level(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_level\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_level");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_level_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_level_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_level(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_level\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_level");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_level_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_level_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_pc(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_pc\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_pc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pc_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_redirect_bits_cfiUpdate_pc(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_pc\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_pc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pc_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1ffffffffffULL & VL_SET_Q_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_pd_isRVC(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_pd_isRVC\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_pd_isRVC");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pd_isRVC_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pd_isRVC_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_cfiUpdate_pd_isRVC(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_pd_isRVC\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_pd_isRVC");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pd_isRVC_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pd_isRVC_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_pd_isCall(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_pd_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_pd_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pd_isCall_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pd_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_cfiUpdate_pd_isCall(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_pd_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_pd_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pd_isCall_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pd_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_pd_isRet(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_pd_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_pd_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pd_isRet_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_pd_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_cfiUpdate_pd_isRet(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_pd_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_pd_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pd_isRet_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_pd_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_ssp(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_ssp\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_ssp");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_ssp_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_ssp_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_redirect_bits_cfiUpdate_ssp(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_ssp\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_ssp");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_ssp_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_ssp_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_sctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_sctr\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_sctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_sctr_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_sctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(2, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_redirect_bits_cfiUpdate_sctr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_sctr\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_sctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_sctr_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_sctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (3U & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_TOSW_flag(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_TOSW_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_TOSW_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSW_flag_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSW_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_cfiUpdate_TOSW_flag(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_TOSW_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_TOSW_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSW_flag_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSW_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_TOSW_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_TOSW_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_TOSW_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSW_value_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSW_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_redirect_bits_cfiUpdate_TOSW_value(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_TOSW_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_TOSW_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSW_value_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSW_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1fU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_TOSR_flag(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_TOSR_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_TOSR_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSR_flag_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSR_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_cfiUpdate_TOSR_flag(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_TOSR_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_TOSR_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSR_flag_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSR_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_TOSR_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_TOSR_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_TOSR_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSR_value_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_TOSR_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_redirect_bits_cfiUpdate_TOSR_value(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_TOSR_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_TOSR_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSR_value_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_TOSR_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1fU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_NOS_flag(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_NOS_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_NOS_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_NOS_flag_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_NOS_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::set_io_redirect_bits_cfiUpdate_NOS_flag(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_NOS_flag\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_NOS_flag");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_NOS_flag_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_NOS_flag_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_io_redirect_bits_cfiUpdate_NOS_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_io_redirect_bits_cfiUpdate_NOS_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_redirect_bits_cfiUpdate_NOS_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_io_redirect_bits_cfiUpdate_NOS_value_t __Vcb = (VRAS__Vcb_get_io_redirect_bits_cfiUpdate_NOS_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::set_io_redirect_bits_cfiUpdate_NOS_value(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::set_io_redirect_bits_cfiUpdate_NOS_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_redirect_bits_cfiUpdate_NOS_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_set_io_redirect_bits_cfiUpdate_NOS_value_t __Vcb = (VRAS__Vcb_set_io_redirect_bits_cfiUpdate_NOS_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0x1fU & VL_SET_I_SVLV(value));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VRAS::get_RAS_s3_push(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_s3_push\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_s3_push");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_s3_push_t __Vcb = (VRAS__Vcb_get_RAS_s3_push_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_s3_pop(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_s3_pop\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_s3_pop");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_s3_pop_t __Vcb = (VRAS__Vcb_get_RAS_s3_pop_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_s3_pushed_in_s2(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_s3_pushed_in_s2\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_s3_pushed_in_s2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_s3_pushed_in_s2_t __Vcb = (VRAS__Vcb_get_RAS_s3_pushed_in_s2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_s2_spec_push(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_s2_spec_push\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_s2_spec_push");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_s2_spec_push_t __Vcb = (VRAS__Vcb_get_RAS_s2_spec_push_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_realPush(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_realPush\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_realPush");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_realPush_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_realPush_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_TOSR_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_TOSR_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_TOSR_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_TOSR_value_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_TOSR_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_TOSW_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_TOSW_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_TOSW_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_TOSW_value_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_TOSW_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_BOS_value(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_BOS_value\n"); );
    // Init
    CData/*4:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_BOS_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_BOS_value_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_BOS_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(5, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_ssp(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_ssp\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_ssp");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_ssp_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_ssp_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_nsp(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_nsp\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_nsp");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_nsp_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_nsp_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_overflowed(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_overflowed\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_overflowed");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_overflowed_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_overflowed_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_writeBypassValid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_writeBypassValid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_writeBypassValid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_writeBypassValid_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_writeBypassValid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_timingTop_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_timingTop_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_timingTop_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_timingTop_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_timingTop_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_sctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_sctr\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_sctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_sctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_sctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(3, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_0_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_0_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_0_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_0_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_0_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_1_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_1_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_1_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_1_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_1_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_2_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_2_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_2_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_2_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_2_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_3_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_3_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_3_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_3_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_3_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_4_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_4_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_4_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_4_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_4_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_5_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_5_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_5_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_5_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_5_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_6_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_6_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_6_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_6_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_6_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_7_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_7_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_7_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_7_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_7_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_8_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_8_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_8_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_8_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_8_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_9_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_9_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_9_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_9_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_9_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_10_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_10_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_10_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_10_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_10_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_11_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_11_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_11_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_11_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_11_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_12_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_12_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_12_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_12_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_12_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_13_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_13_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_13_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_13_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_13_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_14_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_14_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_14_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_14_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_14_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_15_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_15_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_15_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_15_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_15_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_16_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_16_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_16_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_16_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_16_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_17_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_17_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_17_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_17_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_17_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_18_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_18_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_18_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_18_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_18_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_19_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_19_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_19_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_19_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_19_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_20_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_20_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_20_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_20_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_20_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_21_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_21_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_21_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_21_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_21_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_22_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_22_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_22_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_22_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_22_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_23_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_23_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_23_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_23_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_23_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_24_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_24_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_24_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_24_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_24_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_25_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_25_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_25_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_25_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_25_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_26_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_26_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_26_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_26_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_26_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_27_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_27_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_27_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_27_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_27_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_28_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_28_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_28_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_28_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_28_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_29_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_29_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_29_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_29_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_29_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_30_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_30_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_30_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_30_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_30_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_spec_queue_31_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_spec_queue_31_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_spec_queue_31_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_spec_queue_31_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_spec_queue_31_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_0_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_0_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_0_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_0_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_0_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_1_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_1_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_1_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_1_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_1_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_2_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_2_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_2_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_2_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_2_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_3_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_3_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_3_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_3_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_3_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_4_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_4_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_4_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_4_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_4_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_5_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_5_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_5_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_5_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_5_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_6_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_6_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_6_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_6_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_6_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_7_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_7_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_7_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_7_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_7_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_8_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_8_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_8_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_8_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_8_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_9_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_9_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_9_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_9_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_9_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_10_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_10_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_10_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_10_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_10_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_11_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_11_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_11_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_11_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_11_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_12_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_12_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_12_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_12_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_12_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_13_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_13_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_13_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_13_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_13_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_14_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_14_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_14_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_14_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_14_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_15_retAddr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_15_retAddr\n"); );
    // Init
    QData/*40:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_15_retAddr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_15_retAddr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_15_retAddr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(41, value + 2 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_0_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_0_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_0_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_0_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_0_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_1_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_1_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_1_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_1_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_1_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_2_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_2_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_2_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_2_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_2_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_3_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_3_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_3_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_3_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_3_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_4_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_4_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_4_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_4_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_4_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_5_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_5_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_5_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_5_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_5_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_6_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_6_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_6_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_6_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_6_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_7_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_7_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_7_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_7_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_7_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_8_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_8_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_8_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_8_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_8_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_9_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_9_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_9_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_9_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_9_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_10_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_10_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_10_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_10_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_10_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_11_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_11_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_11_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_11_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_11_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_12_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_12_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_12_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_12_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_12_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_13_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_13_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_13_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_13_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_13_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_14_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_14_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_14_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_14_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_14_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_commit_stack_15_ctr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_commit_stack_15_ctr\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_commit_stack_15_ctr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_commit_stack_15_ctr_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_commit_stack_15_ctr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VRAS::get_RAS_RASStack_io_spec_push_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_spec_push_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_spec_push_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_spec_push_valid_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_spec_push_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_spec_pop_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_spec_pop_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_spec_pop_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_spec_pop_valid_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_spec_pop_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_commit_push_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_commit_push_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_commit_push_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_commit_push_valid_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_commit_push_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_commit_pop_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_commit_pop_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_commit_pop_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_commit_pop_valid_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_commit_pop_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_redirect_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_redirect_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_redirect_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_redirect_valid_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_redirect_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_redirect_isCall(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_redirect_isCall\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_redirect_isCall");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_redirect_isCall_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_redirect_isCall_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_redirect_isRet(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_redirect_isRet\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_redirect_isRet");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_redirect_isRet_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_redirect_isRet_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VRAS::get_RAS_RASStack_io_s3_cancel(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root::get_RAS_RASStack_io_s3_cancel\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_RAS_RASStack_io_s3_cancel");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRAS__Vcb_get_RAS_RASStack_io_s3_cancel_t __Vcb = (VRAS__Vcb_get_RAS_RASStack_io_s3_cancel_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VRAS__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}
