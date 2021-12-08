
#include<iostream>
#include<conio.h>
using namespace std;

int Addition(int,int);

int main()
{
    int No1=0,No2 = 0,Ans = 0;
    cout<<"\n Enter Any Two Numbers : ";
    cin>>No1>>No2;
    Ans = Addition(No1,No2);
    cout<<"\n Addition is = "<<Ans;
    _getch();
    return 0;
}
int Addition(int Num1,int Num2)
{
    return(Num1+Num2);
}


