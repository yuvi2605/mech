#include<stdio.h>
void main()
{
    int a,b,i,g;
    printf("\nEnter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
        g=i;
    }
    printf("G.C.D of %d and %d is :%d",a,b,g);
}
