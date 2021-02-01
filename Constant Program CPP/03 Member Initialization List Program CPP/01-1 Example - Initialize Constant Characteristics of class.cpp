#include<iostream>
#include<conio.h>
using namespace std;

class Const_Demo
{
    public:
        const int Y;
        int i , j , k;
        Const_Demo(): Y(100)
        {
            cout<<"Inside Default Constructor"<<endl;
        }
        Const_Demo(int X): Y(100),j(++X),i(X),k(++X)
        {
            cout<<"\n Inside Parameterized Constructor Of Our Class..!!"<<endl;
        }
        ~Const_Demo()
        {
            cout<<"\n Inside Destructor Of Our Class..!!"<<endl;
        }
};
int main()
{
    Const_Demo obj1(10);
    cout<<"\n Values is = \t Y = " <<obj1.Y<< "\t I = "<<obj1.i<< "\t J ="<<obj1.j<< "\t K = "<<obj1.k<<endl;
    getch();
    return 0;
}
