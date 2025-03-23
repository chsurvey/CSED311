// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__reg_file__DOT__rf__0 
        = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_result__0 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top.cpu.reg_file.rf)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] top.cpu.alu_result)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0;
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                 [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
           [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                       >> 2U))] >> 0x19U);
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0 
        = (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
           [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                       >> 2U))] >> 0x1fU);
    vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                    [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                >> 2U))] >> 7U));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
           [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                       >> 2U))]);
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0 
        = (((- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0))) 
            << 0xcU) | (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                        [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                    >> 2U))] >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__alu_op = 0U;
    if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                                vlSelfRef.top__DOT__cpu__DOT__alu_op = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_op = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                                          >> 1U)))) {
                                vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                    = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                        ? 0xaU : 9U);
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                                             >> 1U)))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                    ? 8U : 7U);
                        }
                    }
                }
            }
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out 
                = ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                         ? (((- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                      >> 2U))]) 
                                                | (0x800U 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                      [
                                                      (0x3ffU 
                                                       & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                          >> 2U))] 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                     [
                                                     (0x3ffU 
                                                      & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                         >> 2U))] 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0))) 
                                                    << 0xdU) 
                                                   | ((((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0) 
                                                        << 0xcU) 
                                                       | (0x800U 
                                                          & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                             [
                                                             (0x3ffU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                                 >> 2U))] 
                                                             << 4U))) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                             [
                                                             (0x3ffU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                                 >> 2U))] 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                                                               [
                                                               (0x3ffU 
                                                                & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                                   >> 2U))] 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))));
        } else {
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7))) {
                                if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))) {
                                    vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                ? 1U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                ? 5U
                                                : 3U));
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                                                   >> 1U)))) {
                                    vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                        = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                            ? 4U : 0U);
                                }
                            } else if ((0x20U == (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7))) {
                                if ((0U == (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))) {
                                    vlSelfRef.top__DOT__cpu__DOT__alu_op = 6U;
                                }
                            }
                        }
                    }
                }
            }
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))) {
                                vlSelfRef.top__DOT__cpu__DOT__alu_op = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.top__DOT__cpu__DOT__imm_gen_out 
                = ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                      ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                          ? (((- (IData)((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0))) 
                                              << 0xcU) 
                                             | (((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7) 
                                                 << 5U) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd)))
                                          : 0U) : 0U)));
        }
    } else {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))) {
                                vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                    = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                            ? 1U : 2U)
                                        : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                            ? 5U : 3U));
                            } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3) 
                                                 >> 1U)))) {
                                vlSelfRef.top__DOT__cpu__DOT__alu_op 
                                    = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                        ? 4U : 0U);
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((2U == (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))) {
                            vlSelfRef.top__DOT__cpu__DOT__alu_op = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = 
            ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
              ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                       ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                    ? top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0
                                    : 0U) : 0U)));
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] top.cpu.reg_file.rf)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] top.cpu.alu_result)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] top.cpu.reg_file.rf)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] top.cpu.alu_result)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__curr_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__reg_file__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hd2996bc1_0_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__reg_file__DOT__rf__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_result__0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
