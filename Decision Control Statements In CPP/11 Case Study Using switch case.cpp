/////////////////////////////////////// **** Case Study **** //////////////////////////////////////////////////
////////////////////////////////// Arithmatic Operation Using switch case ///////////////////////////////////
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //clrscr();
    int iNo1 = 0,iNo2 = 0,Result = 0,Choice = 0;

    cout<<"\n Enter Any Two Numbers : ";
    cin>>iNo1>>iNo2;

    cout<<"\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Divide \n 5. Modulus.";

    cout<<"\n Enter A Choice : ";
    cin>>Choice;

    switch(Choice)
    {
        case 1:
            Result = iNo1 + iNo2;
            cout<<"\n Addition is = "<<Result;
            break;
        case 2:
            Result = iNo1 - iNo2;
            cout<<"\n Substraction is = "<<Result;
            break;
        case 3:
            Result = iNo1 * iNo2;
            cout<<"\n Multiplication is = "<<Result;
            break;
        case 4:
            Result = iNo1 / iNo2;
            cout<<"\n Division is = "<<Result;
            break;
        case 5:
            Result = iNo1 % iNo2;
            cout<<"\n Modulo is = "<<Result;
            break;
        default :
            cout<<"\n Invalid Choice..";
            break;
    }
    _getch();
    return 0;
}
