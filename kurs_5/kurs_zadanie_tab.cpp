#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    double tab[5][5]={
        {1,3.58,5,10,2},
        {2,9.61,5,25,5},
        {3,8.52,8,18,3},
        {4,10.25,8,36,6},
        {5,6.17,23,4,1}
    };
    double cena_brutto,wartosc = 0;
    int i;
    for (i=0;i<=4;i++)
    {
        cena_brutto=tab[i][1]+(tab[i][2]/100)*tab[i][1];

        wartosc = wartosc + ( cena_brutto * tab[i][3]*tab[i][4]);

        cout<<"cena brutto towaru : "<<tab[i][0]<<" wynosi :"<<cena_brutto<<endl;
    };

    cout<<"wartosc magazynu wynosi : "<<wartosc<<endl;

    return 0;
}