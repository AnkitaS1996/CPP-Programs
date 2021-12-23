#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 0,No = 0;
    cout<<"\n Enter Number : ";
    cin>>No;
    i=1;
    while(i<=10)
    {
        cout<<"\n"<<i*No;
        i++;
    }
    _getch();
    return 0;
}
