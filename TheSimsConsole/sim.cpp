#include <iostream>
#include "sim.h"

using namespace std;


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
   cout<<endl<<"Name: "<<endl; cin>>name;
   cout<<endl<<"Surname: "<<endl; cin>>surname;
   cout<<endl<<"Age (value 0-120): "<<endl; cin>>age;
   cout<<endl<<"Neatness (value 1-10: 1-Sloppy 10-Neat): "<<endl; cin>>neatness;
   cout<<endl<<"Shyness (value 1-10: 1-Shy 10-Outgoing): "<<endl; cin>>shyness;
   cout<<endl<<"Activity (value 1-10: 1-Lazy 10-Active): "<<endl; cin>>activity;
   cout<<endl<<"Pugnacity (value 1-10: 1-Grouchy 10-Playful): "<<endl; cin>>pugnacity;
   cout<<endl<<"Congratulations! Your Sim has been created."<<endl;
}

void Sim::choose_sim()
{
    int choose;
    int action;
    cout<<endl<<"Choose SIM. Available SIMs: ";
    // chwilowo, jak stworzymy wiecej simów to bêdzie trzeba tu wprowadziæ pêtlê
    cout<<endl<<name<<" "<<surname<<" [1]";
    cout<<endl<<"My choose: ";
    cin>>choose;
    if (choose==1)
    {
    cout<<endl<<name<<" "<<surname<<" is under control now. What would you like to do "<<name<<"?";
    cout<<endl<<name<<" "<<surname<<": ";
    cin>>action;
    }
}

void Sim::show_me()
{
    cout<<endl<<name<<" "<<surname<<" ("<<sex_rec(sex)<<" "<<age<<") "<<endl;
    cout<<"Parameters: ("<<neatness<<","<<shyness<<","<<activity<<","<<pugnacity<<")"<<endl;

}

void Sim::show_status()
{

    cout<<"Energy [1-10]: "<<energy<<endl;
    cout<<"Hunger [1-10]: "<<hunger<<endl;
    cout<<"Fun [1-10]: "<<fun<<endl;
    cout<<"Social [1-10]: "<<social<<endl;
    cout<<"Bladder [1-10]: "<<bladder<<endl;
    cout<<"Hygiene [1-10]: "<<hygiene<<endl;
    cout<<"Environment [1-10]: "<<environment<<endl;
    cout<<"Comfort [1-10]: "<<comfort<<endl;
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
