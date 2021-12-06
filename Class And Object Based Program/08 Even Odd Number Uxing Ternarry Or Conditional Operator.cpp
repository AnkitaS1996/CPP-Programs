#include<iostream>
#include<conio.h>
using namespace std;
class EvenOdd
{
    private:
        int iNum;
    public:
        void Input_Accept()
        {
            cout<<"\n Enter Any Number : ";
            cin>>iNum;
        }
        void Check_Even_Odd()
        {
            (iNum % 2 == 0)? cout<<"\n Given Number "<<iNum<<" is Even." : cout<<"\n Given Number "<<iNum<<" is Odd";
        }

};
int main()
{
    EvenOdd EObj;
    EObj.Input_Accept();
    EObj.Check_Even_Odd();
    _getch();
    return 0;
}
