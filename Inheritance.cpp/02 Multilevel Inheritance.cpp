
    ////************** Multilevel  Inheritance **************////

#include<iostream>
#include<conio.h>
using namespace std;

class Karad         ///class base
{
    public:
        int i,j;        //Characteristics Or Data Members

        Karad()         //Default Constructor
        {
            cout<<"\n Inside Karad::Default Constructor Of Our class"<<endl;
        }
        ~Karad()        //Destructor
        {
            cout<<"\n Inside Karad::Destructor of Our Class"<<endl;
        }
        void Fun()     //Fun() Function Behavior Or Member Function
        {
            cout<<"\n Fun() Function Of Our class"<<endl;
        }
};

class Pune : public Karad       // class Derived1 : public base
{
    public:
        int k;    //Characteristics Or Data Members
        Pune()     //Default Constructor
        {
            cout<<"\n Inside Pune::Default Constructor Of Our class"<<endl;
        }
        ~Pune()       //Destructor
        {
            cout<<"\n Inside Pune::Destructor Of Our class"<<endl;
        }
        void Gun()   //Gun() Function Behavior Or Member Function
        {
            cout<<"\n Inside Gun() Function Of Our class"<<endl;
        }

};

class Kolhapur : public Pune        //class Derived2 : public Derived1
{
    public:
        int a,b;      //Characteristics Or Data Members

        Kolhapur()    //Default Constructor
        {
           cout<<"\n Inside Kolhapur::Default Constructor Of Our class"<<endl;
        }
        ~Kolhapur()   //Destructor
        {
           cout<<"\n Inside Kolhapur::Destructor Of Our class"<<endl;
        }
        void Sun()   ////Sun() Function Behavior Or Member Function
        {
            cout<<"\n Inside Sun() Function Of Our class"<<endl;
        }
};

int main()
{
    Karad BObj;
    BObj.Fun();
    Pune PObj;
    PObj.Gun();
    Kolhapur KObj;
    KObj.Sun();
    cout<<"\n Size Of Karad Class = "<<sizeof(BObj)<<endl;
    cout<<"\n Size Of Pune Class = "<<sizeof(PObj)<<endl;
    cout<<"\n Size Of Kolhapur Class = "<<sizeof(KObj)<<endl;
    getch();
    return 0;

}
