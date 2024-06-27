#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   
    system("cls");
    int liczba,dzielnik;
    cout<<"Podaj liczbe : "<<endl;

    while (cin>>liczba)
    {   
        
        for(dzielnik=1;dzielnik<=liczba;dzielnik++)
        {
            if (liczba%dzielnik==0)
            {
                cout<<dzielnik<<" ";
            } 
        }

        cout<<"\n \n Podaj liczbe : "<<endl;
    }
    

    
        
    return 0;
}