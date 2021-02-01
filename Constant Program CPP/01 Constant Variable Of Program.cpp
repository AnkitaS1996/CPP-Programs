using namespace std;
#include<iostream>
#include<conio.h>

//const int GNum = 101;    //Constant global Variable

class Constant_Variable
{
    public:
        int i,j;      //Non Constant Variable
        //const float pi;  //Error
        //Constant Variable it should be Initialized at the time of declaration itself otherwise it generate compile time error
        const float pi = 3.14;   //Constant Variable
        Constant_Variable()  //Default Constructor
        {
            cout<<"\n Inside Default Constructor"<<endl;
            getch();
        }

        void Gun()   // Behavior Or Member Function Gun() Function
        {
            i=15;
            j=20;
            cout<<"\n Inside Gun() Function Of Our Class"<<endl;
            getch();
            //cout<<"\n Values Of Gun Function Variable = > \t I ="<<i<<"\t J ="<<j<<endl;
        }

        int Area_Of_Circle(int Rad)
        {
            float Area = 0.0;
            Area = pi * Rad * Rad;
            return Area;
        }

        ~Constant_Variable() //Destructor
        {
            cout<<"\n Inside Destructor Of Our Class"<<endl;
        }

};

int main()
{
    int Rad = 5;
    Constant_Variable obj1;
    cout<<"\n Inside main()..!!!"<<endl;
    getch();
    obj1.Gun();

    cout<<"\n Value Of Public Characteristics of obj1 = >>\t I ="<<obj1.i<< "\t J="<<obj1.j<<endl;
    getch();
    //cout<<"\n Area Of Circle with Radius 5 ="<<obj1.Area_Of_Circle(5)<<endl;
    cout<<"\n Area Of Circle ="<<obj1.Area_Of_Circle(Rad)<<endl;
    getch();
    return 0;
}
