#include<stdio.h>
void main()
{
    int a,i,f=1;
    printf("\nenter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("%d",f);
    getch();
}
 
