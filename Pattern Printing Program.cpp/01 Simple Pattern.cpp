////////////////////////////// Upper Right Triangle ////////////////////////////////////////////////
/////   Output =         *    *    *    *    *
/////                    *    *    *    *    *
/////                    *    *    *    *    *
/////                    *    *    *    *    *
////                     *    *    *    *    *
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
    int No = 5,i = 0,j = 0;
    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
