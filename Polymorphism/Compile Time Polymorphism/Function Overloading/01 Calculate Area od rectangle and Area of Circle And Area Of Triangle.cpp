#include<iostream>
#include<conio.h>
using namespace std;
class FunOverload
{
    public:
        int Area(int l,int b)    //Area Of Rectangle
        {
            return(l*b);
        }
        int Area(float r)
        {
            return(3.14*r*r);
        }
        int area(float b,float h)
        {
            return(0.5*b*h);
        }
};
int main()
{
    FunOverload f;
    //clrscr();
    cout<<"\n Area Of Rectangle = "<<f.Area(4,6)<<endl;    //24
    cout<<"\n Area Of Circle = "<<f.Area(10)<<endl;        //314.2856
    cout<<"\n Area Of Triangle = "<<f.Area(3.7,7.0)<<endl;    //10.5
    _getch();
    return 0;

}
