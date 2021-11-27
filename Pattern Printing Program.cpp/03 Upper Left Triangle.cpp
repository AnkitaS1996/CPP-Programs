////////////////////////////// Upper Left Triangle ////////////////////////////////////////////////
/////   Input = Enter Number To Print Pattern : 5
/////   Output =         A    A    A    A    A
/////                    B    B    B    B
/////                    C    C    C
/////                    D    D
////                     E
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
    int No,i,j;
    char ch = 'A';
    cout<<"\n Enter Numbers to print Pattern : ";
    cin>>No;
    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            if(i+j<=(No+1))
            {
                cout<<" "<<ch;
                //ch++;
            }
            else
            {
                cout<<" ";
            }
        }
         ch++;
        cout<<endl;
    }
    return 0;
}
