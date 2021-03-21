using namespace std;
#include<iostream>
#include<conio.h>

class Defalt_Constructor_Demo
{
    private:
        int a,b;    ///private Data Members and Characteristics

        void fun();  ///Private Member Function And Behaviors - Declaration
    protected:
        int x,y;   ///Protected Data Members And Characteristics

        void Gun();  ///Protected Member Function And Behaviors - Declaration

    public:
        int i,j;     ///Public Data Members And Characteristics

        Defalt_Constructor_Demo() ///Default Constructor
        {
            i = j = x = y = 0;
            a = b = 1;
            cout<<"\n Inside Default Constructor Of Our Class.....!!!"<<endl;
            getch();
        }
        void Sun();   ///Public Member Function And Behaviors - Declaration

        ~Defalt_Constructor_Demo()   ///Destructor
        {
            cout<<"\n Inside Destructor Of Our Class...!!"<<endl;
        }
};

///Main Function Definitions

int main()
{
    Defalt_Constructor_Demo obj1;  ///Object Created Using Default Constructor
    cout<<"\n Inside main()...!!"<<endl;
    getch();
    obj1.Sun();
    Defalt_Constructor_Demo ABC;    ///Object Created using Default Constructor
    cout<<"\n Back To main()..."<<endl;
    //obj1.fun(); //Not Allow
    //obj1.Gun(); //Not Allow
    getch();
    return 0;
}
///Member Function Definition Outside Class

void Defalt_Constructor_Demo::fun()
{
    cout<<"\n Inside Private fun() Function Of Our Class...";
}
void Defalt_Constructor_Demo::Gun()
{
    cout<<"\n Inside Protected Gun() Function Of Our Class...";
}
void Defalt_Constructor_Demo::Sun()
{
    cout<<"\n Inside Public Sun() Function Of Our Class...";
    getch();
}

