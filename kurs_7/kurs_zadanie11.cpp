#include<iostream>
#include<stdlib.h>
using namespace std;

void metka(string towar,float cena);

int main()
{   
    system("cls");
    int cena_netto[3]={120,167,90};
    float stawka_Vat[3]={0.23,0.08,0.15};
    string towar[3]={"czajnik","toster","maszynka"};
    int i;
    for(i=0;i<sizeof(towar);i++)
    {
        metka(towar[i],cena_netto[i]*(1-stawka_Vat[i]));
    }
    return 0;
}

void metka(string towar,float cena)
{
    cout<<"Cena : "<<towar<<" wynosi : "<<cena<<" zl"<<endl<<endl;
}