#include<iostream>
#include<conio.h>
using namespace std;

class Area
{
   public:
     int length,width,area;
     void get()
     {
	 cout<<"\nEnter Lenth of Rectangle : ";
	 cin>>length;
	 cout<<"\n Enter Width Of Rectangle";
	 cin>>width;
     }
     void Find_Area()
     {
	 area = length * width;
     }
     void Display()
     {
	cout<<"\n Area Of Rectangle is = "<<area;
     }
};
int main()
{
   Area obj;
   obj.get();
   obj.Find_Area();
   obj.Display();
   _getch();
   return 0;
}
