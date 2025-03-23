// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_hc0eb675b_0;

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0;
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0 = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i);
        }
    }
    if (VL_UNLIKELY((vlSelfRef.reset))) {
        vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem[(0x3ffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_hc0eb675b_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
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

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__rs1_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                   [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                               >> 2U))] >> 0xfU))];
    vlSelfRef.top__DOT__cpu__DOT__rs2_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                   [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                               >> 2U))] >> 0x14U))];
    if (((0x23U != (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
         & (0x63U != (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd] 
            = (((0x6fU == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                | (0x67U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__curr_pc)
                : ((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                    ? (((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                         ? 0xffffffffU : 0U) & (((3U 
                                                  == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                  ? 
                                                 vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
                                                 [(0x3fffU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__alu_result 
                                                      >> 2U))]
                                                  : 0U) 
                                                & ((3U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 0xffffffffU
                                                    : 0U)))
                    : vlSelfRef.top__DOT__cpu__DOT__alu_result));
    }
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(
                                                      (0x33U 
                                                       != (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                                               ? vlSelfRef.top__DOT__cpu__DOT__imm_gen_out
                                               : vlSelfRef.top__DOT__cpu__DOT__rs2_dout);
    vlSelfRef.is_halted = ((0x73U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                           & (0xaU == vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
                              [0x11U]));
    vlSelfRef.print_reg[0U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelfRef.print_reg[1U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelfRef.print_reg[2U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelfRef.print_reg[3U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelfRef.print_reg[4U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelfRef.print_reg[5U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelfRef.print_reg[6U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelfRef.print_reg[7U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelfRef.print_reg[8U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelfRef.print_reg[9U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelfRef.print_reg[0xaU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelfRef.print_reg[0xbU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelfRef.print_reg[0xcU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelfRef.print_reg[0xdU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelfRef.print_reg[0xeU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelfRef.print_reg[0xfU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelfRef.print_reg[0x10U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelfRef.print_reg[0x11U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelfRef.print_reg[0x12U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelfRef.print_reg[0x13U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelfRef.print_reg[0x14U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelfRef.print_reg[0x15U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelfRef.print_reg[0x16U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelfRef.print_reg[0x17U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelfRef.print_reg[0x18U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelfRef.print_reg[0x19U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelfRef.print_reg[0x1aU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelfRef.print_reg[0x1bU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelfRef.print_reg[0x1cU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelfRef.print_reg[0x1dU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelfRef.print_reg[0x1eU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelfRef.print_reg[0x1fU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__alu_result = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)))) {
                        vlSelfRef.top__DOT__cpu__DOT__alu_result 
                            = (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               - vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
                    }
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_result 
                        = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               << (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
                }
            } else {
                vlSelfRef.top__DOT__cpu__DOT__alu_result 
                    = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               | vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                        : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               + vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
            }
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)))) {
                        vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                            = (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               >= vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
                    }
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                        = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               < vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               != vlSelfRef.top__DOT__cpu__DOT__alu_in_2));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                    vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                        = (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                           == vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((0x67U 
                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                              ? vlSelfRef.top__DOT__cpu__DOT__alu_result
                                              : (((0x6fU 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                  | ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_bcond) 
                                                     & (0x63U 
                                                        == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))))
                                                  ? 
                                                 (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                  + vlSelfRef.top__DOT__cpu__DOT__imm_gen_out)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__curr_pc)));
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0;
    top__DOT__cpu__DOT__imm_gen__DOT____VdfgExtracted_haac3b4d6__0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
        vlSelfRef.top__DOT__cpu__DOT__curr_pc = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__curr_pc = vlSelfRef.top__DOT__cpu__DOT__next_pc;
    }
    if ((0x23U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
            = vlSelfRef.top__DOT__cpu__DOT__rs2_dout;
        __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
            = (0x3fffU & (vlSelfRef.top__DOT__cpu__DOT__alu_result 
                          >> 2U));
        __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    }
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__rs1_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                   [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                               >> 2U))] >> 0xfU))];
    vlSelfRef.top__DOT__cpu__DOT__rs2_dout = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
                   [(0x3ffU & (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                               >> 2U))] >> 0x14U))];
    if (((0x23U != (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
         & (0x63U != (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[vlSelfRef.top__DOT__cpu__DOT____Vcellinp__reg_file__rd] 
            = (((0x6fU == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                | (0x67U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                ? ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__curr_pc)
                : ((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                    ? (((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                         ? 0xffffffffU : 0U) & (((3U 
                                                  == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                  ? 
                                                 vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
                                                 [(0x3fffU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__alu_result 
                                                      >> 2U))]
                                                  : 0U) 
                                                & ((3U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 0xffffffffU
                                                    : 0U)))
                    : vlSelfRef.top__DOT__cpu__DOT__alu_result));
    }
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(
                                                      (0x33U 
                                                       != (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                                               ? vlSelfRef.top__DOT__cpu__DOT__imm_gen_out
                                               : vlSelfRef.top__DOT__cpu__DOT__rs2_dout);
    vlSelfRef.is_halted = ((0x73U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                           & (0xaU == vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
                              [0x11U]));
    vlSelfRef.print_reg[0U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelfRef.print_reg[1U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelfRef.print_reg[2U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelfRef.print_reg[3U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelfRef.print_reg[4U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelfRef.print_reg[5U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelfRef.print_reg[6U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelfRef.print_reg[7U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelfRef.print_reg[8U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelfRef.print_reg[9U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelfRef.print_reg[0xaU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelfRef.print_reg[0xbU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelfRef.print_reg[0xcU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelfRef.print_reg[0xdU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelfRef.print_reg[0xeU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelfRef.print_reg[0xfU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelfRef.print_reg[0x10U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelfRef.print_reg[0x11U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelfRef.print_reg[0x12U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelfRef.print_reg[0x13U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelfRef.print_reg[0x14U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelfRef.print_reg[0x15U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelfRef.print_reg[0x16U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelfRef.print_reg[0x17U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelfRef.print_reg[0x18U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelfRef.print_reg[0x19U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelfRef.print_reg[0x1aU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelfRef.print_reg[0x1bU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelfRef.print_reg[0x1cU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelfRef.print_reg[0x1dU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelfRef.print_reg[0x1eU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelfRef.print_reg[0x1fU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)))) {
                        vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                            = (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               >= vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
                    }
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                        = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               < vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               != vlSelfRef.top__DOT__cpu__DOT__alu_in_2));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                    vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                        = (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                           == vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op)))) {
                        vlSelfRef.top__DOT__cpu__DOT__alu_result 
                            = (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               - vlSelfRef.top__DOT__cpu__DOT__alu_in_2);
                    }
                } else {
                    vlSelfRef.top__DOT__cpu__DOT__alu_result 
                        = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               << (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
                }
            } else {
                vlSelfRef.top__DOT__cpu__DOT__alu_result 
                    = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               | vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                        : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_op))
                            ? (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                            : (vlSelfRef.top__DOT__cpu__DOT__rs1_dout 
                               + vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
            }
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((0x67U 
                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                              ? vlSelfRef.top__DOT__cpu__DOT__alu_result
                                              : (((0x6fU 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                  | ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_bcond) 
                                                     & (0x63U 
                                                        == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))))
                                                  ? 
                                                 (vlSelfRef.top__DOT__cpu__DOT__curr_pc 
                                                  + vlSelfRef.top__DOT__cpu__DOT__imm_gen_out)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__curr_pc)));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
