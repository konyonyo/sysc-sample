#ifndef _TB_H_
#define _TB_H_

#include <systemc.h>

SC_MODULE(tb){
    sc_in_clk CLK;
    sc_out<bool> RST;
    sc_in<sc_uint<4> > O_COUNTER;

    void tb_proc();

    SC_CTOR(tb){
        SC_THREAD(tb_proc);
        sensitive << CLK.pos();
    }
};

#endif
