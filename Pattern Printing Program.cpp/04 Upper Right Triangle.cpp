////////////////////////////// Upper Right Triangle ////////////////////////////////////////////////
/////   Input = Enter Number To Print Pattern : 5
/////   Output =         A    B    C    D    E
/////                         A    B    C    D
/////                              A    B    C
/////                                   A    B
////                                         A
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
        ch = 'A';
        for(j=1;j<=No;j++)
        {
            if(i<=j)
            {
                cout<<" "<<ch;
                ch++;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
