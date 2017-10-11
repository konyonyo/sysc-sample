#include "tb.h"

void tb::tb_proc(){
    RST.write(false);
    for(int i=0; i<10; ++i){
        wait();
    }

    RST.write(true);

    for(int i=0; i<1000; ++i){
        wait();
    }

    sc_stop();
}
