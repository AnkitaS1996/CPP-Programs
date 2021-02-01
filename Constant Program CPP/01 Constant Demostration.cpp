using namespace std;
#include<iostream>
#include<conio.h>

const int GNum = 101;
class constant_Demo
{
    public:

        int x,y;
        constant_Demo()
        {
            cout<<"Inside Default Constructor"<<endl;
        }
        void Gun()
        {
            x=16;
            y=21;
            cout<<"\n Inside Public Gun function of our class"<<endl;
        }
        int Add(int No)
        {
            int Sum = 0;
            Sum = No + GNum;
            return Sum;
        }

        ~constant_Demo()
        {
            cout<<"\n Inside Destructor Of Our class"<<endl;
        }

};
int main()
{
    constant_Demo obj1;
    int No = 120;
    cout<<"\n Inside main()"<<endl;
    obj1.Gun();
    cout<<"\n Values Of Public Characteristics of obj1 = >\t I ="<<obj1.y<< "\t J ="<<obj1.x<<endl;
    cout<<"\n Sum is ="<<obj1.Add(No)<<endl;

    getch();
    return 0;
}

