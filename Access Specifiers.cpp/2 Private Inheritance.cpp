
/////*********  Access Specifiers -- Private Inheritance   *********/////

#include<iostream>
#include<conio.h>
using namespace std;

class ABC
{
    private:
        int a,b;   //Characteristics or Data members
    protected:
        int i,j;   //Characteristics Or Data Members
    public:
        int k,l;    //Characteristics or Data Members
        ABC()    //Default Constructor
        {
            cout<<"\n Inside ABC::Constructor Of Our Class"<<endl;
        }
        ~ABC()  //Destructor
        {
            cout<<"\n Inside ABC::Destructor Of Our class"<<endl;
        }
};
class PQR : private ABC
{
    private:
        int X;   //Characteristics or Data members
    protected:
        int Y;   //Characteristics or Data members
    public:
        int Z;   //Characteristics or Data members
        PQR()    // Default Constructor
        {
            cout<<"\n PQR::Constructor"<<endl;
        }
        ~PQR()   //Destructor
        {
            cout<<"\n PQR::Destructor"<<endl;
        }
};

int main()
{
    PQR obj;
    //obj.i = 10;    //Not Allowed Bcz Protected
    //obj.j = 20;    //Not Allowed Bcz Protected
    //obj.k = 30;      //Not Allowed Bcz Public
    //obj.l = 40;      //Not Allowed Bcz Public
    //obj.a = 50;        //Not Allowed Bcz Private
    //obj.b = 60;       //Not Allowed Bcz Private
    //obj.X = 100;        //Not Allowed Bcz Private
    //obj.Y = 200;        //Not allowed Bcz Protected
    obj.Z = 300;        //Allowed Bcz Public
    cout<<"\n Values --> Z= "<<obj.Z<<endl;
    cout<<"\n Size Of Given Object is = "<<sizeof(obj)<<endl;
    getch();
    return 0;
}
