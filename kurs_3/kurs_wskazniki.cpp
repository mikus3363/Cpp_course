#include<iostream>
#include<stdlib.h>
using namespace std;



int main()
{   
    system("cls");
    int cena_1 = 20 , cena_2 = 40;
    int *wskaznik;
    
    wskaznik = &cena_1;
    cout<<"Cena pierwsza : "<<cena_1<<endl;
    cout<<"Cena pierwsza wskaznik & : "<<&cena_1<<endl;
    cout<<"Cena pierwsza wskaznik : "<<wskaznik<<endl;
    cout<<"Cena pierwsza : "<<*wskaznik<<endl;

    cout<<"Cena pierwsza : "<<cena_2<<endl;
    cout<<"Cena pierwsza wskaznik : "<<&cena_2<<endl;

    
    
    return 0;
}