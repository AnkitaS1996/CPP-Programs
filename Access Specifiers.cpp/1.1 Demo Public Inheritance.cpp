
/////*********  Access Specifiers -- (Demo)Public Inheritance   *********/////

#include<iostream>
#include<conio.h>
using namespace std;

class Fork_Admin
{
    public:
        int a,b; //Characteristics or Data members
        Fork_Admin()   //Default Constructor
        {
            cout<<"\n Fork_Admin::Constructor Of Our class"<<endl;
        }
        ~Fork_Admin()  //Destructor
        {
            cout<<"\n Fork_Admin::Destructor Of Our Class"<<endl;
        }
    private:
        int i,j; //Characteristics or Data members
    protected:
        int k,l; //Characteristics or Data members

};

class Fork_Student : public Fork_Admin
{
    public:
        int x; //Characteristics or Data members
        Fork_Student()   //Default Constructor
        {
            x=y=z=0;
            cout<<"\n Fork_Student::Constructor of our class"<<endl;
            Fork_Admin::a = 20;  //Public Access
            Fork_Admin::b = 30;  //public Access
            //Fork_Admin::i = 80;//Not Allowed Bcz private can not be access in Outside class
            //Fork_Admin::j = 90; //Not Allowed Bcz Private Can not be access in Outside class
            Fork_Admin::k = 110;  //Protected Access
            Fork_Admin::l = 120;  //Protected Access
            cout<<"\n Values is -->> A="<<a<<" B="<<b<<" K="<<k<<" L="<<l<<endl;
        }
        ~Fork_Student()   //Destructor
        {
            cout<<"\n Fork_Student::Destructor of our class"<<endl;
        }
    private:
        int y; //Characteristics or Data members
    protected:
        int z; //Characteristics or Data members
};

int main()
{
    Fork_Student FSObj;
    FSObj.a = 40;
    FSObj.b = 50;
    //FSObj.i = 60;       ///Not Allowed Bcz private
    //FSObj.j = 70        ///Not Allowed Bcz private
   // FSObj.k = 100;      ///Not Allowed Bcz protected
   // FSObj.l = 101;      ///Not Allowed Bcz protected
    FSObj.x = 5;
    //FSObj.y = 10;       ///Not Allowed Bcz private
    //FSObj.z = 20;      ///Not Allowed Bcz protected
    cout<<"\n Values is --> A="<<FSObj.a<<" B="<<FSObj.b<<" X="<<FSObj.x<<endl;
    cout<<"\n Size of Given Object = "<<sizeof(FSObj);
    getch();
    return 0;
}
