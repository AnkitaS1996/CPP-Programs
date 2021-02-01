#include<iostream>
#include<conio.h>
using namespace std;

class Constant_Reference
{
    public:
        int i;
        int &ref;
        Constant_Reference(): i(11),ref(i)    //Constructor//use Member Initialize List
        {
            cout<<"\n Inside Default Constructor"<<endl;
        }
        Constant_Reference(int X): i(11),ref(X)   //Parameterized Constructor
        {
            cout<<"\n Inside Parameterized Constructor Of Our Class..!!"<<endl;
            ref++;
            i = 11;
        }
        ~Constant_Reference()      //Destructor
        {
            cout<<"\n Inside Destructor Of Our Class..!!"<<endl;
        }
};
int main()
{
    Constant_Reference obj;
    Constant_Reference Obj(100);
    int &ref = a;

    cout<<"\n Values is = \t I ="<<Obj.i<< "\t Ref="<<Obj.a<<endl;

    cout<<"\n \t A = " <<a<<endl;

    getch();
    return 0;
}
