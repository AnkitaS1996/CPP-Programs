#include<iostream>
#include<conio.h>
using namespace std;
class Room
{
    public:
        double Length;
        double Breadth;
        double Heigth;
        void Accept_Area_Data()
        {
            cout<<"\n Enter Length Of Room = ";
            cin>>Length;
            cout<<"\n Enter Breadth Of Room = ";
            cin>>Breadth;
        }
        void Accept_Volume_Data()
        {
            cout<<"\n Enter Length Of Room = ";
            cin>>Length;
            cout<<"\n Enter Breadth Of Room = ";
            cin>>Breadth;
            cout<<"\n Enter Heigth Of Room = ";
            cin>>Heigth;
        }
        double Calculate_Area()
        {
            return(Length * Breadth);
        }
        double Calculate_Volume()
        {
            return(Length * Breadth * Heigth);
        }
};
int main()
{
    Room RObj1,Robj2;
    RObj1.Accept_Area_Data();
    cout<<"\n Area Of Room = "<<RObj1.Calculate_Area()<<endl;
    Robj2.Accept_Volume_Data();
    cout<<"\n Volume Of Room = "<<Robj2.Calculate_Volume()<<endl;
    _getch();
    return 0;
}
