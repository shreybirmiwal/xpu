// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_world.h for the primary calling header

#ifndef VERILATED_VHELLO_WORLD___024ROOT_H_
#define VERILATED_VHELLO_WORLD___024ROOT_H_  // guard

#include "verilated.h"


class Vhello_world__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_world___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(sum,0,0);
    VL_OUT8(carry,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhello_world__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_world___024root(Vhello_world__Syms* symsp, const char* namep);
    ~Vhello_world___024root();
    VL_UNCOPYABLE(Vhello_world___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
