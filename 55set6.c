#include<stdio.h>
void main()
{
    int n,m,a;
    printf("enter two numbers");
    scanf("%d %d",&n,&m);
    a=n*m;
    if(a%2!=0)
    {
        printf("the product of numbers is ODD");
    }else
    {
    printf("the product of numbers is EVEN");
}}
