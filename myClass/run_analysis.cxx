#include "myClass.C"

int run_analysis(){
    int mc_data = 1;
    int quick = 1;
    int proc = 11;
    myClass t(mc_data, quick, proc);
    //t.init_histograms();
    t.Loop();
    t.print_options();
    //t.print_cuts();

    return 0;
}