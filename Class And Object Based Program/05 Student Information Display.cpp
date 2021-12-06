#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
     public:
         string Name;
         int Roll_No;
         string City;
         float Per;
         void Student_Accept_Data()
         {
             cout<<"\n Enter Student Name = ";
             cin>>Name;
             cout<<"\n Enter Student Roll Number = ";
             cin>>Roll_No;
             cout<<"\n Enter City Name = ";
             cin>>City;
             cout<<"\n Enter Percentage = ";
             cin>>Per;
         }

};
int main()
{
     Student Stud1,Stud2,Stud3;

     Stud2.Student_Accept_Data();
     Stud3.Student_Accept_Data();

     Stud1.Name = "Ankita";
     Stud1.Roll_No = 1014;
     Stud1.City = "Karad";
     Stud1.Per = 70.67;

     cout<<"Display 1st Student Information"<<endl;

     cout<<"Student Name = "<<Stud1.Name<<endl;
     cout<<"Student Roll Number = "<<Stud1.Roll_No<<endl;
     cout<<"City Name = "<<Stud1.City<<endl;
     cout<<"Student Percentage = "<<Stud1.Per<<endl;


     cout<<"Display 2nd Student Information"<<endl;

     cout<<"Student Name = "<<Stud2.Name<<endl;;
     cout<<"Student Roll_Number = "<<Stud2.Roll_No<<endl;
     cout<<"Student City Name = "<<Stud2.City<<endl;
     cout<<"Student Percentage = "<<Stud2.Per<<endl;

      cout<<"Display 3rd Student Information"<<endl;

     cout<<"Student Name = "<<Stud3.Name<<endl;;
     cout<<"Student Roll_Number = "<<Stud3.Roll_No<<endl;
     cout<<"Student City Name = "<<Stud3.City<<endl;
     cout<<"Student Percentage = "<<Stud3.Per<<endl;
     _getch();
     return 0;
}
