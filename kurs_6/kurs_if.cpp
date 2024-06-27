#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    double kwota;
    cout<<"Podaj wartosc zakupow: "<<endl;
    

    while (cin>>kwota)
    {
        if (kwota<100)
        {
            cout<<"Brak rabatu"<<endl;
            cout<<"Dziekujemy za zakupy !!!"<<endl;
        }
        else if (kwota==100)
        {
            cout<<"Rabat wynosi 10 % "<<endl;
            cout<<"Dziekujemy za zakupy !!!"<<endl;
        }
        else
        {
            cout<<"Rabat wynosi 20 % "<<endl;
            cout<<"Dziekujemy za zakupy !!!"<<endl;
        }
        cout<<"Podaj wartosc zakupow: "<<endl;
    }
        
    return 0;
}