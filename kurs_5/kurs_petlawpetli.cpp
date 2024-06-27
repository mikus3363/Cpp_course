#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");

    int kolumna,wiersz;

    for (wiersz=1;wiersz<=10;wiersz++)
    {
        for (kolumna=1;kolumna<=10;kolumna++)
        {
            cout.width(4);
            cout<<kolumna * wiersz;
        }
        cout<<endl;
    } 
    return 0;
}