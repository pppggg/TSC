#include <iostream>
#include "sim.h"
#include <iomanip>
#include <windows.h>
#include "fns.h"
#include "menu.h"

using namespace std;

static const int OBJ=4;

Simon sn[OBJ];
Simona sna[OBJ];

Sim::Sim(bool s, string n, string sn, int a, int ne, int sh, int ac, int pu, int ene, int hun, int fu, int soc, int bla, int hyg, int env, int com)
    {
        sex=s;
        name=n;
        surname=sn;
        age=a;
        neatness=ne;
        shyness=sh;
        activity=ac;
        pugnacity=pu;

        energy=ene;
        hunger=hun;
        fun=fu;
        social=soc;
        bladder=bla;
        hygiene=hyg;
        environment=env;
        comfort=com;
    };
Sim::~Sim()
{
    cout<<"!";
};

string Sim::sex_rec(bool sx)
{
    sex=sx;
    if(sex)
    {
        return "male";
    }
    else
        return "female";
}

void Sim::create_sim()
{

    int i=0;

    if(sim_rec()==1)
    {
        cout<<endl<<"Name: "; cin>>sn[i].name;
       cout<<endl<<"Surname: "; cin>>sn[i].surname;
       cout<<endl<<"Age (value 0-120): "; cin>>sn[i].age;
       cout<<endl<<"Neatness (value 1-10: 1-Sloppy 10-Neat): "; cin>>sn[i].neatness;
       cout<<endl<<"Shyness (value 1-10: 1-Shy 10-Outgoing): "; cin>>sn[i].shyness;
       cout<<endl<<"Activity (value 1-10: 1-Lazy 10-Active): "; cin>>sn[i].activity;
       cout<<endl<<"Pugnacity (value 1-10: 1-Grouchy 10-Playful): "; cin>>sn[i].pugnacity;

    }
    else
    {
        cout<<endl<<"Name: "; cin>>sna[i].name;
       cout<<endl<<"Surname: "; cin>>sna[i].surname;
       cout<<endl<<"Age (value 0-120): "; cin>>age;
       cout<<endl<<"Neatness (value 1-10: 1-Sloppy 10-Neat): "; cin>>sna[i].neatness;
       cout<<endl<<"Shyness (value 1-10: 1-Shy 10-Outgoing): "; cin>>sna[i].shyness;
       cout<<endl<<"Activity (value 1-10: 1-Lazy 10-Active): "; cin>>sna[i].activity;
       cout<<endl<<"Pugnacity (value 1-10: 1-Grouchy 10-Playful): "; cin>>sna[i].pugnacity;
    }

   cout<<endl<<"Congratulations! Your Sim has been created."<<endl;Sleep(3000);
   menu(0);

}


int* Sim::choose_sim()
{
    int choice;
    int action;
    cout<<endl<<"Choose SIM. Available SIMs: \n";
    for(int i=0;i<OBJ;i++)
        cout<<i+1<<". "<<sn[i].name<<" "<<sn[i].surname<<endl;
    for(int i=0;i<OBJ;i++)
        cout<<(i+1)+OBJ<<". "<<sna[i].name<<" "<<sna[i].surname<<endl;
    cout<<endl<<"My choice: ";
    cin>>choice;
    if(choice>0 && choice<OBJ+1)
            {
                cout<<endl<<sn[choice-1].name<<" "<<sn[choice-1].surname<<" is under control now. What would you like to do "<<sn[choice-1].name<<"?";
                cout<<endl<<sn[choice-1].name<<" "<<sn[choice-1].surname<<": ";
                int tab_sm[2];
                tab_sm[0]=1;             //funkcja zwraca tablice 2-el. plec i numer indeksu do obiektu
                tab_sm[1]=(choice-1);
                Sleep(3000);
                menu(1);
                return tab_sm;
            }
    else if(choice>OBJ && choice<(2*(OBJ+1)))
            {
                cout<<endl<<sna[choice-(OBJ+1)].name<<" "<<sna[choice-(OBJ+1)].surname<<" is under control now. What would you like to do "<<sna[choice-(OBJ+1)].name<<"?";
                cout<<endl<<sna[choice-(OBJ+1)].name<<" "<<sna[choice-(OBJ+1)].surname<<": ";
                int tab_sma[2];
                tab_sma[0]=0;             //funkcja zwraca tablice 2-el. plec i numer indeksu do obiektu
                tab_sma[1]=(choice-(OBJ+1));
                Sleep(3000);
                menu(1);
                return tab_sma;
            }
    //cin>>action;
    Sleep(3000);

    menu(1);
}

void Sim::show_me()
{
    cout<<endl<<name<<" "<<surname<<" ("<<sex_rec(sex)<<" "<<age<<") "<<endl;
    cout<<"Parameters: ("<<neatness<<","<<shyness<<","<<activity<<","<<pugnacity<<")"<<endl;

}

void Sim::show_status()
{
	system("cls");
    HANDLE hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute( hOut, FOREGROUND_RED | FOREGROUND_GREEN );

    cout<<fixed<<right;
        cout<<endl<<" \xDB  Active Sim: "<<name<<" "<<surname<<endl;
    cout<<"\xC9";
    for(int i=0; i<52; i++) cout<<"\xCD"; cout<<"\xBB";

    cout<<endl<<"\xBA"<<setw(10)<<"Energy: "; for(int i=0;i<energy;i++) cout<<"\xB2"; for(int j=0;j<(10-energy);j++) cout<<"\xB0";
        cout<<setw(20)<<"Bladder: "; for(int i=0;i<bladder;i++) cout<<"\xB2"; for(int j=0;j<(10-bladder);j++) cout<<"\xB0"; cout<<"  \xBA";
    cout<<endl<<"\xBA"<<setw(10)<<"Hunger: "; for(int i=0;i<hunger;i++) cout<<"\xB2"; for(int j=0;j<(10-hunger);j++) cout<<"\xB0";
        cout<<setw(20)<<"Hygiene: "; for(int i=0;i<hygiene;i++) cout<<"\xB2"; for(int j=0;j<(10-hygiene);j++) cout<<"\xB0"; cout<<"  \xBA";
    cout<<endl<<"\xBA"<<setw(10)<<"Fun: ";for(int i=0;i<fun;i++)        cout<<"\xB2"; for(int j=0;j<(10-fun);j++) cout<<"\xB0";
        cout<<setw(20)<<"Environment: "; for(int i=0;i<environment;i++)cout<<"\xB2"; for(int j=0;j<(10-environment);j++) cout<<"\xB0"; cout<<"  \xBA";
    cout<<endl<<"\xBA"<<setw(10)<<"Social: ";for(int i=0;i<social;i++)  cout<<"\xB2"; for(int j=0;j<(10-social);j++) cout<<"\xB0";
        cout<<setw(20)<<"Comfort: "; for(int i=0;i<comfort;i++)   cout<<"\xB2"; for(int j=0;j<(10-comfort);j++) cout<<"\xB0"; cout<<"  \xBA";
    cout<<endl<<"\xC8";
    for(int i=0; i<52; i++) cout<<"\xCD"; cout<<"\xBC";
    SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN );
    /*cout<<"Energy [1-10]: "<<energy<<endl;
    cout<<"Hunger [1-10]: "<<hunger<<endl;
    cout<<"Fun [1-10]: "<<fun<<endl;
    cout<<"Social [1-10]: "<<social<<endl;
    cout<<"Bladder [1-10]: "<<bladder<<endl;
    cout<<"Hygiene [1-10]: "<<hygiene<<endl;
    cout<<"Environment [1-10]: "<<environment<<endl;
    cout<<"Comfort [1-10]: "<<comfort<<endl;*/
}

Simon::Simon(bool s, string n, string sn, int a, int ne, int sh, int ac, int pu, int ene, int hun, int fu, int soc, int bla, int hyg, int env, int com):Sim(s,n,sn,a,ne,sh,ac,pu,ene,hun,fu,soc,bla,hyg,env,com)
{

};
Simon::~Simon()
{
    cout<<"!";
};

Simona::Simona(bool s, string n, string sn, int a, int ne, int sh, int ac, int pu, int ene, int hun, int fu, int soc, int bla, int hyg, int env, int com):Sim(s,n,sn,a,ne,sh,ac,pu,ene,hun,fu,soc,bla,hyg,env,com)
{
    sex=s;
    name=n;
};
Simona::~Simona()
{
    cout<<"!";
};
