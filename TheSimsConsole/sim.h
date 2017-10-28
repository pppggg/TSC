#include <iostream>

using namespace std;

class Sim
{
    protected:
    bool sex;
    string name, surname;
    int age, neatness, shyness, activity, pugnacity;
    int energy, hunger, fun, social, bladder, hygiene, environment, comfort;

    public:

    Sim(bool s=1, string n="Henryk", string sn="Cwir", int a=35, int ne=5, int sh=5, int ac=5, int pu=5,
        int energy=10, int hunger=9, int fun=8, int social=6, int bladder=5, int hygiene=8, int environment=9, int comfort=7);
    ~Sim();

    void create_sim();
    void show_me();
    void show_status();
    string sex_rec(bool sx);
    void welcome();
    void goodbye();
    int* choose_sim();
};

class Simon:public Sim
{
    public:
    Simon(bool s=1, string n="Henryk", string sn="Cwir", int a=35, int ne=5, int sh=5, int ac=5, int pu=5,
        int energy=10, int hunger=9, int fun=8, int social=6, int bladder=5, int hygiene=8, int environment=9, int comfort=7);
    ~Simon();
};


class Simona:public Sim
{
    public:
    Simona(bool s=0, string n="Majka", string sn="Cwir", int a=35, int ne=5, int sh=5, int ac=5, int pu=5,
        int energy=10, int hunger=9, int fun=8, int social=6, int bladder=5, int hygiene=8, int environment=9, int comfort=7);
    ~Simona();
};

