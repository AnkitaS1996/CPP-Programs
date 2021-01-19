
    ////**** Inheritance - Single Level Inheritance ****////

#include<iostream>
#include<conio.h>
using namespace std;

class Base  //class name
{
    public:    //Access Specifier
        int x,y;  //Data member or Characteristics
        Base()       //Default Constructor
        {
          cout<<"\n Base::Constructor"<<endl;
        }
        ~Base()    //Destructor
        {
            cout<<"\n Base::Destructor"<<endl;
        }
        void Gun()   // Behavior Or Member Function Gun() Function
        {
            cout<<"\n Gun::Fun() Function...!"<<endl;
        }
};
class Derived : public Base
{
    public:
        int i,j; //Data Members Or Characteristics
        Derived()   //Default Constructor
        {
            cout<<"\n Derived::Constructor"<<endl;
        }
        ~Derived()   //Destructor
        {
            cout<<"\n Derived::Destructor"<<endl;
        }
        void Fun()   //Behavior Or Member Function Fun()Function
        {
            cout<<"\n fun::Fun() Function Of Our Class"<<endl;
        }

};
int main()
{
    Base BObj;
    Derived DObj;    //
    cout<<"\n Size Of Base Class is = "<<sizeof(BObj)<<endl;
    cout<<"\n Size Of Derived Class is = "<<sizeof(DObj)<<endl;
    getch();
    return 0;
}
