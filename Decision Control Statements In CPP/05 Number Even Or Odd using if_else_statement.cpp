#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int iNo = 0;
    //clrscr();
    cout<<"\n Enter Any Number : ";
    cin>>iNo;

    if(iNo == 0 || iNo == 1)
    {
        cout<<"\n Given Number is Natural Numbers..";
        return - 1;
    }
    if(iNo % 2 == 0)
    {
        cout<<endl<<iNo<<" "<<"Given Number Even";
    }
    else
    {
        cout<<endl<<iNo<<" "<<"Given Number Odd";
    }
    _getch();
    return 0;
}
