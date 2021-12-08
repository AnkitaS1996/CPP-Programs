///    //////////   Call By Value  /  Pass By Value    ////////

#include<iostream>
#include<conio.h>
using namespace std;

void Value(int);

int main()
{
    int No = 10;
    cout<<"\n Number is = "<<No;   ///10
    Value(No);
    cout<<"\n Number After Function Call is = "<<No;  ///10
    _getch();
    return 0;
}

void Value(int i)
{
    i++;
}

