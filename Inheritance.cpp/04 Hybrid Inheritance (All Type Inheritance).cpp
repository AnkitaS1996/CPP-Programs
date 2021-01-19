
     ////************** Hybrid Inheritance (All Type Inheritance) **************////

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
        int i;  //Characteristics Or Data Members
        A()      //Constructor
        {
            cout<<"\n Inside A::Constructor Of Our class"<<endl;
        }
        ~A()     //Destructor
        {
            cout<<"\n Inside A::Destructor Of Our class"<<endl;
        }

};
class E
{
    public:
        int j; //Characteristics Or Data Members
        E()     //Constructor
        {
           cout<<"\n Inside E::Constructor Of Our class"<<endl;
        }
        ~E()     //Destructor
        {
            cout<<"\n Inside E::Destructor Of Our Class"<<endl;
        }

};
class F
{
    public:
        int k;  //Characteristics Or Data Members
        F()      //Constructor
        {
            cout<<"\n Inside F::Constructor Of Our Class"<<endl;
        }
        ~F()
        {
            cout<<"\n Inside F::Destructor Of Our Class"<<endl;
        }

};

class B : public A     //Single Level Inheritance
{
    public:
        int a;   //Characteristics Or Data Members
        B()      //Constructor
        {
            cout<<"\n Inside B::Constructor Of Our Class"<<endl;
        }
        ~B()      //Destructor
        {
           cout<<"\n Inside B::Destructor Of Our Class"<<endl;
        }
};

class C : public E,F    //Multilevel Inheritance
{
    public:
        int b;   //Characteristics Or Data Members
        C()       //Constructor
        {
            cout<<"\n Inside C::Constructor Of Our class"<<endl;
        }
        ~C()      //Destructor
        {
            cout<<"\n Inside C::Destructor Of Our Class"<<endl;
        }


};
class D : public B,C    //Multiple Inheritance
{
    public:
        int c;   //Characteristics Or Data Members
        D()      //Constructor
        {
            cout<<"\n Inside D::Constructor Of Our Class"<<endl;
        }
        ~D()     //Destructor
        {
            cout<<"\n Inside D::Destructor Of Our class"<<endl;
        }
        void fun()   //fun() Function Behavior Or Member Function
        {
            cout<<"\n Inside Fun() Function Of Our Class"<<endl;
        }

};

///Main Function

int main()
{
    D DObj;
    DObj.fun();
    cout<<"\n Size Of D Class is = "<<sizeof(DObj)<<endl;
    getch();
    return 0;
}


