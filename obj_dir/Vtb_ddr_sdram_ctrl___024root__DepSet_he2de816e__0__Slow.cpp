// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ddr_sdram_ctrl.h for the primary calling header

#include "Vtb_ddr_sdram_ctrl__pch.h"
#include "Vtb_ddr_sdram_ctrl___024root.h"

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_static__TOP(Vtb_ddr_sdram_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_static(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ddr_sdram_ctrl___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_static__TOP(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn_async = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk300m = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d1 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d2 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_a = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_a = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dl_a = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_b = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_b = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dqs_c = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_c = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_d = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_a = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_a = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_b = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_b = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_c = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_c = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_dqs_c = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_c = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_d = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_d = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_d = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_e = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_e = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_e = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l = 0U;
}

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_final(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ddr_sdram_ctrl___024root___eval_phase__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_settle(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_ddr_sdram_ctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_ddr_sdram_ctrl.v", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ddr_sdram_ctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___stl_sequent__TOP__0(Vtb_ddr_sdram_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_stl(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___stl_sequent__TOP__0(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1;
    tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1 = 0;
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__aw_end 
        = (1U & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr 
                 >> 0xcU));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__wlast = (7U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__araddr_next 
        = (0x7ffffffU & ((IData)(2U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length 
        = (0xfU & ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg))));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2 
        = ((6U == (7U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg) 
                         >> 4U))) ? 5U : (7U & VL_SHIFTL_III(3,3,32, 
                                                             ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg) 
                                                              >> 4U), 1U)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dqs = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable) 
                                                 & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dqs_c));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dq = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable)
                                                  ? 0xffU
                                                  : 0U) 
                                                & (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable)
                                                     ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_d)
                                                     : 0U) 
                                                   & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable)
                                                       ? 0xffU
                                                       : 0U)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len) 
           == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__awready = ((1U 
                                                  == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat)) 
                                                 & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done) 
                                                    & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle) 
                                                       == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real))));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in 
        = ((0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in)) 
           | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in 
        = ((0xffffff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in) 
           | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dq));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ddr_a_col 
        = ((0x800U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr) 
                      << 2U)) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last) 
                                  << 0xaU) | (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr), 1U))));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__arready = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__awready) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_4 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke) 
           & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n));
    tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke) 
           & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_8 
        = ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n)) 
           & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_4));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_2 
        = ((IData)(tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1) 
           & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_10 
        = ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n)) 
           & (IData)(tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_enable 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_8) 
           & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_9 
        = ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n)) 
           & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_10));
}

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_triggers__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ddr_sdram_ctrl___024root___eval_phase__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ddr_sdram_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ddr_sdram_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__act(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ddr_sdram_ctrl.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_ddr_sdram_ctrl.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_ddr_sdram_ctrl.clk300m)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_ddr_sdram_ctrl.rstn_async)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_ddr_sdram_ctrl.ddr_sdram_ctrl_i.rstn_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge tb_ddr_sdram_ctrl.ddr_sdram_ctrl_i.rstn_aclk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tb_ddr_sdram_ctrl.ddr_sdram_ctrl_i.clk2)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] tb_ddr_sdram_ctrl.ddr_cke)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Sys_clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Sys_clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[0])\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[1])\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[2])\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[3])\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[0])\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[1])\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[2])\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[3])\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge tb_ddr_sdram_ctrl.ddr_cke)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_enable)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_reset)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([changed] tb_ddr_sdram_ctrl.ddr_model_i.Prech_count)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([changed] (32'sh2 <= tb_ddr_sdram_ctrl.ddr_model_i.aref_count))\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(negedge tb_ddr_sdram_ctrl.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__nba(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ddr_sdram_ctrl.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_ddr_sdram_ctrl.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_ddr_sdram_ctrl.clk300m)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_ddr_sdram_ctrl.rstn_async)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_ddr_sdram_ctrl.ddr_sdram_ctrl_i.rstn_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge tb_ddr_sdram_ctrl.ddr_sdram_ctrl_i.rstn_aclk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tb_ddr_sdram_ctrl.ddr_sdram_ctrl_i.clk2)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] tb_ddr_sdram_ctrl.ddr_cke)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Sys_clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Sys_clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[0])\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[1])\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[2])\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[3])\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[0])\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[1])\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[2])\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(negedge tb_ddr_sdram_ctrl.ddr_model_i.Dqs_in[3])\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge tb_ddr_sdram_ctrl.ddr_cke)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_enable)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_reset)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([changed] tb_ddr_sdram_ctrl.ddr_model_i.Prech_count)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([changed] (32'sh2 <= tb_ddr_sdram_ctrl.ddr_model_i.aref_count))\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(negedge tb_ddr_sdram_ctrl.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___ctor_var_reset(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ddr_sdram_ctrl__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__rstn_async = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__clk300m = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_cke = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_cs_n = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_ras_n = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_cas_n = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_we_n = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_ba = VL_RAND_RESET_I(2);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_a = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_dqs = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_dq = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__awaddr = VL_RAND_RESET_I(26);
    vlSelf->tb_ddr_sdram_ctrl__DOT__wlast = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__araddr = VL_RAND_RESET_I(26);
    vlSelf->tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__aw_end = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = VL_RAND_RESET_I(3);
    vlSelf->tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__araddr_next = VL_RAND_RESET_I(27);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle = VL_RAND_RESET_I(3);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real = VL_RAND_RESET_I(3);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt = VL_RAND_RESET_I(10);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr = VL_RAND_RESET_I(10);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ddr_a_col = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d2 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_a = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_a = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dl_a = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_b = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_b = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dqs_c = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_c = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_d = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_a = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_a = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_b = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_b = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_c = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_c = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_dqs_c = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_c = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_d = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_d = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_d = VL_RAND_RESET_I(16);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_e = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_e = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_e = VL_RAND_RESET_I(16);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l = VL_RAND_RESET_I(3);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l = VL_RAND_RESET_I(3);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair = VL_RAND_RESET_I(8);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__CkeZ = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array[__Vi0] = VL_RAND_RESET_I(26);
    }
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used = VL_RAND_RESET_I(16);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter = VL_RAND_RESET_I(11);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prev_bank = VL_RAND_RESET_I(2);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr = VL_RAND_RESET_I(2);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr = VL_RAND_RESET_I(11);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_brst = VL_RAND_RESET_I(11);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp = VL_RAND_RESET_I(11);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B0_row_addr = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B1_row_addr = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B2_row_addr = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B3_row_addr = VL_RAND_RESET_I(13);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count = VL_RAND_RESET_I(32);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation = VL_RAND_RESET_I(4);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2 = VL_RAND_RESET_I(3);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RRD_chk = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i = VL_RAND_RESET_I(16);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i = VL_RAND_RESET_I(16);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h95274f97__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h9edef911__0 = VL_RAND_RESET_I(2);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h6dedc77d__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h939a152f__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h549cac9d__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h4a2c8f2d__0 = VL_RAND_RESET_I(2);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h8fe04ca5__0 = VL_RAND_RESET_I(11);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__awaddr = VL_RAND_RESET_I(26);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk300m__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn_async__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_cke__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb26aef6f__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb26a8004__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb26a9013__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb26c1e21__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr_h1a97ed65__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
