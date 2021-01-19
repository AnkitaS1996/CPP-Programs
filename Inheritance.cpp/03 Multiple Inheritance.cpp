
      ////************** Multiple  Inheritance **************////

#include<iostream>
#include<conio.h>
using namespace std;

class ABC         //class Base1
{
    public:
        int i,h;   //Characteristics Or Data Members

        ABC()   //Default Constructor
        {
            cout<<"\n Inside ABC::Constructor of our class"<<endl;
        }
        ~ABC()  //Destructor
        {
            cout<<"\n Inside ABC::Destructor of our class"<<endl;
        }
        void Fun()     //Fun() Function Behavior Or Member Function
        {
            cout<<"\n Fun() Function Of Our class"<<endl;
        }
};

class PQR          //class Base2
{
    public:
        int j;    //Characteristics Or Data Members

        PQR()    //Default Constructor
        {
            cout<<"\n Inside PQR::Constructor of our class"<<endl;
        }
        ~PQR()    //Destructor
        {
            cout<<"\n Inside PQR::Destructor of our class"<<endl;
        }
};

class XYZ      //class Base3
{
    public:
        int k;    //Characteristics Or Data Members

        XYZ()    //Constructor
        {
            cout<<"\n Inside XYZ::Constructor of our class"<<endl;
        }
        ~XYZ()    //Destructor
        {
            cout<<"\n Inside XYZ::Destructor of our class"<<endl;
        }
};

class Derived : public ABC,PQR,XYZ       //class Derived : public Base1,Base2,Base3
{
    public:
        int A,B;   //Characteristics Or Data Members

        Derived()   //Constructor
        {
            cout<<"\n Inside Derived::Constructor of Our class"<<endl;
        }
        ~Derived()    //Destructor
        {
            cout<<"\n Inside Derived::Destructor of Our class"<<endl;
        }
        void Moon()   //Moon() Function Behavior Or Member Function
        {
            cout<<"\n Inside Moon() Function Of Our class"<<endl;
        }
};

///Main Function For the program

int main()
{
    Derived DObj;
    DObj.Moon();

    cout<<"\n Size Of Derived is = "<<sizeof(DObj)<<endl;
    getch();
    return 0;
}
