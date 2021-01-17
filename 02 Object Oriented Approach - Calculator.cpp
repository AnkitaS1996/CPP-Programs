#include<iostream>
#include<conio.h>
using namespace std;

class Calculator
{
    public:
        int iNo1,iNo2,iRes;  ///Data Members Or Characteristics Or Class Variable
        void Add();         ///Member Function Add Or Behaviors Declaration
        void Sub()          ///Member Function Sub Or Behaviors Declaration & Defination Inside Class
        {
            iRes = iNo1 - iNo2;
        }
        void Mul();         ///Member Function Mul Or Behaviors Declaration
        void Div()          ///Members Function Div Or Behaviors Declaration & Defination Inside Class
        {
            iRes = iNo1 / iNo2;
        }

};
void Calculator :: Add()    ///Member Function Or Behaviors Declarations & Defination Outside class
{
    iRes = iNo1 + iNo2;
}
void Calculator :: Mul()    ///Member Function Or Behaviors Declarations & Definations Outside Class
{
    iRes = iNo1 * iNo2;
}

int main()
{
    Calculator obj1,obj2,obj3,obj4;///ClassName(Calculator) Create Object
    cout<<endl;
    cout<<"*********Program CPP Object Oriented Concept -- Calculator *************"<<endl<<endl;;
    obj1.iNo1 = 10;                   ///Initialization Of Characteristics
    obj1.iNo2 = 20;                  ///Initialization Of Characteristics
    obj2.iNo1 = 20;                  ///Initialization Of Characteristics
    obj2.iNo2 = 10;                  ///Initialization Of Characteristics
    obj3.iNo1 = 30;                  ///Initialization Of Characteristics
    obj3.iNo2 = 40;                  ///Initialization Of Characteristics
    obj4.iNo1 = 50;                  ///Initialization Of Characteristics
    obj4.iNo2 = 5;                   ///Initialization Of Characteristics
    obj1.Add();
    cout<<"Addition is = "<<obj1.iRes<<endl<<endl;;
    obj2.Sub();
    cout<<"Subtraction is = "<<obj2.iRes<<endl<<endl;;
    obj3.Mul();
    cout<<"Multiplication is = "<<obj3.iRes<<endl<<endl;
    obj4.Div();
    cout<<"Division is = "<<obj4.iRes<<endl<<endl;
    cout<<"Key Press To Continue........!!!!"<<endl;
    getch();
    return 0;
}


