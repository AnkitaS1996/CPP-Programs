/// ////////////////////////////////////// Factorial Program ////////////////////////////////////////////
///       Input = 5
///      Output = 120
/// ////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int No = 0,Fact = 1,Temp = 0;
   // Fact = 1;
    cout<<"\n Enter Any Number : ";
    cin>>No;

    for(Temp = No;Temp > 1;Temp--)
    {
        Fact = Fact * Temp;
    }
    cout<<"\n Factorial is = "<<Fact;
    _getch();
    return 0;
}
