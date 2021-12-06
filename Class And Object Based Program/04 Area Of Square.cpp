#include<iostream>
#include<conio.h>
using namespace std;
class Area_Square
{
    private:
        int a,Area;
    public:
        void Accept_Area()
        {
            cout<<"Enter Area Of Square"<<endl;
            cin>>a;
        }
        void Calculate_Square_Area()
        {
            Area = a * a;
        }
        void Display();
};
void Area_Square :: Display()
{
    cout<<"\n Area Of Square = "<<Area;
}
int main()
{
    Area_Square ASObj;
    ASObj.Accept_Area();
    ASObj.Calculate_Square_Area();
    ASObj.Display();
    _getch();
    return 0;
}
