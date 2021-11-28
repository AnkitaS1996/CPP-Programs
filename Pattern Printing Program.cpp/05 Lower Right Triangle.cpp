////////////////////////////// Upper Right Triangle ////////////////////////////////////////////////
/////   Input = Enter Number To Print Pattern : 5
/////   Output =                             1
/////                                   2    2
/////                              3    3    3
/////                         4    4    4    4
////                     5    5    5    5    5
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
    int No,i,j;
    cout<<"\n Enter Numbers to print Pattern : ";
    cin>>No;
    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            if(i+j>=No+1)
            {
                cout<<" "<<i<<" ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}
