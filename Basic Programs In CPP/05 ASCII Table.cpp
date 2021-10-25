#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int Value = 0;

    while(Value < 128)
    {
        cout<<"\n ASCII Value "<<Value<<" = "<<char(Value)<<endl;
        Value++;
    }
    _getch();
    return 0;
}
