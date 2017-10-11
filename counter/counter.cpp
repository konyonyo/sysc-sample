#include "counter.h"

void counter::count_proc(){
    O_COUNTER.write(0);
    wait();

    while(true){
        sc_uint<4> i_counter = O_COUNTER.read();
        sc_uint<4> o_counter;
        count_func(i_counter, o_counter);

        O_COUNTER.write(o_counter);
        wait();
    }
}

void counter::count_func(const sc_uint<4> i_counter,
                         sc_uint<4>& o_counter){
    if(i_counter == 10){
        o_counter = 0;
    }else{
        o_counter = i_counter + 1;
    }
}
