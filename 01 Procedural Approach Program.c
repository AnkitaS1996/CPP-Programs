#include<stdio.h>
#include<conio.h>
int Add(int,int);
int sub(int,int);
int main()
{
    int iNo1,iNo2,Res;
    printf("\n Enter 2 Numbers : ");
    scanf("%d%d",&iNo1,&iNo2);
    Res = Add(iNo1,iNo2);
    printf("\n Addition Of Two Numbers %d & %d is = %d",iNo1,iNo2,Res);
    Res = Sub(iNo1,iNo2);
    printf("\n Subtraction Of Two Numbers %d & %d is = %d",iNo1,iNo2,Res);
}

int Add(int iNum1,int iNum2)
{
    int Sum = 0;
    Sum = iNum1 + iNum2;
    return Sum;
}
int Sub(int No1,int No2)
{
    int iAns = 0;
    iAns = No1 - No2;
    return iAns;
}
