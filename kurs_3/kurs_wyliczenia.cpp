#include <iostream>
#include <stdlib.h>
using namespace std;

enum klub{
    Tesa,
    Lipson,
    Miko,
    Gabi,
    Kortni
};

int main()
{
    system("cls");

    klub osoba;
    osoba= Gabi;
    cout << "Osoba : "<<osoba << endl;

    return 0;
}