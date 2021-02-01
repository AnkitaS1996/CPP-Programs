///******    Constant Characteristics Of Class    ******//////
#include<iostream>
#include<conio.h>
using namespace std;

//const int gNo = 101;              ///1st Constant

class Constant_Characteristic
{
    public:
        int a,b;   //Non Constant Characteristics
        //const float pi= 3.14;  //Not Allowed bcz at that point memory Not Allocated to our characteristics & we can't Initialize the Characteristics inside class

        const float pi;     //Constant Characteristics  // 2nd Type Constant

        Constant_Characteristic(): pi(3.14),a(0),b(0)    // Default Constructor
        {
            //a=b=0;
            //pi = 3.14; ///Error Not Allowed
            cout<<"\n Inside Default Constructor"<<endl;
        }
        Constant_Characteristic(int Num,int Val): pi(Val),a(Num)     ///Parameterized Constructor
        {
            a = 210;
            b = 45;
            cout<<"\n Inside Parameterized Constructor Of Our Class...";
        }
        const void Sun()                                  //3rd type Constructor
        {
            a = 100;
            b = 200;
            cout<<"\n Inside Sun() Function Of Our Class"<<endl;
        }
        float Area_Of_Circle(int Rad)
        {
            float Area = 0.0;
            Area = pi * Rad * Rad;
            return Area;
        }
        ~Constant_Characteristic()
        {
            cout<<"\n Inside Destructor Of Our Class"<<endl;
        }
};

int main()
{
    int Rad = 6;
    Constant_Characteristic Obj1;
    const Constant_Characteristic Obj2;      //4th type Constant

    Constant_Characteristic Obj3(12,10.2);

    cout<<"\n Inside Main()....!!!!";

    Obj1.Sun();

    //cout<<"\n Values Of Parameterized Constructor is = > \t A ="<<Obj3.a<< "\t B ="<<Obj3.b<<endl;

    cout<<"\n Values Of Public Sun() Characteristics  is = > \t A ="<<Obj1.pi<< "\t B ="<<Obj1.a<<endl;

    cout<<"\n Area Of Circle is = "<<Obj1.Area_Of_Circle(Rad)<<endl;
    getch();
    return 0;

}
