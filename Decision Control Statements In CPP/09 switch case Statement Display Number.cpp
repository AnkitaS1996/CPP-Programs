
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int No;
    cout<<"\n Enter Number : ";
    cin>>No;
    switch(No)
    {
        case 1:
            cout<<"\n One";
            break;
        case 2:
            cout<<"\n Two";
            break;
        case 3:
            cout<<"\n Three";
            break;
        case 4:
            cout<<"\n Four";
            break;
        case 5:
            cout<<"\n Five";
            break;
        case 6:
            cout<<"\n Six";
            break;
        case 7:
            cout<<"\n Seven";
            break;
        case 8:
            cout<<"\n Eight";
            break;
        case 9:
            cout<<"\n Nine";
            break;
        case 10:
            cout<<"\n Ten";
            break;
        default:
            cout<<"\n Invalid Number..";
            break;
    }
    _getch();
    return 0;
}
