#include <iostream>
#include <stdlib.h>
using namespace std;

float odejmowanie(float wartosc_zakup, float wplata_klient);

int main()
{
    system("cls");
    float wartosc_zakup, wplata_klient;
    float (*wsk_funkcji)(float,float);
    wsk_funkcji = &odejmowanie;
    cout << "Podaj wartosc zakupow : " << endl;
    cin >> wartosc_zakup;
    cout << "Podaj wartosc jaka otrzymales od klienta : " << endl;
    cin >> wplata_klient;
    cout<<wsk_funkcji(wartosc_zakup,wplata_klient)<<endl;

    return 0;
}

float odejmowanie(float wartosc_zakup, float wplata_klient)
{
    float roznica;
    roznica = wplata_klient - wartosc_zakup;
    if (roznica < 0)
    {
        cout << "Klient dal za malo pieniedzy : " << endl;
    }
    else
    {
        cout << "Reszta wynosi : " << roznica << endl;
    }
}