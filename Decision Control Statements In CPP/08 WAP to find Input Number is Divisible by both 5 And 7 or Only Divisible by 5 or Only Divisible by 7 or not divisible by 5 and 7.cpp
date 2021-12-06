#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int iNo = 0;

    cout<<"\n Enter Any Number : ";
    cin>>iNo;

    if((iNo%5==0) && (iNo%7==0))
    {
        cout<<"\n Given Number is divisible By 5 And 7";
    }
    else if(iNo % 5 == 0)
    {
        cout<<"\n Given Number is divisible By 5.";
    }
    else if(iNo % 7 == 0)
    {
        cout<<"\n Given Number is divisible By 7";
    }
    else
    {
        cout<<"\n Given Number is Not Divisible By 5 And 7";
    }
    _getch();
    return 0;
}
