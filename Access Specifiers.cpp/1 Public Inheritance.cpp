
/////*********  Access Specifiers -- Public Inheritance   *********/////

#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
        int a,b; //Characteristics or Data members
        Base()   //Constructor
        {
            cout<<"\n Base::Constructor Of Our class"<<endl;
        }
        ~Base()  //Destructor
        {
            cout<<"\n Base::Destructor Of Our Class"<<endl;
        }
    private:
        int i,j; //Characteristics or Data members
    protected:
        int k,l; //Characteristics or Data members

};

class Derived : public Base
{
    public:
        int x; //Characteristics or Data members
        Derived()   //Constructor
        {
            cout<<"\n Derived::Constructor of our class"<<endl;
        }
        ~Derived()   //Destructor
        {
            cout<<"\n Derived::Destructor of our class"<<endl;
        }
    private:
        int y; //Characteristics or Data members
    protected:
        int z; //Characteristics or Data members
};

int main()
{
    Derived DObj;
    DObj.a = 40;
    DObj.b = 50;
    //DObj.i = 60;       ///Not Allowed Bcz private
    //DObj.j = 70        ///Not Allowed Bcz private
   // DObj.k = 100;      ///Not Allowed Bcz protected
   // DObj.l = 101;      ///Not Allowed Bcz protected
    DObj.x = 5;
    //DObj.y = 10;       ///Not Allowed Bcz private
    //Dobj.z = 20;      ///Not Allowed Bcz protected
    cout<<"\n Values is --> A="<<DObj.a<<" B="<<DObj.b<<" X="<<DObj.x<<endl;
    cout<<"\n Size of Given Object = "<<sizeof(DObj);
    getch();
    return 0;
}
