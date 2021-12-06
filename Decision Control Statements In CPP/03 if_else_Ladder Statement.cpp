#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //clrscr();
    char ch;
    cout<<"\n Enter Any Character : ";
    cin>>ch;
    if(ch == 'A' || ch == 'a')
    {
        cout<<"\n Welcome";
    }
    else if(ch == 'B' || ch == 'a')
    {
        cout<<"\n Good Bye";
    }
    else if(ch == 'C' || ch == 'c')
    {
        cout<<"\n Have A Nice Day.";
    }
    else if(ch == 'D' || ch == 'd')
    {
        cout<<"\n Good Day";
    }
    else
    {
        cout<<"\n Invalid Character..";
    }
    _getch();
    return 0;
}
