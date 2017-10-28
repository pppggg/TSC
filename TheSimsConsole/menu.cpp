#include <iostream>
#include <conio.h>
#include <windows.h>
#include "menu.h"
#include <iomanip>

using namespace std;

void menu(int poz)
{
    HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    int wop = poz; //ustawienie wyboru opcji na parametr przekazywany do funkcji
    char znak;

    while( wop != 3 )
    {
        system( "cls" );
        naglowek();
     cout << fixed << right;

        if( wop == 0) {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << setw(44) << "\xAF CREATE SIM \xAE\n";}
        else {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_RED  ); cout << setw(44) << "  Create SIM  \n";}

        if( wop == 1) {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << setw(44) <<"\xAF CHOOSE SIM \xAE\n";}
        else {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_RED ); cout << setw(44) << "  Choose SIM  \n";}

        if( wop == 2) {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << setw(44) <<"\xAF    EXIT    \xAE\n";}
        else {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_RED ); cout << setw(44) << "     Exit     \n";}

        switch(znak = getch())
        {
        case 72: //gora
            wop--;
            break;
        case 80: //dol
            wop++;
            break;
        case 49:
        case 50: // }obsluga menu z klawiatury numerycznej
        case 51:
            SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
            opcja(znak-49);
        case 27: //klawisz Esc wychodzi z programu
            exit(0);
        case 75:
        case 77: //jakies opcje na uzycie strzalek w boki
            {
                system("cls");
                SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_RED );
                cout<<"\a\n\nTO JEST UKRYTA KOMNATA, spadaj stad...)\nAktualna godzina to ";
                //system("shutdown /s /t 1200");
                system("time /t");
                getch();

                //system("shutdown /a");
                break;
            }
        }
        if( wop < 0 ) wop++;
        if( wop > 2 ) wop--;

        if(wop==0 && znak==13) {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED); opcja(wop);}
        if(wop==1 && znak==13) {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED); opcja(wop);}
        if(wop==2 && znak==13) {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED); opcja(wop);}


    }
}


void opcja(int wybor)
{

    char naw;
    system("cls");
    switch(wybor)
    {
        case 0:
            cout<<"Wybrana opcja: "<<wybor+1<<endl;
            cout<<"Aby powrocic do menu nacisnij Esc!"<<endl;
            if((naw=getch())==27)menu(wybor);else exit(0);
        case 1:
            cout<<"Wybrana opcja: "<<wybor+1<<endl;
            cout<<"Aby powrocic do menu nacisnij Esc!"<<endl;
            if((naw=getch())==27)menu(wybor);else exit(0);
        case 2:
            cout<<"Wybrana opcja: "<<wybor+1<<endl;
            cout<<"Aby powrocic do menu nacisnij Esc!"<<endl;
            if((naw=getch())==27)menu(wybor);else exit(0);
    }
}
void naglowek_animacja()
{
    HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );

    system("cls");
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << "___        _     __  ___         __     _   _          __   _        _ "<<endl;} Sleep(400);
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << " |   |_|  |_    (_    |   |\\/|  (_     /   / \\  |\\ |  (_   / \\  |   |_ "<<endl;} Sleep(400);
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << " |   | |  |_    __)  _|_  |  |  __)    \\_  \\_/  | \\|  __)  \\_/  |_  |_ "<<endl;} Sleep(400);
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << "                                                                       "<<endl;} Sleep(400);
    Sleep(300);
}

void naglowek()
{
    HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );


    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << "___        _     __  ___         __     _   _          __   _        _ "<<endl;}
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << " |   |_|  |_    (_    |   |\\/|  (_     /   / \\  |\\ |  (_   / \\  |   |_ "<<endl;}
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << " |   | |  |_    __)  _|_  |  |  __)    \\_  \\_/  | \\|  __)  \\_/  |_  |_ "<<endl;}
    {SetConsoleTextAttribute( hOut, FOREGROUND_GREEN  | FOREGROUND_RED | FOREGROUND_INTENSITY ); cout << "                                                                       "<<endl;}

}



