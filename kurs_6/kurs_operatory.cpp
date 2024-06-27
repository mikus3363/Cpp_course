#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    int kwota,reszta;
    cout<<"Podaj kwote 100,200,300,400,500(pln) : "<<endl;
    cin>>kwota;

    if (kwota==100 || kwota==200 || kwota==300 || kwota==400 || kwota==500 )
    {
        reszta=kwota-(kwota/10);
        cout<<"Reszta dla klienta wynosi : "<<reszta<<" pln"<<endl;
    }
    else
    {
        cout<<"brak promo"<<endl;
    }
        
    return 0;
}