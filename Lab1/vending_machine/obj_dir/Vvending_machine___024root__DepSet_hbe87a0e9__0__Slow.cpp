// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine__Syms.h"
#include "Vvending_machine___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvending_machine___024root___eval_triggers__stl(Vvending_machine___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_triggers__stl\n"); );
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvending_machine___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
