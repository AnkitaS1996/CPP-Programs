#include<iostream>
#include<conio.h>
using namespace std;
class Factorial
{
    private:
        int iNum;
        int Fact;
        int Temp;
    public:
        void Input_Data()
        {
            cout<<"\n Enter A Number : ";
            cin>>iNum;
        }
        int Calculate_Factorial();
        void Display_Factorial_No()
        {
            cout<<"\n Factorial Of Number is = "<<Fact;
        }
};
int Factorial :: Calculate_Factorial()
{
    Fact = 1;
    if(iNum < 0)
    {
        iNum = -iNum;
    }
    Temp = iNum;
    while(Temp > 1)
    {
        Fact = Fact * Temp;
        Temp--;
    }
    return Fact;
}
int main()
{
    Factorial FObj;
    FObj.Input_Data();
    FObj.Calculate_Factorial();
    FObj.Display_Factorial_No();
    _getch();
    return 0;
}
