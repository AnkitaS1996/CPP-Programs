#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int No1 = 10,No2 = 20,Temp = 0;
    cout<<"\n Swapping Number Before Swapping No1 = "<<No1<<" No2 = "<<No2<<endl;
    Temp = No1;
    No1= No2;
    No2 = Temp;
    cout<<"\n Swapping Number After Swapping No1 = "<<No1<<" No2 = "<<No2<<endl;
    _getch();
    return 0;
}
