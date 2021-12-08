///    //////////   Call By Reference  /  Pass By Reference    ////////

#include<iostream>
#include<conio.h>

using namespace std;

void Address(int &Ref)
{
    cout<<"\n Ref = "<<Ref<<endl;
    Ref++;
}
int main()
{
    int No = 10;
    cout<<"\n Enter Number : ";
    cin>>No;
    Address(No);
    cout<<"\n Address Of No = "<<No;
    _getch();
    return 0;
}
