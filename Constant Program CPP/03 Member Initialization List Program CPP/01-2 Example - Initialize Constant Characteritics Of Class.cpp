#include<iostream>
#include<conio.h>
using namespace std;

class Const_Demo
{
    public:
        int i , j , k;
        Const_Demo()
        {
            cout<<"Inside Default Constructor"<<endl;
        }
        Const_Demo(int X , int Y): i(X),j(Y),k(51)
        {
            //K = 51; //Error
            i = 11;
            cout<<"\n Inside Parameterized Constructor Of Our Class..!!"<<endl;
        }
        ~Const_Demo()
        {
            cout<<"\n Inside Destructor Of Our Class..!!"<<endl;
        }
};
int main()
{
    Const_Demo obj1(101,70);
    cout<<"\n Values is = \t I = "<<obj1.i<< "\t J ="<<obj1.j<< "\t K = "<<obj1.k<<endl;
    getch();
    return 0;
}
