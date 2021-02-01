#include<iostream>
#include<conio.h>
using namespace std;

class My_Demo
{
    public:
        int i , j;
        int p = 10;
        const int K = 11;

        My_Demo(): K(15)
        {
            cout<<"\n Inside Default Constructor of Our Class"<<endl;
            cout<<"\n Values of P ="<<p<<endl;
        }

        My_Demo(int X, int Y)
        {
            cout<<"\n Inside Parameterized Constructor"<<endl;
            i = X;
            j = Y;
        }

        void Show()
        {
            cout<<"\n Constant Variable is = "<<K<<endl;
        }

        ~My_Demo()
        {
            cout<<"\n Inside Destructor Of Our class"<<endl;
        }

};

int main()
{
    cout<<"Inside Main()..!!!"<<endl;
    My_Demo obj1;
    My_Demo obj2(10,20);
    obj1.Show();
    cout<<obj2.i<<endl;
    cout<<obj2.j<<endl;
    getch();
    return 0;
}
