#include<iostream>
#include<stdlib.h>
using namespace std;

int magazyn(int palety,int sztuki, int warstwy = 3);

int main()
{   
    system("cls");
    cout<<magazyn(1,2)<<endl;
    cout<<magazyn(2,2)<<endl;
    cout<<magazyn(3,2)<<endl;
    cout<<magazyn(6,1,3)<<endl;

    return 0;
}

int magazyn(int palety, int warstwy,int sztuki)
{
    return palety*warstwy*sztuki;
}