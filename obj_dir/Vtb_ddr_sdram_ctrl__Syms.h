// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_DDR_SDRAM_CTRL__SYMS_H_
#define VERILATED_VTB_DDR_SDRAM_CTRL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ddr_sdram_ctrl.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ddr_sdram_ctrl___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_ddr_sdram_ctrl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ddr_sdram_ctrl* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_ddr_sdram_ctrl___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_ddr_sdram_ctrl__ddr_model_i;
    VerilatedScope __Vscope_tb_ddr_sdram_ctrl__ddr_model_i__Control_Logic;

    // CONSTRUCTORS
    Vtb_ddr_sdram_ctrl__Syms(VerilatedContext* contextp, const char* namep, Vtb_ddr_sdram_ctrl* modelp);
    ~Vtb_ddr_sdram_ctrl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
