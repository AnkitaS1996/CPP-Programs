#include<iostream>
#include<conio.h>
using namespace std;
class Area_Circle
{
    public:
        float R,Area;
        void Accept()
        {
            cout<<"Enter Radius Of Circle"<<endl;
            cin>>R;
        }
        void Calculate_Area_Circle()
        {
            Area = 3.14 * R * R;
        }
        void Display_Circle_Area()
        {
            cout<<"Area Of Circle is = "<<Area<<endl;
        }

};
int main()
{
    Area_Circle ACObj;
    ACObj.Accept();
    ACObj.Calculate_Area_Circle();
    ACObj.Display_Circle_Area();
    _getch();
    return 0;
}
