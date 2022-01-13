#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
   private:
     int a,b;
   public:
     demo(int x,int y)
     {
        a = x;
        b = y;
     }
     void display()
     {
        cout<<"A = "<<a<<"\n"<<"B = "<<b<<endl;
     }
     demo operator +(demo obj)
     {
         demo temp(0,0);
         temp.a = a + obj.a;
         temp.b = b  + obj.b;
         return temp;
     }
};
int main()
{
    //clrscr();
    demo ob(10,20),ob1(30,40),ob2(0,0);
    ob2 = ob + ob1;
    ob2.display();
    _getch();
    return 0;
}
