// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ddr_sdram_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_DDR_SDRAM_CTRL___024ROOT_H_
#define VERILATED_VTB_DDR_SDRAM_CTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ddr_sdram_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ddr_sdram_ctrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__rstn_async;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__clk300m;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_cke;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__rstn;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__clk;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__error;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_cs_n;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_ras_n;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_cas_n;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_we_n;
        CData/*1:0*/ tb_ddr_sdram_ctrl__DOT__ddr_ba;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_dqs;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_dq;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__awready;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__wlast;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__arready;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__aw_end;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt;
        CData/*2:0*/ tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done;
        CData/*2:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle;
        CData/*2:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_real;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_len;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__burst_last;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d1;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__output_enable_d2;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_a;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_a;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dl_a;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_v_b;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dh_b;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_dqs_c;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_c;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__o_d_d;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_a;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_a;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_b;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_b;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_c;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_c;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_dqs_c;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_c;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_d;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_d;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_v_e;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_l_e;
        CData/*2:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk_l;
        CData/*2:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk_l;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dqs_in;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dm_in;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_rise;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_fall;
        CData/*7:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dm_pair;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__CkeZ;
    };
    struct {
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_pos_dqs;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__expect_neg_dqs;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b0;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b1;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b2;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Pc_b3;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b0;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b1;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b2;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Act_b3;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_in_enable;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Data_out_enable;
        CData/*1:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prev_bank;
        CData/*1:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_addr;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_done;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__power_up_done;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_enable;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__burst_length;
        CData/*3:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_precharge_truncation;
        CData/*2:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__cas_latency_x2;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h95274f97__0;
        CData/*1:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h9edef911__0;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h6dedc77d__0;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h939a152f__0;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h549cac9d__0;
        CData/*1:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h4a2c8f2d__0;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_2;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_4;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_8;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_9;
        CData/*0:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____VdfgRegularize_h006e2e0b_0_10;
        CData/*0:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__awaddr_carry;
        CData/*7:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__w_cnt;
        CData/*2:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__stat;
        CData/*0:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__clk;
        CData/*2:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_idle;
        CData/*3:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__stat;
        CData/*7:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__cnt;
        CData/*0:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__init_done;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__clk300m__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__rstn_async__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__rstn_aclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__clk2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_cke__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Sys_clk__0;
        CData/*0:0*/ __Vtrigprevexpr_hb26aef6f__0;
        CData/*0:0*/ __Vtrigprevexpr_hb26a8004__0;
        CData/*0:0*/ __Vtrigprevexpr_hb26a9013__0;
        CData/*0:0*/ __Vtrigprevexpr_hb26c1e21__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_enable__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_reset__0;
        CData/*0:0*/ __Vtrigprevexpr_h1a97ed65__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_a;
        SData/*9:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ref_cnt;
        SData/*9:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__ddr_a_col;
        SData/*15:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_d;
        SData/*15:0*/ tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__i_d_e;
    };
    struct {
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Mode_reg;
        SData/*15:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_used;
        SData/*10:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Burst_counter;
        SData/*10:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_addr;
        SData/*10:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_brst;
        SData/*10:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cols_temp;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Rows_addr;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B0_row_addr;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B1_row_addr;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B2_row_addr;
        SData/*12:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__B3_row_addr;
        SData/*15:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__write_mem__Vstatic__i;
        SData/*15:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__read_mem__Vstatic__i;
        SData/*10:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT____Vlvbound_h8fe04ca5__0;
        SData/*9:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__ddr_sdram_ctrl_i__DOT__col_addr;
        IData/*25:0*/ tb_ddr_sdram_ctrl__DOT__awaddr;
        IData/*25:0*/ tb_ddr_sdram_ctrl__DOT__araddr;
        IData/*26:0*/ tb_ddr_sdram_ctrl__DOT__axi_m_i__DOT__araddr_next;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_in;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_rise;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__dq_fall;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Dq_buf;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__DLL_count;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__aref_count;
        IData/*31:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count;
        IData/*25:0*/ __Vdly__tb_ddr_sdram_ctrl__DOT__awaddr;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Prech_count__0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__MRD_chk;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RFC_chk;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RRD_chk;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk0;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk1;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk2;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAS_chk3;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk0;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk1;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk2;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RAP_chk3;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk0;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk1;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk2;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RC_chk3;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk0;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk1;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk2;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RCD_chk3;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk0;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk1;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk2;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__RP_chk3;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk0;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk1;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk2;
        QData/*63:0*/ tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__WR_chk3;
        VlUnpacked<CData/*0:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cmnd;
        VlUnpacked<CData/*1:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_bank;
        VlUnpacked<SData/*10:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_cols;
        VlUnpacked<CData/*0:0*/, 4> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cmnd;
        VlUnpacked<CData/*1:0*/, 4> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_bank;
        VlUnpacked<SData/*10:0*/, 4> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_cols;
        VlUnpacked<CData/*0:0*/, 4> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Read_precharge;
        VlUnpacked<CData/*0:0*/, 4> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Write_precharge;
        VlUnpacked<IData/*31:0*/, 4> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Count_precharge;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__A10_precharge;
        VlUnpacked<CData/*1:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Bank_precharge;
        VlUnpacked<CData/*0:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_precharge;
        VlUnpacked<CData/*0:0*/, 7> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__Cmnd_bst;
        VlUnpacked<CData/*7:0*/, 32768> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__mem_array;
        VlUnpacked<IData/*25:0*/, 32768> tb_ddr_sdram_ctrl__DOT__ddr_model_i__DOT__addr_array;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb8afa405__0;
    VlTriggerScheduler __VtrigSched_h238f39d8__0;
    VlTriggerScheduler __VtrigSched_h238f3a17__0;
    VlTriggerScheduler __VtrigSched_he318f661__0;
    VlTriggerScheduler __VtrigSched_hdcd9394b__0;
    VlTriggerScheduler __VtrigSched_h474ca693__0;
    VlTriggerScheduler __VtrigSched_h95d63a37__0;
    VlTriggerScheduler __VtrigSched_h8aa021b4__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<25> __VactTriggered;
    VlTriggerVec<25> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ddr_sdram_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ddr_sdram_ctrl___024root(Vtb_ddr_sdram_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_ddr_sdram_ctrl___024root();
    VL_UNCOPYABLE(Vtb_ddr_sdram_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
