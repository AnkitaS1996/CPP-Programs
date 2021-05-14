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
            cout<<"\n Inside Default Constructor Of Our Class"<<endl;
        }
        virtual void Fun()   //1000
        {
            cout<<"\n Inside Base :: Fun()"<<endl;
        }
        virtual void Gun()   //2000
        {
            cout<<"\n Inside Base :: Gun()"<<endl;
        }
        void Sun()      //3000
        {
            cout<<"\n Inside Base::Sun()"<<endl;
        }
        ~Base()
        {
            cout<<"\n Inside Destructor Of Base Class"<<endl;
        }

};
class Derived : public Base
{
    public:
        int X,Y;

        Derived()
        {
            X = Y = 0;
            cout<<"\n Inside Default Constructor Of Our Derived Class"<<endl;
        }
        void Fun()      //4000
        {
            cout<<"\n Inside Derived :: Fun()"<<endl;
        }
        void Sun()      //5000
        {
            cout<<"\n Inside Derived :: Sun()"<<endl;
        }
        virtual void Run()    //6000
        {
            cout<<"\n Inside Derived :: Run()"<<endl;
        }
        ~Derived()
        {
            cout<<"\n Destructor Of Derived Class."<<endl;
        }
};

int main()
{
    Derived dObj;
    cout<<"\n Inside Main()\n";
    getch();

    dObj.Fun();   //4000
    dObj.Sun();   //5000
    dObj.Run();    //6000
    dObj.Gun();   //2000
    cout<<"\n Inside Main()\n";
    getch();

    Base *bPtr = &dObj;
    getch();

    bPtr->Fun();   //Overriding  //4000 ///Caller Object Function Call
    cout<<"\n Inside Main()\n";
    getch();

    bPtr->Sun();   //3000
    cout<<"\n Inside Main()\n";
    getch();

    bPtr->Gun();   //2000
    //bPtr->Run();
    getch();
    return 0;
}
