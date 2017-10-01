#include <iostream>
#include "sim.h"

Sim::Sim()
{
    cout<<"Tworze domyslnego sima...";
    sex=1;
    name="Henryk";

    /*for(int i=0; i<12; i++)
    {
        tab_par[i]=i+1;
        tab_id[i]="Parametr: ";
    }*/

};

void Sim::wyswietl()
{
    cout<<endl<<"("<<sex<<") "<<name<<endl;
    for(int i=0; i<tab_size; i++)
    {
        cout<<tab_id[i]<<": "<<tab_par[i]<<endl;
    }
}

Sim::~Sim()
{
    cout<<endl<<"Henryk's dead... ;(";
};
