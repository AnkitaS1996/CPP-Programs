#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  private:
  int a,b;
  public:
    demo()
    {
    }
    demo(int x,int y)
    {
      a = x;
      b = y;
    }
    void show()
    {
       cout<<"A= "<<a<<"B = "<<b<<endl;
    }
    friend demo operator +(demo &obj,demo &obj2);
};
demo operator +(demo &obj,demo &obj2)
{
      demo temp;
      temp.a = obj.a + obj2.a;
      temp.b = obj.b+ obj2.b;
      return temp;
}
int main()
{
  // clrscr();
   demo ob(10,20);
   demo ob1(30,40);
   demo ob2;
   ob2 = ob + ob1;
   ob2.show();
   _getch();
   return 0;
}
