/// /////////////////////////// O/P = 0,1,2,3 /////////////////////////////////////
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 0;
    for(i = 0;i<10;i++)
    {
        if(i == 4)
        {
            break;
        }
        cout<<"\n"<<i;
    }
    _getch();
    return 0;
}
