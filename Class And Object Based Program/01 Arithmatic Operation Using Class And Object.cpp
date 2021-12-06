#include<iostream>
#include<conio.h>
using namespace std;
class Arithmatic
{
    public:
        int iNo1,iNo2,iAns; ///Characteristics Or Datamembers
        void Add();    /// Behaviour OR Member Function Declaration Inside Class
        void Sub();
        void Div()
        {
            iAns = iNo1 / iNo2;
        }
        void Mul()
        {
            iAns = iNo1 * iNo2;
        }
};
void Arithmatic :: Add()    ////// Behaviour OR Member Function Declaration Outside Class
{
    iAns = iNo1 + iNo2;
}
void Arithmatic :: Sub()
{
    iAns = iNo1 - iNo2;
}
int main()
{
    Arithmatic Aobj1,Sobj2,Dobj3,Mobj4;
    Aobj1.iNo1 = 10;
    Aobj1.iNo2 = 20;
    Sobj2.iNo1 = 40;
    Sobj2.iNo2 = 10;
    Dobj3.iNo1 = 100;
    Dobj3.iNo2 = 50;
    Mobj4.iNo1 = 60;
    Mobj4.iNo2 = 90;
    Aobj1.Add();
    Sobj2.Sub();
    Dobj3.Div();
    Mobj4.Mul();
    cout<<"Addition is  = "<<Aobj1.iAns<<endl;
    cout<<"Substraction is  = "<<Sobj2.iAns<<endl;
    cout<<"Multiplication is  = "<<Dobj3.iAns<<endl;
    cout<<"Division is  = "<<Mobj4.iAns<<endl;
    _getch();
    return 0;
}
