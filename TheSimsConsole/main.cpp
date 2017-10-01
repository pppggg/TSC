#include <iostream>
#include "sim.h"
#include "fns.h"

using namespace std;


int main()
{
    if(sim_rec()==1)
    {
        Simon sn1;
        sn1.create_sim();
        sn1.show_me();
        sn1.show_status();
        sn1.choose_sim();
    }
    else
    {
        Simona sna1;
        sna1.create_sim();
        sna1.show_me();
        sna1.show_status();
        sna1.choose_sim();
    }


    return 0;
}
