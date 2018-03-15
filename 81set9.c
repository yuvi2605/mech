#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter two numbers");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d",b-a);
    }
    else
    {
        printf("%d",a-b);
    }
}
