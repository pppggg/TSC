#include <iostream>
#include <stdlib.h>
#include "sim.h"

Sim::Sim()
{
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
    system("cls");
    cout<<endl<<"-----------"<<endl<<"("<<sex<<") "<<name<<endl;
    for(int i=0; i<tab_size; i++)
    {
        cout<<tab_id[i]<<": "<<tab_par[i]<<endl;
    }
}

void Sim::wprowadz()
{
    cout<<endl<<"-----------"<<endl<<"Hey. Podaj kilka informacji o Twoim Simie: "<<endl;
    cout<<"Name: "; cin>>name;
    for(int i=0; i<5; i++)
    {
        if(i!=0)
        {
            cout<<endl<<tab_id[i]<<" [1-10]: "; cin>>tab_par[i];
        }
        else {cout<<endl<<tab_id[i]<<" [0-120]: "; cin>>tab_par[i];}
    }
}

Sim::~Sim()
{
    cout<<endl<<"Henryk's dead... ;(";
};
