#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    private :
        int a,b;
    public :
        demo(int x,int y)
        {
            a=x;
            b=y;
        }
        void show()
        {
            cout<<"A="<<a<<"B="<<b<<endl;
        }
        friend void operator -(demo &obj);
};
void operator -(demo &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}
int main()
{
   //clrscr();
   demo ob(10,-20);
   ob.show();
   -ob;
   ob.show();
   _getch();
   return 0;
}
