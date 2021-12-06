//////////////////////////////////// *** if Statement Using goto ***///////////////////////////////////////////////
///   Input = Enter Number  :   20
///           Enter Number  :   50
///           Enter Number  :   70
///           Enter Number  :   95
///   Input = Total Sum = 20 + 50 + 70 + 95 = 335
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int iNo = 0,Total = 0;
    UP:
    cout<<"\n Enter Number : ";
    cin>>iNo;
    Total = Total + iNo;
    if(iNo < 100)
    {
        goto UP;
    }
    cout<<"\n Total Sum is = "<<Total<<endl;
    _getch();
    return 0;
}
