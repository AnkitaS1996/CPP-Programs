
/////*********  Access Specifiers --(Demo) Private Inheritance   *********/////

#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    private:
        int a,b;   //Characteristics or Data members
    protected:
        int i,j;   //Characteristics Or Data Members
    public:
        int k,l;    //Characteristics or Data Members
        Base()    //Default Constructor
        {
            cout<<"\n Inside Base::Constructor Of Our Class"<<endl;
        }
        ~Base()  //Destructor
        {
            cout<<"\n Inside Base::Destructor Of Our class"<<endl;
        }
};
class Derived : private Base
{
    private:
        int X;   //Characteristics or Data members
    protected:
        int Y;   //Characteristics or Data members
    public:
        int Z;   //Characteristics or Data members
        Derived()    // Default Constructor
        {
            X=Y=Z=0;
            cout<<"\n Derived::Constructor"<<endl;
            //Derived::a = 5;  //Not Allowed BCz Private Cant be Access by Outside Class
            //Derived::b = 15; //Not Allowed BCz Private can't be Access By Outside Class
            Derived::i = 25;   //Public
            Derived::j = 35;   //Public
            Derived::k = 45;   //Protected
            Derived::l = 55;   //Protected
            cout<<"\n Values is -->> I="<<i<<" J="<<j<<" K="<<k<<" L="<<l<<endl;
            cout<<"\n Values is -->> X="<<X<<" Y="<<Y<<" Z="<<Z<<endl;
        }
        ~Derived()   //Destructor
        {
            cout<<"\n Derived::Destructor"<<endl;
        }
};

int main()
{
    Derived dobj;
    //dobj.i = 10;    //Not Allowed Bcz Protected
    //dobj.j = 20;    //Not Allowed Bcz Protected
    //dobj.k = 30;      //Not Allowed Bcz Public
    //dobj.l = 40;      //Not Allowed Bcz Public
    //dobj.a = 50;        //Not Allowed Bcz Private
    //dobj.b = 60;       //Not Allowed Bcz Private
    //dobj.X = 100;        //Not Allowed Bcz Private
    //dobj.Y = 200;        //Not allowed Bcz Protected
    dobj.Z = 300;        //Allowed Bcz Public
    cout<<"\n Values --> Z= "<<dobj.Z<<endl;
    cout<<"\n Size Of Given Object is = "<<sizeof(dobj)<<endl;
    getch();
    return 0;
}
