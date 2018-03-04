#include<stdio.h>
void main()
{
    int n,temp,flag;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    flag=0;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
        flag=1;
        break;
        }
        temp=temp/2;
    }
    if(flag==0)
    printf("the given number is power of 2");
    else
    printf("not power of 2");
}
