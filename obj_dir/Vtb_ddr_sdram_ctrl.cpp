// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ddr_sdram_ctrl__pch.h"

//============================================================
// Constructors

Vtb_ddr_sdram_ctrl::Vtb_ddr_sdram_ctrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ddr_sdram_ctrl__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ddr_sdram_ctrl::Vtb_ddr_sdram_ctrl(const char* _vcname__)
    : Vtb_ddr_sdram_ctrl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ddr_sdram_ctrl::~Vtb_ddr_sdram_ctrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ddr_sdram_ctrl___024root___eval_debug_assertions(Vtb_ddr_sdram_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_ddr_sdram_ctrl___024root___eval_static(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___eval_initial(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___eval_settle(Vtb_ddr_sdram_ctrl___024root* vlSelf);
void Vtb_ddr_sdram_ctrl___024root___eval(Vtb_ddr_sdram_ctrl___024root* vlSelf);

void Vtb_ddr_sdram_ctrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ddr_sdram_ctrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ddr_sdram_ctrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_ddr_sdram_ctrl___024root___eval_static(&(vlSymsp->TOP));
        Vtb_ddr_sdram_ctrl___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_ddr_sdram_ctrl___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_ddr_sdram_ctrl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_ddr_sdram_ctrl::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_ddr_sdram_ctrl::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ddr_sdram_ctrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_ddr_sdram_ctrl___024root___eval_final(Vtb_ddr_sdram_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_ddr_sdram_ctrl::final() {
    Vtb_ddr_sdram_ctrl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ddr_sdram_ctrl::hierName() const { return vlSymsp->name(); }
const char* Vtb_ddr_sdram_ctrl::modelName() const { return "Vtb_ddr_sdram_ctrl"; }
unsigned Vtb_ddr_sdram_ctrl::threads() const { return 1; }
void Vtb_ddr_sdram_ctrl::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ddr_sdram_ctrl::atClone() const {
    contextp()->threadPoolpOnClone();
}
