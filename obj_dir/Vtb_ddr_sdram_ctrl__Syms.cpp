// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_ddr_sdram_ctrl__pch.h"
#include "Vtb_ddr_sdram_ctrl.h"
#include "Vtb_ddr_sdram_ctrl___024root.h"

// FUNCTIONS
Vtb_ddr_sdram_ctrl__Syms::~Vtb_ddr_sdram_ctrl__Syms()
{
}

Vtb_ddr_sdram_ctrl__Syms::Vtb_ddr_sdram_ctrl__Syms(VerilatedContext* contextp, const char* namep, Vtb_ddr_sdram_ctrl* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(86);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_ddr_sdram_ctrl__ddr_model_i.configure(this, name(), "tb_ddr_sdram_ctrl.ddr_model_i", "ddr_model_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_ddr_sdram_ctrl__ddr_model_i__Control_Logic.configure(this, name(), "tb_ddr_sdram_ctrl.ddr_model_i.Control_Logic", "Control_Logic", -12, VerilatedScope::SCOPE_OTHER);
}
