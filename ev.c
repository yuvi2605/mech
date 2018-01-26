#include<stdio.h>
void main()
{
    int a,b,i;
    printf("\nenter the first number");
    scanf("%d",&a);
    printf("\nenter the second number");
    scanf("%d",&b);
    for(i=a+1;i<b;i++)
    if(i%2==0)
    printf("%d\t",i);
    getch();
}
