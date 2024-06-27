#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    string tab_prod[5]={"mleko","maslo","jaja","ziemniaki","ryz"};
    double tab_ceny[5]={4.25,3.59,14.57,9,2.74};
    int zakup;
    cout<<"Wybierz nr produktu : ";
    cin>>zakup;
    cout<<"Twoj produkt to : "<< tab_prod[zakup-1]<<" a, cena to : "<<tab_ceny[zakup-1]<<"zl"<<endl;


    return 0;
}