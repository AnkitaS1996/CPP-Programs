#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int iNo = 0;
    //clrscr();
    UP:
    cout<<"\n Enter Any Number : ";
    cin>>iNo;

    if(iNo == 0 || iNo == 1)
    {
        cout<<"\n Given Number is Natural Numbers..";
        _getch();
        system("cls");
        goto UP;
    }
    (iNo % 2 == 0)? cout<<endl<<iNo<<" "<<"Given Number Even"<<endl : cout<<endl<<iNo<<" "<<"Given Number Odd"<<endl;
    _getch();
    return 0;
}
