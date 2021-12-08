///    //////////   Call By Address  /  Pass By Address    ////////
#include<iostream>
#include<conio.h>
using namespace std;
void Address(int*);
int main()
{
    int No = 10;
    cout<<"\n Enter Number : ";
    cin>>No;
    Address(&No);
    cout<<"\n Address Of No = "<<No;
    _getch();
    return 0;
}
void Address(int *P)
{
    (*P)++;
}

