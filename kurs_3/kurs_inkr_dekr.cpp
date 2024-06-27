#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    int drinki = 3;
    int shots = 4;
    shots = ++shots + ++shots ;

    drinki+=1; //drinki=drinki+1
    --drinki;
    cout<<"Drinow jest : "<<++drinki<<endl; /* wartosc ++ przed dodaje przed wywołaniem a po wywoła po dlatego ++drinki wynosi=4 , 
    a drinki++=3
    */
    cout<<shots<<endl;
    return 0;
}