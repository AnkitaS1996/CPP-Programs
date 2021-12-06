#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"\n Enter Character : ";
    cin>>ch;

    switch(ch)
    {
        case 'A':
        case 'a':
            cout<<"\n Welcome";
            break;
        case 'B':
        case 'b':
            cout<<"\n Have a Nice Day";
            break;
        case 'C':
        case 'c':
            cout<<"\n Good Day";
            break;
        case 'D':
        case 'd':
            cout<<"\n Thank You..";
            break;
        default:
            cout<<"\n Invalid Character ..";
            break;
    }
    _getch();
    return 0;
}
