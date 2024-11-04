// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ddr_sdram_ctrl.h for the primary calling header

#include "Vtb_ddr_sdram_ctrl__pch.h"
#include "Vtb_ddr_sdram_ctrl__Syms.h"
#include "Vtb_ddr_sdram_ctrl___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__2(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_he318f661__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.ddr_cke)", 
                                                         "micron_ddr_sdram_model.v", 
                                                         382);
    co_await vlSelfRef.__VtrigSched_hdcd9394b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_enable)", 
                                                         "micron_ddr_sdram_model.v", 
                                                         383);
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count = 0U;
    co_await vlSelfRef.__VtrigSched_h474ca693__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_reset)", 
                                                         "micron_ddr_sdram_model.v", 
                                                         385);
    co_await vlSelfRef.__VtrigSched_h95d63a37__0.trigger(0U, 
                                                         nullptr, 
                                                         "@([changed] tb_ddr_sdram_ctrl.ddr_model_i.Prech_count)", 
                                                         "micron_ddr_sdram_model.v", 
                                                         386);
    if (VL_LTES_III(32, 2U, vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count)) {
        VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i: at time %t MEMORY:  Power Up and Initialization Sequence is complete\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                     -12);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done = 1U;
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count = 0U;
        co_await vlSelfRef.__VtrigSched_h8aa021b4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@([changed] (32'sh2 <= tb_ddr_sdram_ctrl.ddr_model_i.aref_count))", 
                                                             "micron_ddr_sdram_model.v", 
                                                             392);
        VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i: at time %t MEMORY:  Power Up and Initialization Sequence is complete\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                     -12);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__act(Vtb_ddr_sdram_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ddr_sdram_ctrl___024root___eval_triggers__act(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h1a97ed65__0;
    __Vtrigcurrexpr_h1a97ed65__0 = 0;
    __Vtrigcurrexpr_h1a97ed65__0 = VL_LTES_III(32, 2U, vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count);
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk300m) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk300m__0))));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn_async)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn_async__0)));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk__0)));
    vlSelfRef.__VactTriggered.set(5U, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2__0))));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_cke__0)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk__0))));
    vlSelfRef.__VactTriggered.set(9U, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk__0)));
    vlSelfRef.__VactTriggered.set(0xaU, (1U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr_hb26aef6f__0)))));
    vlSelfRef.__VactTriggered.set(0xbU, (1U & (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                                >> 1U) 
                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr_hb26a8004__0)))));
    vlSelfRef.__VactTriggered.set(0xcU, (1U & (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                                >> 2U) 
                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr_hb26a9013__0)))));
    vlSelfRef.__VactTriggered.set(0xdU, (IData)((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                                  >> 3U) 
                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr_hb26c1e21__0)))));
    vlSelfRef.__VactTriggered.set(0xeU, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in)) 
                                         & (IData)(vlSelfRef.__Vtrigprevexpr_hb26aef6f__0)));
    vlSelfRef.__VactTriggered.set(0xfU, ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.__Vtrigprevexpr_hb26a8004__0)));
    vlSelfRef.__VactTriggered.set(0x10U, ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                              >> 2U)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr_hb26a9013__0)));
    vlSelfRef.__VactTriggered.set(0x11U, ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                              >> 3U)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr_hb26c1e21__0)));
    vlSelfRef.__VactTriggered.set(0x12U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(0x13U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_cke__0))));
    vlSelfRef.__VactTriggered.set(0x14U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable__0))));
    vlSelfRef.__VactTriggered.set(0x15U, ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset__0))));
    vlSelfRef.__VactTriggered.set(0x16U, (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count__0));
    vlSelfRef.__VactTriggered.set(0x17U, ((IData)(__Vtrigcurrexpr_h1a97ed65__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h1a97ed65__0)));
    vlSelfRef.__VactTriggered.set(0x18U, ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk300m__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk300m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn_async__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn_async;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_cke__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk;
    vlSelfRef.__Vtrigprevexpr_hb26aef6f__0 = (1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in));
    vlSelfRef.__Vtrigprevexpr_hb26a8004__0 = (1U & 
                                              ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                               >> 1U));
    vlSelfRef.__Vtrigprevexpr_hb26a9013__0 = (1U & 
                                              ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                               >> 2U));
    vlSelfRef.__Vtrigprevexpr_hb26c1e21__0 = (1U & 
                                              ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in) 
                                               >> 3U));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count__0 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count;
    vlSelfRef.__Vtrigprevexpr_h1a97ed65__0 = __Vtrigcurrexpr_h1a97ed65__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(0x16U, 1U);
        vlSelfRef.__VactTriggered.set(0x17U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ddr_sdram_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__5(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n) 
                                  | ((((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n)) 
                                       & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n)) 
                                      & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n)) 
                                     & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n))))))) {
            VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i: at time %t MEMORY ERROR:  You must have a Deselect or NOP command applied\n",0,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                         -12);
            VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i:           when the Clock Enable is brought High.\n",0,
                         vlSymsp->name());
        }
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__17(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*25:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__3__addr;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__3__addr = 0;
    IData/*25:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__addr;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__addr = 0;
    CData/*7:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__data;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__data = 0;
    IData/*25:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__addr;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__addr = 0;
    CData/*7:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__data;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__data = 0;
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[6U] = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[6U] = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[6U] = 0U;
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge
        [0U]) {
        if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge
              [0U] == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr)) 
             | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge
             [0U])) {
            if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation = 0xfU;
            }
        }
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[6U] = 0U;
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst
         [0U] & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable))) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = 0U;
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[6U] = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[6U] = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[3U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
        [4U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[4U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
        [5U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[5U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
        [6U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[6U] = 0U;
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
        [0U]) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank
            [0U];
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols
            [0U];
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_brst 
            = (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr 
            = ((2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))
                ? ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))
                    ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B3_row_addr)
                    : (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B2_row_addr))
                : ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))
                    ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B1_row_addr)
                    : (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B0_row_addr)));
    }
    if (VL_UNLIKELY(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable)) {
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__3__addr 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr) 
                << 0x18U) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr) 
                              << 0xbU) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
        {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i = 0U;
            while (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i) 
                    < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
                if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array
                     [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i))] 
                     == __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__3__addr)) {
                    goto __Vlabel1;
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i)));
            }
            __Vlabel1: ;
        }
        VL_WRITEF_NX("At time %t READ : Bank = %x, Row = %x, Col = %x, Data = 00\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr),
                     13,vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr,
                     11,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr));
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd[3U] = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank[3U] = 0U;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols[0U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols
        [1U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols[1U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols
        [2U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols[2U] 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols
        [3U];
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols[3U] = 0U;
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
        [0U]) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank
            [0U];
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols
            [0U];
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_brst 
            = (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr 
            = ((2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))
                ? ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))
                    ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B3_row_addr)
                    : (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B2_row_addr))
                : ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))
                    ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B1_row_addr)
                    : (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B0_row_addr)));
    }
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable) {
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__addr 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr) 
                << 0x18U) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr) 
                              << 0xbU) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
        {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i = 0U;
            while (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i) 
                    < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
                if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array
                     [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i))] 
                     == __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__addr)) {
                    goto __Vlabel2;
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i)));
            }
            __Vlabel2: ;
        }
        if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i) 
             <= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
            __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__data 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_array
                [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i))];
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
            = __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__5__data;
        if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk) {
            if ((1U & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xffffff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall) 
                          >> 1U)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xffff00ffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall) 
                          >> 2U)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xff00ffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xff0000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall) 
                          >> 3U)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xffffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xff000000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall));
            }
            if (VL_UNLIKELY((1U & (~ (IData)((0xfU 
                                              == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall))))))) {
                VL_WRITEF_NX("At time %t WRITE: Bank = %x, Row = %x, Col = %x, Data = %x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr),
                             13,vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr,
                             11,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr),
                             8,(0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf));
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xffffff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                          >> 1U)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xffff00ffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                          >> 2U)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xff00ffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xff0000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                          >> 3U)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
                    = ((0xffffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf) 
                       | (0xff000000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise));
            }
            if (VL_UNLIKELY((1U & (~ (IData)((0xfU 
                                              == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise))))))) {
                VL_WRITEF_NX("At time %t WRITE: Bank = %x, Row = %x, Col = %x, Data = %x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr),
                             13,vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr,
                             11,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr),
                             8,(0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf));
            }
        }
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__data 
            = (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf);
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__addr 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr) 
                << 0x18U) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr) 
                              << 0xbU) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
        {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i = 0U;
            while (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i) 
                    < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
                if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array
                     [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i))] 
                     == __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__addr)) {
                    goto __Vlabel3;
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i)));
            }
            __Vlabel3: ;
        }
        if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i) 
             == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
            if (VL_UNLIKELY((0x8000U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i)))) {
                VL_WRITEF_NX("At time %t ERROR: Memory overflow.\n  Write to Address %x with Data %x will be lost.\n  You must increase the part_mem_bits parameter or `define FULL_MEM.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,26,__Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__addr,
                             8,(IData)(__Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__data));
            } else {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used)));
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array[(0x7fffU 
                                                                                & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i))] 
                    = __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__addr;
            }
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_array[(0x7fffU 
                                                                       & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i))] 
            = __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__6__data;
        if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk) 
             & (~ (IData)((0xffU == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair)))))) {
            if ((2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))) {
                if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk3 
                        = VL_TIME_UNITED_Q(1);
                } else {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk2 
                        = VL_TIME_UNITED_Q(1);
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk1 
                    = VL_TIME_UNITED_Q(1);
            } else {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk0 
                    = VL_TIME_UNITED_Q(1);
            }
            if (VL_UNLIKELY(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_enable)) {
                VL_WRITEF_NX("At time %t ERROR: tWTR violation during Read\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
        }
    }
    if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter) 
         < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length))) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter)));
    }
    if ((8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg))) {
        if ((8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp 
                = ((0x7f8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)) 
                   | (7U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter) 
                            ^ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_brst))));
        }
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr 
        = ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length))
            ? ((0x7feU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)) 
               | (1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)))
            : ((4U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length))
                ? ((0x7fcU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)) 
                   | (3U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)))
                : ((8U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length))
                    ? ((0x7f8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)) 
                       | (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)))
                    : (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp))));
    if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter) 
         >= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length))) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation = 0U;
    }
    if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
          [2U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
          [1U]) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs)))) {
            VL_WRITEF_NX("At time %t ERROR: Negative DQS[0] transition required.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs 
            = (1U | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs));
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs = 0U;
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [0U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [0U])) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[0U] 
            = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
               [0U]);
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [1U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [1U])) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[1U] 
            = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
               [1U]);
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [2U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [2U])) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[2U] 
            = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
               [2U]);
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [3U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [3U])) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[3U] 
            = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
               [3U]);
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [0U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0)) 
                 >= 40.0))) {
        if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
             [0U] >= VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[0U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [1U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1)) 
                 >= 40.0))) {
        if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
             [1U] >= VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[1U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [2U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2)) 
                 >= 40.0))) {
        if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
             [2U] >= VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[2U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
         [3U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3)) 
                 >= 40.0))) {
        if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
             [3U] >= VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[3U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [0U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0)) 
                 >= 40.0))) {
        if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
              [0U] >= ((IData)(1U) + VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) 
             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk0)) 
                >= 15.0))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[0U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [1U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1)) 
                 >= 40.0))) {
        if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
              [1U] >= ((IData)(1U) + VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) 
             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk1)) 
                >= 15.0))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[1U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [2U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2)) 
                 >= 40.0))) {
        if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
              [2U] >= ((IData)(1U) + VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) 
             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk2)) 
                >= 15.0))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[2U] = 0U;
        }
    }
    if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
         [3U] & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3)) 
                 >= 40.0))) {
        if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge
              [3U] >= ((IData)(1U) + VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length), 1U))) 
             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk3)) 
                >= 15.0))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[3U] = 0U;
        }
    }
    if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset) 
         & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done)))) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count 
            = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count);
        if (VL_LTES_III(32, 0xc8U, vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count)) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done = 1U;
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_10) 
                     & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n)))) {
        VL_WRITEF_NX("At time %t AREF : Auto Refresh\n",0,
                     64,VL_TIME_UNITED_Q(1),-12);
        if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0)) 
                            < 15.0) | (VL_ITOR_D_Q(64, 
                                                   ((QData)(VL_TIME_UNITED_Q(1)) 
                                                    - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1)) 
                                       < 15.0)) | (
                                                   VL_ITOR_D_Q(64, 
                                                               ((QData)(VL_TIME_UNITED_Q(1)) 
                                                                - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2)) 
                                                   < 15.0)) 
                         | (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3)) 
                            < 15.0)))) {
            VL_WRITEF_NX("At time %t ERROR: tRP violation during Auto Refresh\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk)) 
                         < 10.0))) {
            VL_WRITEF_NX("At time %t ERROR: tMRD violation during Auto Refresh\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk)) 
                         < 70.0))) {
            VL_WRITEF_NX("At time %t ERROR: tRFC violation during Auto Refresh\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((1U & ((((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0)) 
                                 | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1))) 
                                | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2))) 
                               | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3)))))) {
            VL_WRITEF_NX("At time %t ERROR: All banks must be Precharged before Auto Refresh\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count 
                = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_9) 
                     & (IData)((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))))) {
        VL_WRITEF_NX("At time %t EMR  : Extended Mode Register\n",0,
                     64,VL_TIME_UNITED_Q(1),-12);
        if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0)) 
                            < 15.0) | (VL_ITOR_D_Q(64, 
                                                   ((QData)(VL_TIME_UNITED_Q(1)) 
                                                    - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1)) 
                                       < 15.0)) | (
                                                   VL_ITOR_D_Q(64, 
                                                               ((QData)(VL_TIME_UNITED_Q(1)) 
                                                                - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2)) 
                                                   < 15.0)) 
                         | (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3)) 
                            < 15.0)))) {
            VL_WRITEF_NX("At time %t ERROR: tRP violation during Extended Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk)) 
                         < 10.0))) {
            VL_WRITEF_NX("At time %t ERROR: tMRD violation during Extended Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk)) 
                         < 70.0))) {
            VL_WRITEF_NX("At time %t ERROR: tRFC violation during Extended Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((1U & ((((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0)) 
                                 | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1))) 
                                | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2))) 
                               | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3)))))) {
            VL_WRITEF_NX("At time %t ERROR: all banks must be Precharged before Extended Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else {
            if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable = 0U;
                VL_WRITEF_NX("At time %t EMR  : Disable DLL\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable = 1U;
                VL_WRITEF_NX("At time %t EMR  : Enable DLL\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_9) 
                     & (IData)((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))))) {
        VL_WRITEF_NX("At time %t LMR  : Load Mode Register\n",0,
                     64,VL_TIME_UNITED_Q(1),-12);
        if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0)) 
                            < 15.0) | (VL_ITOR_D_Q(64, 
                                                   ((QData)(VL_TIME_UNITED_Q(1)) 
                                                    - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1)) 
                                       < 15.0)) | (
                                                   VL_ITOR_D_Q(64, 
                                                               ((QData)(VL_TIME_UNITED_Q(1)) 
                                                                - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2)) 
                                                   < 15.0)) 
                         | (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3)) 
                            < 15.0)))) {
            VL_WRITEF_NX("At time %t ERROR: tRP violation during Load Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk)) 
                         < 10.0))) {
            VL_WRITEF_NX("At time %t ERROR: tMRD violation during Load Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk)) 
                         < 70.0))) {
            VL_WRITEF_NX("At time %t ERROR: tRFC violation during Load Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((1U & ((((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0)) 
                                 | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1))) 
                                | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2))) 
                               | (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3)))))) {
            VL_WRITEF_NX("At time %t ERROR: all banks must be Precharged before Load Mode Register\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a;
            if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable) 
                 & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                    >> 8U))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count = 0U;
            } else if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable) 
                                     & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset))) 
                                    & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                          >> 8U))))) {
                VL_WRITEF_NX("At time %t ERROR: DLL is ENABLE: DLL RESET is required.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else if (VL_UNLIKELY((1U & ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable)) 
                                          & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                             >> 8U))))) {
                VL_WRITEF_NX("At time %t ERROR: DLL is DISABLE: DLL RESET will be ignored.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            if (VL_UNLIKELY((1U == (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))))) {
                VL_WRITEF_NX("At time %t LMR  : Burst Length = 2\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else if (VL_UNLIKELY((2U == (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))))) {
                VL_WRITEF_NX("At time %t LMR  : Burst Length = 4\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else if ((3U == (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a)))) {
                VL_WRITEF_NX("At time %t LMR  : Burst Length = 8\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else {
                VL_WRITEF_NX("At time %t ERROR: Burst Length not supported\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            if (VL_UNLIKELY((2U == (7U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                          >> 4U))))) {
                VL_WRITEF_NX("At time %t LMR  : CAS Latency = 2\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else if (VL_UNLIKELY((6U == (7U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                                 >> 4U))))) {
                VL_WRITEF_NX("At time %t LMR  : CAS Latency = 2.5\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else if ((3U == (7U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                     >> 4U)))) {
                VL_WRITEF_NX("At time %t LMR  : CAS Latency = 3\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            } else {
                VL_WRITEF_NX("At time %t ERROR: CAS Latency not supported\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_2) 
                     & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done))))) {
            VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i.Control_Logic: at time %t ERROR: Power Up and Initialization Sequence not completed before executing Activate command\n",0,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                         -12);
        }
        VL_WRITEF_NX("At time %t ACT  : Bank = %x, Row = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba),
                     13,vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a);
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prev_bank) 
                          != (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                         & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RRD_chk)) 
                            < 10.0)))) {
            VL_WRITEF_NX("At time %t ERROR: tRRD violation during Activate bank %x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk)) 
                         < 10.0))) {
            VL_WRITEF_NX("At time %t ERROR: tMRD violation during Activate bank %x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk)) 
                         < 70.0))) {
            VL_WRITEF_NX("At time %t ERROR: tRFC violation during Activate bank %x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
        }
        if (VL_UNLIKELY((((((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0))) 
                           | ((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                              & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1)))) 
                          | ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                             & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2)))) 
                         | ((3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3)))))) {
            VL_WRITEF_NX("At time %t ERROR: Bank = %x is already activated - Command Ignored\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
        } else {
            if (((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                 & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0))) {
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk0)) 
                                 < 55.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRC violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0)) 
                                 < 15.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRP violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0 = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0 = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B0_row_addr 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk0 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk0 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk0 
                    = VL_TIME_UNITED_Q(1);
            }
            if (((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                 & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1))) {
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk1)) 
                                 < 55.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRC violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1)) 
                                 < 15.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRP violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1 = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1 = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B1_row_addr 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk1 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk1 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk1 
                    = VL_TIME_UNITED_Q(1);
            }
            if (((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                 & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2))) {
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk2)) 
                                 < 55.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRC violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2)) 
                                 < 15.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRP violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2 = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2 = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B2_row_addr 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk2 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk2 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk2 
                    = VL_TIME_UNITED_Q(1);
            }
            if (((3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                 & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3))) {
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk3)) 
                                 < 55.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRC violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3)) 
                                 < 15.0))) {
                    VL_WRITEF_NX("At time %t ERROR: tRP violation during Activate bank %x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3 = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3 = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B3_row_addr 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk3 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk3 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3 
                    = VL_TIME_UNITED_Q(1);
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk3 
                    = VL_TIME_UNITED_Q(1);
            }
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RRD_chk 
                = VL_TIME_UNITED_Q(1);
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prev_bank 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                   & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation));
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n)) 
                     & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_2)))) {
        VL_WRITEF_NX("At time %t PRE  : Addr[10] = %b, Bank = %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(1U 
                                                   & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                                      >> 0xaU)),
                     2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk)) 
                         < 10.0))) {
            VL_WRITEF_NX("At time %t ERROR: tMRD violation during Precharge\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                          - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk)) 
                         < 70.0))) {
            VL_WRITEF_NX("At time %t ERROR: tRFC violation during Precharge\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
               >> 0xaU) | ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                               >> 0xaU)) & (0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))) 
             & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0 
                = VL_TIME_UNITED_Q(1);
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0)) 
                             < 40.0))) {
                VL_WRITEF_NX("At time %t ERROR: tRAS violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk0)) 
                             < 15.0))) {
                VL_WRITEF_NX("At time %t ERROR: tWR violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
        }
        if (((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
               >> 0xaU) | ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                               >> 0xaU)) & (1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))) 
             & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1 
                = VL_TIME_UNITED_Q(1);
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1)) 
                             < 40.0))) {
                VL_WRITEF_NX("At time %t ERROR: tRAS violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk1)) 
                             < 15.0))) {
                VL_WRITEF_NX("At time %t ERROR: tWR violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
        }
        if (((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
               >> 0xaU) | ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                               >> 0xaU)) & (2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))) 
             & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2 
                = VL_TIME_UNITED_Q(1);
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2)) 
                             < 40.0))) {
                VL_WRITEF_NX("At time %t ERROR: tRAS violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk2)) 
                             < 15.0))) {
                VL_WRITEF_NX("At time %t ERROR: tWR violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
        }
        if (((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
               >> 0xaU) | ((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                               >> 0xaU)) & (3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))) 
             & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3 = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3 
                = VL_TIME_UNITED_Q(1);
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3)) 
                             < 40.0))) {
                VL_WRITEF_NX("At time %t ERROR: tRAS violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            if (VL_UNLIKELY((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk3)) 
                             < 15.0))) {
                VL_WRITEF_NX("At time %t ERROR: tWR violation during Precharge\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count 
            = ((IData)(1U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h95274f97__0 
            = (1U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                     >> 0xaU));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h9edef911__0 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h6dedc77d__0 = 1U;
        if ((6U >= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h95274f97__0;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h9edef911__0;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h6dedc77d__0;
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_4) 
                     & ((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n)) 
                        & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n))))) {
        VL_WRITEF_NX("At time %t BST  : Burst Terminate\n",0,
                     64,VL_TIME_UNITED_Q(1),-12);
        if (VL_UNLIKELY(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable)) {
            VL_WRITEF_NX("At time %t ERROR: It's illegal to burst terminate a Write\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else if (VL_UNLIKELY((((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
                                  [0U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
                                  [1U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
                                 [2U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
                                [3U]))) {
            VL_WRITEF_NX("At time %t ERROR: It's illegal to burst terminate a Read with Auto Precharge\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h939a152f__0 = 1U;
            if (VL_LIKELY((6U >= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h939a152f__0;
            }
        }
    }
    if (VL_UNLIKELY(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_enable)) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done))))) {
            VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i.Control_Logic: at time %t ERROR: Power Up and Initialization Sequence not completed before executing Read Command\n",0,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                         -12);
        }
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset) 
                         & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done))))) {
            VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i.Control_Logic: at time %t ERROR: You need to wait 200 tCK after DLL Reset Enable to Read, Not %0d clocks.\n",0,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                         -12,32,vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count);
        }
        VL_WRITEF_NX("At time %t READ : Bank = %x, Col = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba),
                     11,((0x400U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                    >> 1U)) | (0x3ffU 
                                               & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))));
        if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable = 0U;
        }
        if (VL_UNLIKELY(((((((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                 >> 0xaU)) & (0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                            & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk0)) 
                               < 15.0)) | (((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                                >> 0xaU)) 
                                            & (1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                                           & (VL_ITOR_D_Q(64, 
                                                          ((QData)(VL_TIME_UNITED_Q(1)) 
                                                           - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk1)) 
                                              < 15.0))) 
                          | (((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                  >> 0xaU)) & (2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk2)) 
                                < 15.0))) | (((~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                                  >> 0xaU)) 
                                              & (3U 
                                                 == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                                             & (VL_ITOR_D_Q(64, 
                                                            ((QData)(VL_TIME_UNITED_Q(1)) 
                                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk3)) 
                                                < 15.0))))) {
            VL_WRITEF_NX("At time %t ERROR: tRCD violation during Read\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY((((((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                              >> 0xaU) & (0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                            & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk0)) 
                               < 15.0)) | ((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                             >> 0xaU) 
                                            & (1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                                           & (VL_ITOR_D_Q(64, 
                                                          ((QData)(VL_TIME_UNITED_Q(1)) 
                                                           - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk1)) 
                                              < 15.0))) 
                          | ((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                               >> 0xaU) & (2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk2)) 
                                < 15.0))) | ((((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                               >> 0xaU) 
                                              & (3U 
                                                 == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba))) 
                                             & (VL_ITOR_D_Q(64, 
                                                            ((QData)(VL_TIME_UNITED_Q(1)) 
                                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk3)) 
                                                < 15.0))))) {
            VL_WRITEF_NX("At time %t ERROR: tRAP violation during Read\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        if (VL_UNLIKELY(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge
                        [vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba])) {
            VL_WRITEF_NX("At time %t ERROR: It's illegal to interrupt a Read with Auto Precharge\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                          >> 0xaU)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba] = 0U;
            }
        }
        if (VL_UNLIKELY((((((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0)) 
                           | ((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                              & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1))) 
                          | ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                             & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2))) 
                         | ((3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3))))) {
            VL_WRITEF_NX("At time %t ERROR: Bank is not Activated for Read\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h549cac9d__0 = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h4a2c8f2d__0 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h8fe04ca5__0 
                = ((0x400U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                              >> 1U)) | (0x3ffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a)));
            if ((6U >= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h549cac9d__0;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h4a2c8f2d__0;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2] 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h8fe04ca5__0;
            }
            if ((0x400U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba] = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba] = 0U;
            }
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n)) 
                     & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_8)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done))))) {
            VL_WRITEF_NX("%Ntb_ddr_sdram_ctrl.ddr_model_i.Control_Logic: at time %t ERROR: Power Up and Initialization Sequence not completed before executing Write Command\n",0,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                         -12);
        }
        VL_WRITEF_NX("At time %t WRITE: Bank = %x, Col = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba),
                     12,((0xc00U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                                    >> 1U)) | (0x3ffU 
                                               & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))));
        if (VL_UNLIKELY((((((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk0)) 
                               < 15.0)) | ((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                                           & (VL_ITOR_D_Q(64, 
                                                          ((QData)(VL_TIME_UNITED_Q(1)) 
                                                           - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk1)) 
                                              < 15.0))) 
                          | ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                             & (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1)) 
                                                 - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk2)) 
                                < 15.0))) | ((3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                                             & (VL_ITOR_D_Q(64, 
                                                            ((QData)(VL_TIME_UNITED_Q(1)) 
                                                             - vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk3)) 
                                                < 15.0))))) {
            VL_WRITEF_NX("At time %t ERROR: tRCD violation during Write to Bank %x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         2,(IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba));
        }
        if ((((((((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
                   [0U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
                   [1U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
                  [2U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
                 [3U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
                [4U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
               [5U]) | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd
              [6U]) | ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter) 
                       < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length)))) {
            if (VL_UNLIKELY((1U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable) 
                                   | ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation) 
                                      >> (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)))))) {
                VL_WRITEF_NX("At time %t ERROR: Read to Write violation\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
        }
        if (VL_UNLIKELY(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge
                        [vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba])) {
            VL_WRITEF_NX("At time %t ERROR: it's illegal to interrupt a Write with Auto Precharge\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
            if ((1U & (~ ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                          >> 0xaU)))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba] = 0U;
            }
        }
        if (VL_UNLIKELY((((((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0)) 
                           | ((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                              & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1))) 
                          | ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                             & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2))) 
                         | ((3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba)) 
                            & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3))))) {
            VL_WRITEF_NX("At time %t ERROR: Bank is not Activated for Write\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        } else {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd[3U] = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank[3U] 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols[3U] 
                = ((0x400U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a) 
                              >> 1U)) | (0x3ffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a)));
            if ((0x400U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba] = 1U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge[vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba] = 0U;
            }
        }
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length 
        = (0xfU & ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg))));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2 
        = ((6U == (7U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg) 
                         >> 4U))) ? 5U : (7U & VL_SHIFTL_III(3,3,32, 
                                                             ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg) 
                                                              >> 4U), 1U)));
}
