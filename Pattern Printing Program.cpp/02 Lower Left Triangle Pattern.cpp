////////////////////////////// Lower Left Triangle ////////////////////////////////////////////////
/////   Input = Enter Number To Print Pattern : 5
/////   Output =         1
/////                    1    2
/////                    1    2    3
/////                    1    2    3    4
////                     1    2    3    4     5
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
            if(i>=j)
            {
                cout<<" "<< j ;
            }
        }
        cout<<endl;
    }
    return 0;
}
