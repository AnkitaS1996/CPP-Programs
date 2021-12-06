//////////////////////nested-if-else////////////////////////////////////////
///          70 - 100 = Distinction
///          60-69  = FirstClass
///          50-59 = Second Class
///          35-49 = Pass Class
///         0-34 = Fails
/////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int Marks = 0;
    cout<<"\n Enter Any Marks : ";
    cin>>Marks;
    if(Marks >= 70)
    {
        cout<<"\n You Are Distinction";
    }
    else
    {
        if(Marks >= 60)
        {
            cout<<"\n You Are First Class";
        }
        else
        {
            if(Marks >= 50)
            {
                cout<<"\n You Are Second Class";
            }
            else
            {
                if(Marks >= 35)
                {
                    cout<<"\n You Are Pass Class";
                }
                else
                {
                    cout<<"\n You Are Fails";
                }
            }
        }
    }
    _getch();
    return 0;
}
