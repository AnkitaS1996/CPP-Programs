#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int Value = 0;

    cout<<"\n Enter ASCII Value to get Equivalent Character : ";
    cin>>Value;

    cout<<"\n Equivalent Character is "<<Value<<" = "<<char(Value);
    _getch();
    return 0;
}
