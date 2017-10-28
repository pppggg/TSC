#include <iostream>
#include "sim.h"
#include "fns.h"
#include "menu.h"

using namespace std;


int main()
{
    naglowek_animacja();
    int pst=0; //ustawienie pozycji startowej do menu na 0 bo funkcja przyjmuje parametr (pierwsza)
    menu(pst);

    return 0;

    /*
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
*/

}
