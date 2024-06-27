#include<iostream>
#include<stdlib.h>
using namespace std;

void powitanie(string imie, string nazwisko, int miejsce);
void pozegnanie();

int main()
{   
    system("cls");
    cout<<"Szanowni Kursanci"<<endl;
    powitanie("Adam","Nowak",20);
    powitanie("Piter","Nowak",10);
    powitanie("Kuba","Nowak",15);
    return 0;
}

void powitanie(string imie, string nazwisko, int miejsce)
{
    cout<< imie << nazwisko <<"Witaj"<<endl;
    cout<<"Miejsce przy stole : "<<miejsce<<endl;
    pozegnanie();
}

void pozegnanie()
{
    cout<<"Dzieki za udzial"<<endl<<endl;
    
}