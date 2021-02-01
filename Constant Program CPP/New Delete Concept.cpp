#include<iostream>
#include<conio.h>
using namespace std;

class New_Delete_Demo
{
    public:

        int i,j,k;

        New_Delete_Demo()
        {
            i=0, j=10, k = 1000;
            cout<<"\n Default Constructor Of Our Class"<<endl;
            cout<<"\n Values Of => \t I= "<<i<< "\t J =" <<j<<endl;

        }

        New_Delete_Demo(int A,int B)
        {
            i = A;
            j = B;
            k = 1000;
            cout<<"\n Inside Parameterized Constructor Of Our Class"<<endl;
            cout<<"\n Values Of => \t I= "<<i<< "\t J =" <<j<< "\t K=" <<k<<endl;

        }
        void Calculator()
        {
            cout<<"\n Inside Calculator Function Of Our Class"<<endl;
            i = k-250;
            j = i*10;
            cout<<"\n Values Of => \t I= "<<i<< "\t J =" <<j<< "\t K=" <<k<<endl;

        }
        ~New_Delete_Demo()
        {
            cout<<"\n Destructor of Class"<<endl;
            cout<<"\n Values Of Destructor => \t I= "<<i<< "\t J =" <<j<< "\t K=" <<k<<endl;
        }
};
int main()
{
    New_Delete_Demo obj1;
    getch();
    cout<<"\n Back To main().."<<endl;
    getch();
    New_Delete_Demo obj2(10,20);
    getch();
    New_Delete_Demo *obj3= new New_Delete_Demo(); //New Delete Syntax (ClassName *obj = new ClassName())
    obj3->Calculator();
    delete(obj3);

    cout<<"\n Thank You...!!!"<<endl;
    getch();
    return 0;
}
