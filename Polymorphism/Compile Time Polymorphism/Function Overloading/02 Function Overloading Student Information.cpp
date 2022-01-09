#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
     public:
         int Roll_No;
          string Name;
         //string Name;
         void Studenti(int x)
         {
             Roll_No = x;
             Name = "None";
             cout<<"\n Roll Number = "<<Roll_No<<endl;
         }
         void Studenti(int x,string str)
         {
             Roll_No = x;
             Name = str;
             cout<<"\n Roll Number = "<<Roll_No<<endl;
             cout<<"\n Name = "<<Name<<endl;
         }

};
int main()
{

    //clrscr();
    Student SObj;
    SObj.Studenti(20);
    SObj.Studenti(11,"Ankita");
    _getch();
    return 0;
}
