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
        void Sun()        //3000
        {
            cout<<"\n Inside Base::Sun()"<<endl;
        }
        ~Base()
        {
            cout<<"\n\n Inside Destructor Of Base Class."<<endl;
        }
};
class Derived : public Base
{
    public:
        int X,Y;

        Derived();
        void Fun();      //4000     //Overriding
        void Sun();      //5000    //Behavior ReDefinition
        virtual void Run()  //6000
        {
            cout<<"\n Inside Derived :: Run()";
        }
        ~Derived();
};
int main()
{
    Base bObj;
    Derived dObj;

    cout<<"\n\n Inside Main()\n";

    Base *bp = NULL;
    //Derived *dp = NULL;

    bp = &dObj;     ///UpCasting //Allow
    bp = &bObj;    ///UpCasting //Allow
    bp->Sun();

    //dp = &bObj; //DownCasting  //Not Allow

    getch();
    return 0;
}

Derived :: Derived()
{
     X = Y = 0;
    cout<<"\n Inside Derived Constructor";
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
    cout<<"\n\n In Destructor Of ~Derived class";
}
