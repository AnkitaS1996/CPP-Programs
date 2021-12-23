#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 0,j = 0,No1 = 0,No2 = 0;
    cout<<"\n Enter Two Numbers: ";
    cin>>No1>>No2;
    i = 1;
    for(i=1;i<=10;i++)
    {
        for(j=No1;j<=No2;j++)
        {
            cout<<"\t"<<i*j;
        }
        cout<<"\n";
    }
    _getch();
    return 0;
}
