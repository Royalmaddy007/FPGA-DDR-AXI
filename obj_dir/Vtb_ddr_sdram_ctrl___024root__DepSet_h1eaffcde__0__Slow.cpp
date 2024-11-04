// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ddr_sdram_ctrl.h for the primary calling header

#include "Vtb_ddr_sdram_ctrl__pch.h"
#include "Vtb_ddr_sdram_ctrl__Syms.h"
#include "Vtb_ddr_sdram_ctrl___024root.h"

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_PRINTF_MT("-Info: tb_ddr_sdram_ctrl.v:21: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__error = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0x400U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__CkeZ = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3 = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0 = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1 = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2 = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3 = 1U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RRD_chk = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk0 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk1 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk2 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk3 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk0 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk1 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk2 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk3 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk0 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk1 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk2 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk3 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk0 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk1 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk2 = 0ULL;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk3 = 0ULL;
    VL_TIMEFORMAT_IINI(0xfffffff7U, 3U, std::string{" ns"}, 0xcU, vlSymsp->_vm_contextp__);
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in 
        = (0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_triggers__stl(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ddr_sdram_ctrl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
