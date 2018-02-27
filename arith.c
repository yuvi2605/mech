#include<stdio.h>
void main()
{
    int a,d,n,total;
    printf("enter the initial value");
    scanf("%d",&a);
    printf("\nenter the difference");
    scanf("%d",&d);
    printf("\nnumber of terms");
    scanf("%d",&n);
    total=a+(n-1)*d;
    printf("%d",total);
}

