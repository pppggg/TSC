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

}
