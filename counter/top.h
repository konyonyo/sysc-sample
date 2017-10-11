#ifndef _TOP_H_
#define _TOP_H_

#include <systemc.h>
#include "counter.h"
#include "tb.h"

SC_MODULE(top){
    sc_clock CLK;
    sc_signal<bool> RST;
    sc_signal<sc_uint<4> > O_COUNTER;

    counter DUT;
    tb TB;

    SC_CTOR(top)
    : CLK("CLK", 10, SC_NS)
    , DUT("DUT")
    , TB("TB")
    {
        DUT.CLK(CLK);
        DUT.RST(RST);
        DUT.O_COUNTER(O_COUNTER);
        TB.CLK(CLK);
        TB.RST(RST);
        TB.O_COUNTER(O_COUNTER);
    }
};

#endif
