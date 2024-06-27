#include<iostream>
#include<stdlib.h>
using namespace std;

void promo(double &cena);
int main()
{   
    system("cls");

    double cena = 100;
    cout<<"Pamiec : "<<&cena<<endl;
    cout<<"Cena przed promo : "<<cena<<"zl"<<endl;
    promo(cena);

    cout<<"Wartosc zmiennej cena : "<<cena<<"zl"<<endl;

    return 0;
}

void promo(double &cena)
{
    cout<<"Pamiec : "<<&cena<<endl; //kopia adresu
    cena*=0.9;
    cout<<"Cena promo 1 : "<<cena<<"zl"<<endl;
    cena*=0.9;
    cout<<"Cena promo 2 : "<<cena<<"zl"<<endl;
}