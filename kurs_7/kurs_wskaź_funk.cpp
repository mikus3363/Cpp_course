#include<iostream>
#include<stdlib.h>
using namespace std;

int dodawanie();
int odejmowanie();

int main()
{   
    system("cls");
    
    int (*wsk_funkcji)();

    wsk_funkcji = &dodawanie;

    cout<<wsk_funkcji()<<endl;

    wsk_funkcji = &odejmowanie;

    cout<<wsk_funkcji()<<endl;    
    return 0;
}

int dodawanie()
{
    return 5+3;
}

int odejmowanie()
{
    return 8-4;
}