#include<iostream>
#include<conio.h>
using namespace std;

int Greater_Number(int,int);

int main()
{
    int i,j,Res;
    cout<<"\n Enter Any Two Numbers : ";
    cin>>i>>j;
    Res = Greater_Number(i,j);
    cout<<"\n Greater Number is = "<<Res;
    _getch();
    return 0;
}
int Greater_Number(int No1,int No2)
{
    if(No1 > No2)
    {
        return(No1);
    }
    else
    {
        return(No2);
    }
}

