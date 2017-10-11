#ifndef _COUNTER_H_
#define _COUNTER_H_

#include <systemc.h>

SC_MODULE(counter){
    sc_in_clk CLK;
    sc_in<bool> RST;
    sc_out<sc_uint<4> > O_COUNTER;

    void count_proc();
    void count_func(const sc_uint<4> i_counter, sc_uint<4>& o_counter);

    SC_CTOR(counter)
    : CLK("CLK")
    , RST("RST")
    , O_COUNTER("O_COUNTER")
    {
        SC_CTHREAD(count_proc, CLK.pos());
        reset_signal_is(RST, false);
    }
};

#endif
