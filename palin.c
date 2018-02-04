#include<stdio.h>
void main()
{
    int n,temp,reverse=0,rem;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=(reverse*10)+rem;
        temp=temp/10;
    }
    if(reverse==n)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n not palindrome");
    }
}
