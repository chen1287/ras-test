// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAS.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VRAS__Syms.h"
#include "VRAS___024root.h"

void VRAS___024root___ctor_var_reset(VRAS___024root* vlSelf);

VRAS___024root::VRAS___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRAS___024root___ctor_var_reset(this);
}

void VRAS___024root___configure_coverage(VRAS___024root* vlSelf, bool first);

void VRAS___024root::__Vconfigure(VRAS__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    VRAS___024root___configure_coverage(this, first);
}

VRAS___024root::~VRAS___024root() {
}

// Coverage
void VRAS___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
