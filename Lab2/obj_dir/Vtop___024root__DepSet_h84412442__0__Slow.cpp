// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__reg_file__DOT__rf__0.neq(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.top__DOT__cpu__DOT__alu_result 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_result__0));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__reg_file__DOT__rf__0.assign(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_result__0 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
