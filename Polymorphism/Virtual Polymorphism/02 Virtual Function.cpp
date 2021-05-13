#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
        int i,j;
        Base()
        {
            i = j = 0;
            cout<<"\n Inside Default Constructor.."<<endl;;
        }
        virtual void Fun()    //1000
        {
            cout<<"\n Inside Base::Fun()"<<endl;
        }
        virtual void Gun()    //2000
        {
            cout<<"\n Inside Base::Gun()"<<endl;
        }
        void Sun()           //3000
        {
            cout<<"\n Inside Base::Sun()"<<endl;
        }
        ~Base()
        {
            cout<<"\n Inside Destructor Of Base Class."<<endl;
        }
};

class Derived : public Base
{
    public:
        int X,Y;

        Derived();
        void Fun();      //4000
        void Sun();      //5000    //
        virtual void Run()  //6000
        {
            cout<<"\n Inside Derived :: Run()";
        }
        ~Derived();
};
int main()
{
    Base bObj;
    cout<<"\n\n Inside Main()\n";
    getch();

    Derived dObj;
    cout<<"\n\n Inside Main()\n";
    getch();

    bObj.Fun();
    cout<<"\n\n Inside Main()\n";
    getch();

    dObj.Fun();
    cout<<"\n\n Inside Main()\n";
    getch();

    dObj.Sun();   // Redefination
    cout<<"\n\n Inside Main()\n";
    getch();

    bObj.Sun();    //Redefination
    cout<<"\n\n Inside Main()\n";
    getch();

    bObj.Gun();
    cout<<"\n\n Inside Main()\n";
    getch();

    dObj.Gun();
    cout<<"\n\n Inside Main()\n";
    getch();
    return 0;
}

//Outside
Derived :: Derived()
{
    X = Y = 0;
    cout<<"\n Inside Default Constructor of Derived Class";
}
void Derived :: Fun()
{
    cout<<"\n Inside Derived::Fun()";
}
void Derived :: Sun()
{
    cout<<"\n Inside Derived::Sun()";
}
Derived :: ~Derived()
{
    cout<<"\n In Destructor Of ~Derived class";
}
