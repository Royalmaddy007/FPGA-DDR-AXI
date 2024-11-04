// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ddr_sdram_ctrl.h for the primary calling header

#include "Vtb_ddr_sdram_ctrl__pch.h"
#include "Vtb_ddr_sdram_ctrl___024root.h"

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP(Vtb_ddr_sdram_ctrl___024root* vlSelf);
VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_ddr_sdram_ctrl___024root* vlSelf);
VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_ddr_sdram_ctrl___024root* vlSelf);
VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__2(Vtb_ddr_sdram_ctrl___024root* vlSelf);
VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__3(Vtb_ddr_sdram_ctrl___024root* vlSelf);
VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__4(Vtb_ddr_sdram_ctrl___024root* vlSelf);

void Vtb_ddr_sdram_ctrl___024root___eval_initial(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP(vlSelf);
    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__4(vlSelf);
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
    vlSelfRef.__Vtrigprevexpr_h1a97ed65__0 = VL_LTES_III(32, 2U, vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count);
}

VL_INLINE_OPT VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xbebc200ULL, 
                                         nullptr, "tb_ddr_sdram_ctrl.v", 
                                         23);
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__error) {
        VL_WRITEF_NX("*** Error: there are mismatch when read out and compare!!! see wave for detail.\n",0);
    } else {
        VL_WRITEF_NX("validation successful !!\n",0);
    }
    VL_FINISH_MT("tb_ddr_sdram_ctrl.v", 28, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hb8afa405__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.clk300m)", 
                                                         "tb_ddr_sdram_ctrl.v", 
                                                         59);
    co_await vlSelfRef.__VtrigSched_hb8afa405__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.clk300m)", 
                                                         "tb_ddr_sdram_ctrl.v", 
                                                         59);
    co_await vlSelfRef.__VtrigSched_hb8afa405__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.clk300m)", 
                                                         "tb_ddr_sdram_ctrl.v", 
                                                         59);
    co_await vlSelfRef.__VtrigSched_hb8afa405__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ddr_sdram_ctrl.clk300m)", 
                                                         "tb_ddr_sdram_ctrl.v", 
                                                         59);
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn_async = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__3(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h238f39d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ddr_sdram_ctrl.clk)", 
                                                             "micron_ddr_sdram_model.v", 
                                                             361);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__CkeZ;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__CkeZ 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke;
        co_await vlSelfRef.__VtrigSched_h238f3a17__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ddr_sdram_ctrl.clk)", 
                                                             "micron_ddr_sdram_model.v", 
                                                             365);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk = 0U;
    }
}

VL_INLINE_OPT VlCoroutine Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__4(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_initial__TOP__Vtiming__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x683ULL, 
                                             nullptr, 
                                             "tb_ddr_sdram_ctrl.v", 
                                             58);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk300m = 
            (1U & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk300m)));
    }
}

void Vtb_ddr_sdram_ctrl___024root___eval_act(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__2(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__3(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__4(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__5(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__6(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__7(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__8(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__9(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__10(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__11(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__12(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__13(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__14(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__15(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__16(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__17(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__18(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__19(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__0(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__20(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__1(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__21(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__22(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__23(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__24(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__2(Vtb_ddr_sdram_ctrl___024root* vlSelf);

void Vtb_ddr_sdram_ctrl___024root___eval_nba(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x14ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x43ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x14ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x23ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__2(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__clk = vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk;
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk) {
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__clk 
            = (1U & (((IData)(1U) + (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk) 
                                      << 1U) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2))) 
                     >> 1U));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2)));
    } else {
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__clk = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2 = 0U;
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__3(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat;
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk) {
        if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done) {
            if ((0x200U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt)));
            } else {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle)));
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt = 0U;
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt = 0U;
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__4(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__awaddr 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr;
    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__error = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
                                               && ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_e) 
                                                   & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_e) 
                                                      != 
                                                      (0xffffU 
                                                       & vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr))));
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable 
            = (((5U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat)) 
                | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d1)) 
               | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d2));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d2 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d1;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_e 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_d;
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d2 = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_e = 0U;
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d1 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (5U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat)));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__6(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs 
        = (0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise 
        = ((0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise)) 
           | (1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise 
        = ((0xffffff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise) 
           | (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__7(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs 
        = (0xdU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise 
        = ((0xdU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise)) 
           | (2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise 
        = ((0xffff00ffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise) 
           | (0xff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__8(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs 
        = (0xbU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise 
        = ((0xbU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise)) 
           | (4U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise 
        = ((0xff00ffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise) 
           | (0xff0000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__9(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs 
        = (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise 
        = ((7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise)) 
           | (8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise 
        = ((0xffffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise) 
           | (0xff000000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__10(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs 
        = (0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall 
        = ((0xffffff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall) 
           | (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall 
        = ((0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall)) 
           | (1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair 
        = ((0xfcU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair)) 
           | ((2U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                     << 1U)) | (1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall))));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__11(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs 
        = (0xdU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall 
        = ((0xffff00ffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall) 
           | (0xff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall 
        = ((0xdU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall)) 
           | (2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair 
        = ((0xf3U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair)) 
           | ((8U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                     << 2U)) | (4U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall) 
                                      << 1U))));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__12(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__12\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs 
        = (0xbU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall 
        = ((0xff00ffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall) 
           | (0xff0000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall 
        = ((0xbU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall)) 
           | (4U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair 
        = ((0xcfU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair)) 
           | ((0x20U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                        << 3U)) | (0x10U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall) 
                                            << 2U))));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__13(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs 
        = (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall 
        = ((0xffffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall) 
           | (0xff000000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall 
        = ((7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall)) 
           | (8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair 
        = ((0x3fU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair)) 
           | ((0x80U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise) 
                        << 4U)) | (0x40U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall) 
                                            << 3U))));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__14(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*25:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__15__addr;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__15__addr = 0;
    IData/*25:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__addr;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__addr = 0;
    CData/*7:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__data;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__data = 0;
    IData/*25:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__addr;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__addr = 0;
    CData/*7:0*/ __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__data;
    __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__data = 0;
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
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__15__addr 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr) 
                << 0x18U) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr) 
                              << 0xbU) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
        {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i = 0U;
            while (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i) 
                    < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
                if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array
                     [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i))] 
                     == __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__15__addr)) {
                    goto __Vlabel4;
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i)));
            }
            __Vlabel4: ;
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
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__addr 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr) 
                << 0x18U) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr) 
                              << 0xbU) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
        {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i = 0U;
            while (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i) 
                    < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
                if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array
                     [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i))] 
                     == __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__addr)) {
                    goto __Vlabel5;
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i)));
            }
            __Vlabel5: ;
        }
        if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i) 
             <= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
            __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__data 
                = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_array
                [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i))];
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf 
            = __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__17__data;
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
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__data 
            = (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf);
        __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__addr 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr) 
                << 0x18U) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr) 
                              << 0xbU) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)));
        {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i = 0U;
            while (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i) 
                    < (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
                if ((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array
                     [(0x7fffU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i))] 
                     == __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__addr)) {
                    goto __Vlabel6;
                }
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i)));
            }
            __Vlabel6: ;
        }
        if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i) 
             == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used))) {
            if (VL_UNLIKELY((0x8000U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i)))) {
                VL_WRITEF_NX("At time %t ERROR: Memory overflow.\n  Write to Address %x with Data %x will be lost.\n  You must increase the part_mem_bits parameter or `define FULL_MEM.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,26,__Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__addr,
                             8,(IData)(__Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__data));
            } else {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used)));
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array[(0x7fffU 
                                                                                & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i))] 
                    = __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__addr;
            }
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_array[(0x7fffU 
                                                                       & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i))] 
            = __Vtask_tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__18__data;
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
         < (0xfU & ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg)))))) {
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
        = ((2U == (0xfU & ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg)))))
            ? ((0x7feU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)) 
               | (1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)))
            : ((4U == (0xfU & ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg)))))
                ? ((0x7fcU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)) 
                   | (3U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)))
                : ((8U == (0xfU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg)))))
                    ? ((0x7f8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr)) 
                       | (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp)))
                    : (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp))));
    if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter) 
         >= (0xfU & ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg)))))) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation = 0U;
    }
    if (((vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
          [2U] | vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd
          [1U]) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs)))) {
            VL_WRITEF_NX("At time %t ERROR: Positive DQS[0] transition required.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12);
        }
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs 
            = (1U | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs));
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs = 0U;
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__15(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dqs_c 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_b));
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_dqs_c) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_d 
            = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dq) 
                << 8U) | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_c));
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_dqs_c 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dqs;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_c 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dq;
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__16(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_d 
        = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_c;
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__18(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn_async) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk 
            = (1U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l) 
                     >> 2U));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l 
            = (1U | (6U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l) 
                           << 1U)));
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk = 0U;
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__19(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__19\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1;
    tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_1 = 0;
    // Body
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk) {
        if ((8U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
            if ((4U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 1U;
            } else if ((2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                    if ((6U <= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 1U;
                    }
                } else {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
                    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_e) {
                        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 0xbU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr)));
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 0U;
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ddr_a_col;
                if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 0xaU;
                } else {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                }
            } else {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
            if ((2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                    if ((6U <= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 1U;
                    }
                } else {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a 
                    = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ddr_a_col;
                if ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr)));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 0U;
                    if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last) 
                         | (7U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt)))) {
                        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
                        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 6U;
                    } else {
                        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                    }
                } else {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
                }
            } else {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
            if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                if ((1U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 0U;
                } else if ((3U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
                } else if ((4U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 0U;
                } else if ((0xaU > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
                } else if ((0xbU > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 0U;
                } else if ((0x11U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 1U;
                }
            } else {
                if ((0U != (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0x400U;
                } else {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0x29U;
                }
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
                if ((0xffU == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done = 1U;
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
            vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0x400U;
            if (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real) 
                 != (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle))) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real)));
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 3U;
            } else if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done) {
                if ((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr 
                        = (0x3ffU & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr 
                                     >> 1U));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba 
                        = (3U & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr 
                                 >> 0x18U));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a 
                        = (0x1fffU & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr 
                                      >> 0xbU));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len = 7U;
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 4U;
                } else if ((4U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr 
                        = (0x3ffU & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr 
                                     >> 1U));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba 
                        = (3U & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr 
                                 >> 0x18U));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a 
                        = (0x1fffU & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr 
                                      >> 0xbU));
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len = 7U;
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 8U;
                }
            } else {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 2U;
            }
        } else {
            vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt)));
            if ((0xdU <= (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                if ((0x32U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n = 0U;
                } else if ((0x33U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 0U;
                } else if ((0x35U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
                } else if ((0x36U > (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt))) {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba = 1U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0U;
                } else {
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba = 0U;
                    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0x129U;
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 1U;
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ras_n = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cas_n = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_we_n = 1U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_ba = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_a = 0x400U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len = 0U;
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done = 0U;
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt = 0U;
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat = 0U;
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cke = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_cs_n)));
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

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__0(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dqs = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable) 
                                                 & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dqs_c));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in 
        = ((0xeU & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in)) 
           | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dqs));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__20(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__20\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_c 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk)
            ? ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_b)
                ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_b)
                : 0U) : ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_a)
                          ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dl_a)
                          : 0U));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__1(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dq = (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable)
                                                  ? 0xffU
                                                  : 0U) 
                                                & (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable)
                                                     ? (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_d)
                                                     : 0U) 
                                                   & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable)
                                                       ? 0xffU
                                                       : 0U)));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in 
        = ((0xffffff00U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in) 
           | (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_dq));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__21(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__21\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_b 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_a));
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) {
        if ((0U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
            vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry = 0U;
            vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__awaddr = 0U;
            vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt = 0U;
            vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr = 0U;
            vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 1U;
        } else if ((1U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
            if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awready) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt = 0U;
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
            if ((5U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry 
                    = (1U & (((IData)(2U) + (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry) 
                                              << 0x1aU) 
                                             | vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr)) 
                             >> 0x1aU));
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt)));
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__awaddr 
                    = (0x3ffffffU & ((IData)(2U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr));
                if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__wlast) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
            if ((6U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat))) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat 
                    = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__aw_end)
                        ? 4U : 1U);
            }
        } else if ((4U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
            if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__arready) {
                vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))) {
            if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_e) {
                vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr 
                    = (0x3ffffffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__araddr_next);
                if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_e) {
                    vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 4U;
                    if ((0x1000U & vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__araddr_next)) {
                        vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr = 0U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry = 0U;
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__awaddr = 0U;
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr = 0U;
        vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat = 0U;
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__araddr_next 
        = (0x7ffffffU & ((IData)(2U) + vlSelfRef.tb_ddr_sdram_ctrl__DOT__araddr));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__wlast = (7U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_e 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_d));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_e 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_d));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_a 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && ((5U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat)) 
               & (2U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat))));
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dl_a 
            = (0xffU & vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr);
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_b 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_a;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_a 
            = (0xffU & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr 
                        >> 8U));
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dl_a = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_b = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_a = 0U;
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__awaddr;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_d 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_c));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_d 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_c));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__aw_end 
        = (1U & (vlSelfRef.tb_ddr_sdram_ctrl__DOT__awaddr 
                 >> 0xcU));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_c 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_b));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_c 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_b));
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_b 
            = vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_a;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_b 
            = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_a) 
               & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_a));
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_b = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_b = 0U;
    }
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_a 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_a 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn) 
           && (9U == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat)));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__22(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__22\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__clk = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__clk;
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__23(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__23\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last 
        = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len) 
           == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ddr_a_col 
        = ((0x800U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr) 
                      << 2U)) | (((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last) 
                                  << 0xaU) | (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr), 1U))));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk) 
                                              & (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done));
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done 
        = vlSelfRef.__Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done;
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__awready = ((1U 
                                                  == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat)) 
                                                 & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done) 
                                                    & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle) 
                                                       == (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real))));
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__24(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_sequent__TOP__24\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_ddr_sdram_ctrl__DOT__rstn_async) {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk 
            = (1U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l) 
                     >> 2U));
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l 
            = (1U | (6U & ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l) 
                           << 1U)));
    } else {
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l = 0U;
        vlSelfRef.tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk = 0U;
    }
}

VL_INLINE_OPT void Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__2(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ddr_sdram_ctrl__DOT__arready = ((IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__awready) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat)));
}

void Vtb_ddr_sdram_ctrl___024root___timing_resume(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb8afa405__0.resume(
                                                   "@(posedge tb_ddr_sdram_ctrl.clk300m)");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he318f661__0.resume(
                                                   "@(posedge tb_ddr_sdram_ctrl.ddr_cke)");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hdcd9394b__0.resume(
                                                   "@(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_enable)");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h474ca693__0.resume(
                                                   "@(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_reset)");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h95d63a37__0.resume(
                                                   "@([changed] tb_ddr_sdram_ctrl.ddr_model_i.Prech_count)");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8aa021b4__0.resume(
                                                   "@([changed] (32'sh2 <= tb_ddr_sdram_ctrl.ddr_model_i.aref_count))");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h238f39d8__0.resume(
                                                   "@(negedge tb_ddr_sdram_ctrl.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h238f3a17__0.resume(
                                                   "@(posedge tb_ddr_sdram_ctrl.clk)");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ddr_sdram_ctrl___024root___timing_commit(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb8afa405__0.commit(
                                                   "@(posedge tb_ddr_sdram_ctrl.clk300m)");
    }
    if ((! (0x80000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he318f661__0.commit(
                                                   "@(posedge tb_ddr_sdram_ctrl.ddr_cke)");
    }
    if ((! (0x100000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hdcd9394b__0.commit(
                                                   "@(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_enable)");
    }
    if ((! (0x200000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h474ca693__0.commit(
                                                   "@(posedge tb_ddr_sdram_ctrl.ddr_model_i.DLL_reset)");
    }
    if ((! (0x400000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h95d63a37__0.commit(
                                                   "@([changed] tb_ddr_sdram_ctrl.ddr_model_i.Prech_count)");
    }
    if ((! (0x800000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8aa021b4__0.commit(
                                                   "@([changed] (32'sh2 <= tb_ddr_sdram_ctrl.ddr_model_i.aref_count))");
    }
    if ((! (0x1000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h238f39d8__0.commit(
                                                   "@(negedge tb_ddr_sdram_ctrl.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h238f3a17__0.commit(
                                                   "@(posedge tb_ddr_sdram_ctrl.clk)");
    }
}

void Vtb_ddr_sdram_ctrl___024root___eval_triggers__act(Vtb_ddr_sdram_ctrl___024root* vlSelf);

bool Vtb_ddr_sdram_ctrl___024root___eval_phase__act(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<25> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ddr_sdram_ctrl___024root___eval_triggers__act(vlSelf);
    Vtb_ddr_sdram_ctrl___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ddr_sdram_ctrl___024root___timing_resume(vlSelf);
        Vtb_ddr_sdram_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ddr_sdram_ctrl___024root___eval_phase__nba(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ddr_sdram_ctrl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__nba(Vtb_ddr_sdram_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ddr_sdram_ctrl___024root___dump_triggers__act(Vtb_ddr_sdram_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ddr_sdram_ctrl___024root___eval(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ddr_sdram_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_ddr_sdram_ctrl.v", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ddr_sdram_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_ddr_sdram_ctrl.v", 11, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ddr_sdram_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ddr_sdram_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ddr_sdram_ctrl___024root___eval_debug_assertions(Vtb_ddr_sdram_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_ddr_sdram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ddr_sdram_ctrl___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
