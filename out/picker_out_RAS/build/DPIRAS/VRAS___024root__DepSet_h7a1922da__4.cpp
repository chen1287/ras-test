// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAS.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VRAS__Syms.h"
#include "VRAS___024root.h"

VL_INLINE_OPT void VRAS___024root___sequent__TOP__11(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___sequent__TOP__11\n"); );
    // Body
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7448]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7449]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7458]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7459]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7460]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7461]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7462]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7463]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7464]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7465]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7466]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7467]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7468]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7469]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7470]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7471]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7472]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7473]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7474]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7475]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7476]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7477]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7478]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7479]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7480]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7481]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7482]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7483]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7484]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7485]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7486]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7487]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7488]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7489]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7490]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7491]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7492]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7493]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7494]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7495]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7496]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7497]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7498]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7507]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7508]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7509]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7510]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7511]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7512]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7513]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7514]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7515]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7516]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7517]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7518]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7519]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7520]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7521]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7522]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7523]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7524]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7525]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7526]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7527]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7528]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7529]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7530]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7531]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7532]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7533]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7534]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7535]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7536]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7537]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7538]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7539]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7540]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7541]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7542]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7543]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7544]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7545]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7546]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7547]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7556]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7557]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7558]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7559]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7560]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7561]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7562]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7563]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7564]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7565]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7566]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7567]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7568]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7569]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7570]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7571]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7572]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7573]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7574]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7575]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7576]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7577]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7578]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7579]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7580]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7581]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7582]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7583]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7584]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7585]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7586]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7587]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7588]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7589]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7590]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7591]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7592]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7593]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7594]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7595]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7596]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7654]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7655]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7656]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7657]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7658]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7659]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7660]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7661]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7662]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7663]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7664]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7665]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7666]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7667]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7668]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7669]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7670]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7671]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7672]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7673]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7674]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7675]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7676]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7677]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7678]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7679]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7680]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7681]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7682]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7683]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7684]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7685]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7686]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7687]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7688]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7689]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7690]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7691]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7692]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7693]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7694]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7703]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7704]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7705]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7706]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7707]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7708]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7709]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7710]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7711]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7712]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7713]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7714]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7715]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7716]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7717]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7718]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7719]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7720]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7721]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7722]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7723]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7724]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7725]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7726]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7727]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7728]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7729]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7730]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7731]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7732]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7733]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7734]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7735]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7736]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7737]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7738]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7739]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7740]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7741]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7742]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7743]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7752]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7753]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7754]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7755]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7756]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7757]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7758]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7759]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7760]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7761]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7762]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7763]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7764]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7765]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7766]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7767]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7768]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7769]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7770]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7771]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7772]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7773]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7774]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7775]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7776]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7777]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7778]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7779]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7780]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7781]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7782]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7783]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7784]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7785]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7786]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7787]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7788]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7789]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7790]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7791]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7792]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7801]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7802]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7803]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7804]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7805]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7806]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7807]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7808]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7809]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7810]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7811]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7812]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7813]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7814]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7815]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7816]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7817]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7818]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7819]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7820]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7821]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7822]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7823]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7824]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7825]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7826]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7827]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7828]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7829]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7830]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7831]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7832]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7833]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7834]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7835]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7836]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7837]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7838]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7839]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7840]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7841]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr)))) {
        ++(vlSymsp->__Vcoverage[7850]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7851]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7852]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7853]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7854]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7855]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7856]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7857]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7858]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7859]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7860]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7861]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7862]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7863]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7864]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7865]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7866]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7867]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7868]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7869]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7870]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7871]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7872]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7873]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7874]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7875]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7876]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7877]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7878]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7879]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7880]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7881]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7882]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7883]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7884]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7885]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7886]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7887]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7888]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7889]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[7890]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_retAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0U] 
        = (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_retAddr);
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[1U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_retAddr) 
            << 9U) | (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_retAddr 
                              >> 0x20U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_retAddr) 
            << 0x12U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_retAddr) 
                          >> 0x17U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_retAddr 
                                                >> 0x20U)) 
                                       << 9U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[3U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_retAddr) 
            << 0x1bU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_retAddr) 
                          >> 0xeU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_retAddr 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[4U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_retAddr) 
            >> 5U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_retAddr 
                               >> 0x20U)) << 0x1bU));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[5U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_retAddr) 
            << 4U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_retAddr 
                               >> 0x20U)) >> 5U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[6U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_retAddr) 
            << 0xdU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_retAddr) 
                         >> 0x1cU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_retAddr 
                                               >> 0x20U)) 
                                      << 4U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[7U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_retAddr) 
            << 0x16U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_retAddr) 
                          >> 0x13U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_retAddr 
                                                >> 0x20U)) 
                                       << 0xdU)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[8U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_retAddr) 
            << 0x1fU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_retAddr) 
                          >> 0xaU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_retAddr 
                                               >> 0x20U)) 
                                      << 0x16U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[9U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_retAddr) 
            >> 1U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                               >> 0x20U)) << 0x1fU));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0xaU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
            << 8U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_retAddr 
                               >> 0x20U)) >> 1U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0xbU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
            << 0x11U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_retAddr) 
                          >> 0x18U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_retAddr 
                                                >> 0x20U)) 
                                       << 8U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0xcU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
            << 0x1aU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_retAddr) 
                          >> 0xfU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_retAddr 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0xdU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_retAddr) 
            >> 6U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                               >> 0x20U)) << 0x1aU));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0xeU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
            << 3U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_retAddr 
                               >> 0x20U)) >> 6U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0xfU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
            << 0xcU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_retAddr) 
                         >> 0x1dU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_retAddr 
                                               >> 0x20U)) 
                                      << 3U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x10U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
            << 0x15U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_retAddr) 
                          >> 0x14U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_retAddr 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x11U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
            << 0x1eU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_retAddr) 
                          >> 0xbU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_retAddr 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x12U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_retAddr) 
            >> 2U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                               >> 0x20U)) << 0x1eU));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x13U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
            << 7U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_retAddr 
                               >> 0x20U)) >> 2U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x14U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
            << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_retAddr) 
                          >> 0x19U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_retAddr 
                                                >> 0x20U)) 
                                       << 7U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x15U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
            << 0x19U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_retAddr) 
                          >> 0x10U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_retAddr 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x16U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_retAddr) 
            >> 7U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                               >> 0x20U)) << 0x19U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x17U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
            << 2U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_retAddr 
                               >> 0x20U)) >> 7U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x18U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
            << 0xbU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_retAddr) 
                         >> 0x1eU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_retAddr 
                                               >> 0x20U)) 
                                      << 2U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x19U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
            << 0x14U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_retAddr) 
                          >> 0x15U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_retAddr 
                                                >> 0x20U)) 
                                       << 0xbU)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x1aU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
            << 0x1dU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_retAddr) 
                          >> 0xcU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_retAddr 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x1bU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_retAddr) 
            >> 3U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                               >> 0x20U)) << 0x1dU));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x1cU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
            << 6U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_retAddr 
                               >> 0x20U)) >> 3U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x1dU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
            << 0xfU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr) 
                         >> 0x1aU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_retAddr 
                                               >> 0x20U)) 
                                      << 6U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x1eU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr) 
                          >> 0x11U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_retAddr 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x1fU] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr) 
            >> 8U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                               >> 0x20U)) << 0x18U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x20U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
            << 1U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_retAddr 
                               >> 0x20U)) >> 8U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x21U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
            << 0xaU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr) 
                         >> 0x1fU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_retAddr 
                                               >> 0x20U)) 
                                      << 1U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x22U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
            << 0x13U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_retAddr) 
                          >> 0x16U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_retAddr 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x23U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
            << 0x1cU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr) 
                          >> 0xdU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_retAddr 
                                               >> 0x20U)) 
                                      << 0x13U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x24U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr) 
            >> 4U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                               >> 0x20U)) << 0x1cU));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x25U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
            << 5U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_retAddr 
                               >> 0x20U)) >> 4U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x26U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
            << 0xeU) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr) 
                         >> 0x1bU) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_retAddr 
                                               >> 0x20U)) 
                                      << 5U)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x27U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
            << 0x17U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr) 
                          >> 0x12U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_retAddr 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_0[0x28U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr) 
            >> 9U) | ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_retAddr 
                               >> 0x20U)) << 0x17U));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)))) {
        ++(vlSymsp->__Vcoverage[8096]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)))) {
        ++(vlSymsp->__Vcoverage[8097]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)))) {
        ++(vlSymsp->__Vcoverage[8098]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)))) {
        ++(vlSymsp->__Vcoverage[8099]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)))) {
        ++(vlSymsp->__Vcoverage[8100]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_12_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6911]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6912]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6913]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6914]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6915]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6916]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6917]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)))) {
        ++(vlSymsp->__Vcoverage[6918]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_11_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6666]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6667]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6668]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6669]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6670]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6671]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6672]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)))) {
        ++(vlSymsp->__Vcoverage[6673]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_6_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6862]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6863]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6864]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6865]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6866]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6867]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6868]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)))) {
        ++(vlSymsp->__Vcoverage[6869]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_10_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6816]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6817]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6818]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6819]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)))) {
        ++(vlSymsp->__Vcoverage[6820]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_9_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6568]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6569]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6570]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6571]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6572]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6573]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6574]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)))) {
        ++(vlSymsp->__Vcoverage[6575]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_4_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_8_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6719]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6721]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)))) {
        ++(vlSymsp->__Vcoverage[6722]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_7_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6425]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6426]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6427]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)))) {
        ++(vlSymsp->__Vcoverage[6428]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_1_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6617]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6618]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6619]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6620]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6621]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6622]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6623]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)))) {
        ++(vlSymsp->__Vcoverage[6624]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_5_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6519]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6520]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6521]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6522]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6523]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6524]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6525]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)))) {
        ++(vlSymsp->__Vcoverage[6526]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_3_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_2_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_0_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7009]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7010]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7011]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7012]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7013]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7014]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7015]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)))) {
        ++(vlSymsp->__Vcoverage[7016]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_13_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_14_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_15_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_16_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7205]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7206]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7207]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7208]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7209]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7210]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7211]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)))) {
        ++(vlSymsp->__Vcoverage[7212]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_17_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7254]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7255]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7256]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7257]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7258]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7259]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7260]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)))) {
        ++(vlSymsp->__Vcoverage[7261]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_18_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7303]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7304]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7305]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7306]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7307]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7308]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7309]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)))) {
        ++(vlSymsp->__Vcoverage[7310]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_19_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7352]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7353]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7354]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7355]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7356]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7357]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7358]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)))) {
        ++(vlSymsp->__Vcoverage[7359]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_20_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7401]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7402]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7403]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7404]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7405]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7406]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7407]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)))) {
        ++(vlSymsp->__Vcoverage[7408]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_21_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7450]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7451]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7452]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7453]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7454]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7455]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7456]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)))) {
        ++(vlSymsp->__Vcoverage[7457]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_22_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7499]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7500]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7501]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7502]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7503]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7504]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7505]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)))) {
        ++(vlSymsp->__Vcoverage[7506]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_23_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7548]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7549]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7550]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7551]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7552]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7553]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7554]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)))) {
        ++(vlSymsp->__Vcoverage[7555]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_24_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7597]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7598]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7599]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7600]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7601]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7602]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7603]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)))) {
        ++(vlSymsp->__Vcoverage[7604]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_25_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7646]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7647]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7648]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7649]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7650]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7651]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7652]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)))) {
        ++(vlSymsp->__Vcoverage[7653]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_26_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7695]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7696]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7697]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7698]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7699]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7700]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7701]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)))) {
        ++(vlSymsp->__Vcoverage[7702]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_27_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7744]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7745]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7746]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7747]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7748]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7749]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7750]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)))) {
        ++(vlSymsp->__Vcoverage[7751]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_28_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7793]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7794]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7795]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7796]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7797]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7798]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7799]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)))) {
        ++(vlSymsp->__Vcoverage[7800]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_29_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7842]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7843]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7844]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7845]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7846]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7847]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7848]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)))) {
        ++(vlSymsp->__Vcoverage[7849]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_30_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr)));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7891]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xfeU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7892]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xfdU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7893]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xfbU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7894]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xf7U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7895]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xefU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7896]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xdfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (0x20U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7897]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0xbfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (0x40U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)))) {
        ++(vlSymsp->__Vcoverage[7898]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr 
            = ((0x7fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__spec_queue_31_ctr)) 
               | (0x80U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[0U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_3_ctr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_2_ctr) 
                          << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_1_ctr) 
                                        << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_0_ctr))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[1U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_7_ctr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_6_ctr) 
                          << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_5_ctr) 
                                        << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_4_ctr))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[2U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_11_ctr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_10_ctr) 
                          << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_9_ctr) 
                                        << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_8_ctr))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[3U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_15_ctr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_14_ctr) 
                          << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_13_ctr) 
                                        << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_12_ctr))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[4U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_19_ctr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_18_ctr) 
                          << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_17_ctr) 
                                        << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_16_ctr))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[5U] 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_23_ctr) 
            << 0x18U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_22_ctr) 
                          << 0x10U) | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_21_ctr) 
                                        << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_20_ctr))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[6U] 
        = (IData)((((QData)((IData)((((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                                      << 0x18U) | (
                                                   ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)))))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr))))))));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_2[7U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_31_ctr) 
                                       << 0x18U) | 
                                      (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_30_ctr) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_29_ctr) 
                                         << 8U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_28_ctr)))))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_27_ctr) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_26_ctr) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_25_ctr) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__spec_queue_24_ctr))))))) 
                   >> 0x20U));
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid 
        = ((~ (IData)(vlSelf->RAS_top__DOT__reset)) 
           & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValidWire));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr)))) {
        ++(vlSymsp->__Vcoverage[5432]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5433]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5434]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5435]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5436]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5437]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5438]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5439]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5440]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5441]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5442]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5443]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5444]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5445]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5446]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5447]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5448]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5449]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5450]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5451]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5452]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5453]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5454]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5455]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5456]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5457]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5458]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5459]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5460]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5461]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5462]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5463]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5464]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5465]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5466]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5467]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5468]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5469]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5470]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5471]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                  ^ vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[5472]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_spec_pop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__timingTop_retAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (vlSelf->RAS_top__DOT__reset) {
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag = 0U;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag = 0U;
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value = 0U;
    } else {
        if (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_75) {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag 
                = (1U & (((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_20)) 
                         >> 5U));
        } else if (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_73) {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag 
                = (1U & (((IData)(1U) + vlSelf->RAS_top__DOT__io_update_bits_meta[0U]) 
                         >> 5U));
        } else if ((((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_cancel) 
                     & (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push)) 
                    & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_23))) {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag 
                = (1U & (((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_20)) 
                         >> 5U));
        } else if (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_21) {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag 
                = (1U & (((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_20)) 
                         >> 5U));
        }
        if (vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG) {
            if (vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isCall) {
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag 
                    = (1U & (1U & (((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_74)) 
                                   >> 5U)));
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_74)));
            } else {
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag 
                    = (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_flag));
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value 
                    = (0x1fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_TOSW_value));
            }
        } else if (vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_cancel) {
            if (vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push) {
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag 
                    = (1U & (1U & (((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_22)) 
                                   >> 5U)));
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_22)));
            } else {
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag 
                    = (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_flag));
                vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value 
                    = (0x1fU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_meta_TOSW_value));
            }
        } else if (vlSelf->RAS_top__DOT__RAS__DOT__s2_spec_push) {
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag 
                = (1U & (((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_19)) 
                         >> 5U));
            vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_19)));
        }
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_24 
        = (0xffU & (((0U == (0x1fU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp) 
                                      << 3U))) ? 0U
                      : (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                         (((IData)(7U) + (0x7fU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp) 
                                                  << 3U))))) 
                    | (vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_5[
                       (3U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp) 
                              >> 2U))] >> (0x1fU & 
                                           ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__nsp) 
                                            << 3U)))));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassValid))) {
        ++(vlSymsp->__Vcoverage[8157]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__writeBypassValid 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__writeBypassValid;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_flag))) {
        ++(vlSymsp->__Vcoverage[8095]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__BOS_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_20 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_flag) 
            << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__BOS_value));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_flag))) {
        ++(vlSymsp->__Vcoverage[5535]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_flag 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5536]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x1eU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (1U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((2U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5537]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x1dU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (2U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((4U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5538]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x1bU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (4U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((8U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value) 
               ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5539]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0x17U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (8U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    if ((0x10U & ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value) 
                  ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)))) {
        ++(vlSymsp->__Vcoverage[5540]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value 
            = ((0xfU & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_TOSW_value)) 
               | (0x10U & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value)));
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT___GEN_19 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_flag) 
            << 5U) | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__TOSW_value));
    vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG 
        = ((~ (IData)(vlSelf->RAS_top__DOT__reset)) 
           & (IData)(vlSelf->RAS_top__DOT__io_redirect_valid));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_valid_last_REG))) {
        ++(vlSymsp->__Vcoverage[5104]);
        vlSelf->RAS_top__DOT__RAS__DOT____Vtogcov__redirect_next_valid_last_REG 
            = vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG;
    }
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isRet 
        = (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_valid_last_REG) 
            & (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rlevel))) 
           & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__redirect_next_bits_rcfiUpdate_pd_isRet));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isRet) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isRet))) {
        ++(vlSymsp->__Vcoverage[5477]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_redirect_isRet 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_redirect_isRet;
    }
}

VL_INLINE_OPT void VRAS___024root___multiclk__TOP__12(VRAS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAS___024root___multiclk__TOP__12\n"); );
    // Body
    if (vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_is_jalr) {
        if (vlSelf->RAS_top__DOT__RAS__DOT___GEN_0) {
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__s3_top;
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__s3_top;
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__s3_top;
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                = vlSelf->RAS_top__DOT__RAS__DOT__s3_top;
        } else {
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
            vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
        }
    } else {
        vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
        vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
        vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
        vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
            = vlSelf->RAS_top__DOT__io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0)))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1)))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_3) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3)))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_3)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_2) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2)))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_pc_2)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_pc_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr)))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_last_stage_spec_info_topAddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_last_stage_spec_info_topAddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_0) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0)))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_0)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1)))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_3) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3)))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_3)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_3 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_2) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2)))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s2_pc_2)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s2_pc_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s2_pc_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pop) 
           & (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_popped_in_s2)));
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_cancel 
        = ((IData)(vlSelf->RAS_top__DOT__io_s3_fire_2) 
           & (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pushed_in_s2) 
               != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_push)) 
              | ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_popped_in_s2) 
                 != (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pop))));
    vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push 
        = ((IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_push) 
           & (~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pushed_in_s2)));
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_0_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_0_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_1_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_1_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_2_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_2_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1) 
               ^ (IData)(vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1)))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffffeULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1)))));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 1U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffffdULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 2U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffffbULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 3U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffff7ULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 4U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffffefULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 5U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffffdfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 6U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffffbfULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 7U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffff7fULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 8U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffeffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 9U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffdffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xaU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffffbffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xbU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffff7ffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xcU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffefffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xdU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffdfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xeU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffffbfffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0xfU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffff7fffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x10U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffeffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x11U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffdffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x12U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffffbffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x13U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffff7ffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x14U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffefffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x15U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffdfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x16U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffffbfffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x17U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffff7fffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x18U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffeffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x19U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffdffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fffbffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fff7ffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffefffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffdfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ffbfffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1ff7fffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x20U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1feffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x21U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fdffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x22U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1fbffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x23U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1f7ffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x24U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1efffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x25U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1dfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x26U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x1bfffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                        >> 0x27U)) ^ (IData)((vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0x17fffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((IData)(((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                  ^ vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
                 >> 0x28U))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1 
            = ((0xffffffffffULL & vlSelf->RAS_top__DOT____Vtogcov__io_out_s3_full_pred_3_targets_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->RAS_top__DOT__io_out_s3_full_pred_3_targets_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_pop))) {
        ++(vlSymsp->__Vcoverage[5430]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_pop 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_pop;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_cancel) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_s3_cancel))) {
        ++(vlSymsp->__Vcoverage[5429]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_s3_cancel 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_cancel;
    }
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_push))) {
        ++(vlSymsp->__Vcoverage[5431]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__io_s3_missed_push 
            = vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push;
    }
    vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush 
        = (((IData)(vlSelf->RAS_top__DOT__io_s3_fire_2) 
            & (((~ (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_cancel)) 
                & (IData)(vlSelf->RAS_top__DOT__RAS__DOT__s3_pushed_in_s2)) 
               | (IData)(vlSelf->RAS_top__DOT__RAS__DOT____Vcellinp__RASStack__io_s3_missed_push))) 
           | (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush_REG));
    if (((IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush) 
         ^ (IData)(vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realPush))) {
        ++(vlSymsp->__Vcoverage[8307]);
        vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT____Vtogcov__realPush 
            = vlSelf->RAS_top__DOT__RAS__DOT__RASStack__DOT__realPush;
    }
}
