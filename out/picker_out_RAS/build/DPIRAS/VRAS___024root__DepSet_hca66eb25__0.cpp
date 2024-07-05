// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAS.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VRAS___024root.h"

void VRAS___024root___sequent__TOP__2(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__3(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__8(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__9(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__10(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__11(VRAS___024root* vlSelf);
void VRAS___024root___multiclk__TOP__12(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__13(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__14(VRAS___024root* vlSelf);
void VRAS___024root___multiclk__TOP__15(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__16(VRAS___024root* vlSelf);
void VRAS___024root___sequent__TOP__17(VRAS___024root* vlSelf);
void VRAS___024root___multiclk__TOP__18(VRAS___024root* vlSelf);
void VRAS___024root___multiclk__TOP__19(VRAS___024root* vlSelf);

void VRAS___024root___eval(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___eval\n"); );
    // Body
    if (vlSelf->__Vdpi_export_trigger) {
        VRAS___024root___sequent__TOP__2(vlSelf);
        VRAS___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock)))) {
        VRAS___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock))) 
         | ((IData)(vlSelf->RAS_top__DOT__reset) & 
            (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__reset))))) {
        VRAS___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VRAS___024root___sequent__TOP__10(vlSelf);
        VRAS___024root___sequent__TOP__11(vlSelf);
    }
    if ((((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock))) 
         | (IData)(vlSelf->__Vdpi_export_trigger))) {
        VRAS___024root___multiclk__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__Vdpi_export_trigger) {
        VRAS___024root___sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock)))) {
        VRAS___024root___sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (((((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock))) 
          | ((IData)(vlSelf->RAS_top__DOT__reset) & 
             (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__reset)))) 
         | (IData)(vlSelf->__Vdpi_export_trigger))) {
        VRAS___024root___multiclk__TOP__15(vlSelf);
    }
    if ((((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock))) 
         | ((IData)(vlSelf->RAS_top__DOT__reset) & 
            (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__reset))))) {
        VRAS___024root___sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (vlSelf->__Vdpi_export_trigger) {
        VRAS___024root___sequent__TOP__17(vlSelf);
    }
    if ((((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock))) 
         | (IData)(vlSelf->__Vdpi_export_trigger))) {
        VRAS___024root___multiclk__TOP__18(vlSelf);
    }
    if (((((IData)(vlSelf->RAS_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__clock))) 
          | ((IData)(vlSelf->RAS_top__DOT__reset) & 
             (~ (IData)(vlSelf->__Vclklast__TOP__RAS_top__DOT__reset)))) 
         | (IData)(vlSelf->__Vdpi_export_trigger))) {
        VRAS___024root___multiclk__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__RAS_top__DOT__clock = vlSelf->RAS_top__DOT__clock;
    vlSelf->__Vclklast__TOP__RAS_top__DOT__reset = vlSelf->RAS_top__DOT__reset;
    vlSelf->__Vdpi_export_trigger = 0U;
}

#ifdef VL_DEBUG
void VRAS___024root___eval_debug_assertions(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
