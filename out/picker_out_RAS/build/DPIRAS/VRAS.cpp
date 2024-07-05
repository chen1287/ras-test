// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRAS.h"
#include "VRAS__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VRAS::VRAS(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRAS__Syms(_vcontextp__, _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
}

VRAS::VRAS(const char* _vcname__)
    : VRAS(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRAS::~VRAS() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRAS___024root___eval_initial(VRAS___024root* vlSelf);
void VRAS___024root___eval_settle(VRAS___024root* vlSelf);
void VRAS___024root___eval(VRAS___024root* vlSelf);
#ifdef VL_DEBUG
void VRAS___024root___eval_debug_assertions(VRAS___024root* vlSelf);
#endif  // VL_DEBUG
void VRAS___024root___final(VRAS___024root* vlSelf);

static void _eval_initial_loop(VRAS__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRAS___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRAS___024root___eval_settle(&(vlSymsp->TOP));
        VRAS___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRAS::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRAS::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRAS___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRAS___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

void VRAS::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VRAS::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Utilities

VerilatedContext* VRAS::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRAS::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRAS::final() {
    VRAS___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VRAS___024root__trace_init_top(VRAS___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRAS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRAS___024root*>(voidSelf);
    VRAS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRAS___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRAS___024root__trace_register(VRAS___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VRAS::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRAS___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
