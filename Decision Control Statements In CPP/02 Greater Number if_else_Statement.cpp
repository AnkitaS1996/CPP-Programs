#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
   // clrscr();
    cout<<"\n Enter Any Two Numbers : ";
    cin>>iNo1>>iNo2;

    if(iNo1 > iNo2)
    {
        cout<<endl<<iNo1<<" "<<"Number is Greater";
    }
    else
    {
        cout<<iNo2<<" "<<"Number is Greater";
    }

    cout<<"\n Thank You";

    _getch();
    return 0;
}
