#include <iostream>

using namespace std;

class Sim
{

protected:

    bool sex;
    string name;
    static const int tab_size=13;
    int tab_par[tab_size]={35,5,5,5,5,10,10,10,10,10,10,10,10};
    string tab_id[tab_size]={"Age","Neatness","Shyness","Activity","Pugnacity",
                       "Energy","Hunger","Fun","Social","Bladder","Hygiene","Environment","Comfort"};

public:
    Sim();
    ~Sim();

    void wyswietl();
    void wprowadz();
};
