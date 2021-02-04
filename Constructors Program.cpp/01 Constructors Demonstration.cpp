using namespace std;
#include<iostream>
#include<conio.h>

class Constructor_Demo
{
    private:
        int a,b;
        void Gun()                                   ///Member Function Or Behavior
        {
            cout<<"Inside Private Gun() Function Of Our Class"<<endl;
        }
    public:
        int i,j;
        Constructor_Demo()                           ///Default Constructor
        {
            cout<<"\n Inside Default Constructor of Our class"<<endl;
        }

        Constructor_Demo(int iNo1,int iNo2)          ///Parameterized Constructor
        {
            cout<<"Inside Parameterized Constructor Of Our Class"<<endl;
        }
        void Sun()                                  ///Member Function Or Behavior
        {
            cout<<"\n Inside PUBLIC Sun() Function Of Our Class"<<endl;
        }
        ~Constructor_Demo()                          ///Destructor Function
        {
            cout<<"\n Inside Destructor Of Our Class"<<endl;
        }

    protected:
        int X,Y;
        void Fun()                                    ///Member Function Or Behaviors
        {
            cout<<"\n Inside Protected Fun() Function Of Our Class"<<endl;
        }
};
int main()
{
    Constructor_Demo obj1;

    obj1.Sun();


    getch();
    return 0;
}


