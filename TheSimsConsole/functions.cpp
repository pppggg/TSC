#include <iostream>

using namespace std;

bool sim_rec()
{
    char s;
    cout<<endl<<"We are creating new Sim. Give some information:"<<endl;
    cout<<endl<<"Sex: M/F (Male/Female):"<<endl; cin>>s;
    if(s=='m' || s=='M')
    {
        return 1;
    }
    else if(s=='f' || s=='F')
    {
        return 0;
    }
    else {cout<<"bug";}
}
