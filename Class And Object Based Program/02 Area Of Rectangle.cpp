#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
    public:
        int Length,Width,Area;
        void Accept()
        {
            cout<<"\n Enter Length Of Rectangle : "<<endl;
            cin>>Length;
            cout<<"Enter Width Of Rectangle : "<<endl;
            cin>>Width;
        }
        void Find_Area()
        {
            Area = Length * Width;
        }
        void Display();
};
void Area :: Display()
{
    cout<<"Area Of Rectangle is = "<<Area<<endl;
}
int main()
{
    Area AObj;
    AObj.Accept();
    AObj.Find_Area();
    AObj.Display();
    _getch();
    return 0;
}
