#include<stdio.h>
void main()
{
    int a,n,num[35],i;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;++i)
    {
        scanf("%d",&num[i]);
    }
printf("enter the element with index");
for(i=0;i<n;++i)
{
    printf("\n%d\t%d\n",num[i],i);
}}
