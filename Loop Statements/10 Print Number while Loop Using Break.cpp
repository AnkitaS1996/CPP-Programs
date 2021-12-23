/// /////////////////////////// O/P = 0,1,2,3 /////////////////////////////////////
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 10;
    while(i>1)
    {
        cout<<"\n"<<i;
        if(i == 4)
        {
            break;
        }
        i--;
    }
    _getch();
    return 0;
}
