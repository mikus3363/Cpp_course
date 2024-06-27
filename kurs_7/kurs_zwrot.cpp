#include <iostream>
#include <stdlib.h>
using namespace std;

int cena();

int main()
{
    system("cls");
    
    int cena_towaru, nowa_cena;
    
    cena_towaru = cena();
    nowa_cena = cena_towaru + 3;
    cout << nowa_cena << endl;
    return 0;
}

int cena()
{
    return 2;
}