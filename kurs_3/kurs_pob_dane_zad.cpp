#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>


using namespace std;


int main()
{
    system("cls");
    SYSTEMTIME dzis;
    GetLocalTime(&dzis);

    int rok = dzis.wYear;
    int data;
    cout << "Podaj swoj rok urodzenia : ";
    cin >> data;

    cout<<"Masz :"<<rok-data<<" lat"<<endl;

    return 0;
}