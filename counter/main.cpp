#include <systemc.h>
#include "top.h"

int sc_main(int argc, char* argv[]){
    top i_top("i_top");

    sc_trace_file* fp = sc_create_vcd_trace_file("counter_test");
    fp->set_time_unit(1.0, SC_NS);
    sc_trace(fp, i_top.DUT.CLK, "CLK");
    sc_trace(fp, i_top.DUT.RST, "RST");
    sc_trace(fp, i_top.DUT.O_COUNTER, "O_COUNTER");

    sc_start();

    return 0;
}
