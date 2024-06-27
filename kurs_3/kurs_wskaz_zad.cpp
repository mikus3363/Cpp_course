#include<iostream>
#include<stdlib.h>
using namespace std;



int main()
{   
    system("cls");
    int ciastko = 4 , karmel = 5 , czekolada = 6;

    int *wsk_c, *wsk_k, *wsk_cz ;

    wsk_c=&ciastko;
    wsk_k=&karmel;
    wsk_cz=&czekolada;

    cout<<"Suma : "<<*wsk_c+*wsk_k+*wsk_cz<<endl;
    cout<<"Roznica : "<<*wsk_c-*wsk_k-*wsk_cz<<endl;
    cout<<"Iloczyn : "<<*wsk_c**wsk_k**wsk_cz<<endl;
    cout<<"wskaznik ciacho ; "<<wsk_c<<endl;
    return 0;
}