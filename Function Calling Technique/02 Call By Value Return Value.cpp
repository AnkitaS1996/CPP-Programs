///       Call By Value Or Pass By Value   /////////

#include<iostream>
#include<conio.h>
using namespace std;

int Value(int);

int main()
{
    int No = 10,iRet=0;
    cout<<"\n Number is = "<<No;   ///10
    iRet=Value(No);
    cout<<"\n Number After Function Call is = "<<iRet;  ///11
    _getch();
    return 0;
}

int Value(int i)
{
    i++;
    return i;
}

