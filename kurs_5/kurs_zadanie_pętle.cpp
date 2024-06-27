#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    int a=10,b;
    
    do
    {
        cin.clear(); //czysci flage błędu
        cin.sync();  //czysci bufor strumienia , niezbędne do cin.clear

        cout<<"Podaj liczbe calkowita : "<<endl;
        cin>>b;
    } while (cin.good() == 0);
    

    cout<<"Wynik to : "<<a+b<<endl;
    return 0;
}