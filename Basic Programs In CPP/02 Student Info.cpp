#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"*****======Student Information*****========="<<endl;
    char Stud_Name[20];
    int Roll_No;
    char City[20];
    unsigned long int M_No;
    float Per;

    cout<<"\n Enter Student Name : "<<endl;
    cin>>Stud_Name;
    cout<<"\n Enter Roll Number : "<<endl;
    cin>>Roll_No;
    cout<<"\n Enter city : "<<endl;
    cin>>City;
    cout<<"\n Enter Percentage : "<<endl;
    cin>>Per;
    cout<<"\n Enter Mobile Number : "<<endl;
    cin>>M_No;

    cout<<"Student Name = "<<Stud_Name<<"\n Roll Number = "<<Roll_No<<"\n City Name = "<<City<<"\n Percentage = "<<Per<<"\n Mobile Number = "<<M_No<<endl;

    _getch();
    return 0;
}
