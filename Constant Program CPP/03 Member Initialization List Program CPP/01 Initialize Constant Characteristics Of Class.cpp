#include<iostream>
#include<conio.h>
using namespace std;

class Constant_Initialize_Character
{
    public:
        int i,j,k;
        const int a;
        Constant_Initialize_Character(): a(2),i(20),j(30),k(40)
        {
            cout<<"\n Inside Default Constructor Of Our Class....!!!"<<endl;
        }
        Constant_Initialize_Character(int X): a(X),i(X),j(X),k(X)
        {
            cout<<"\n Inside Parameterized Constructor Of Our Class"<<endl;
        }

        ~Constant_Initialize_Character()
        {
            cout<<"\n Inside Destructor Of Our Class..!!!"<<endl;
        }

};

int main()
{
    Constant_Initialize_Character Obj1;
    Constant_Initialize_Character Obj2(101);

    cout<<"\n Inside main()...!!!"<<endl;
    cout<<"\n Values is = \t A ="<<Obj1.a<< "\t I ="<<Obj1.i<< "\t J ="<<Obj1.j<< "\t K ="<<Obj1.k<<endl;
    cout<<"\n Values is = \t A ="<<Obj2.a<< "\t I ="<<Obj2.i<< "\t J ="<<Obj2.j<< "\t K ="<<Obj2.k<<endl;

    getch();
    return 0;
}
