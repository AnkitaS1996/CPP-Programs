
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 0;
    for(i = 10;i > 0;i--)
    {
        if(i == 5)
        {
            continue;
        }
        cout<<endl<<i;
    }
    _getch();
    return 0;
}
