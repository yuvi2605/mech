#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d"&a);
    }
    else if(b>a&&b>c)
    {
        printf("%d"&b);
    }
    else
    {
        printf("%d"&c);
    }
    getch();
}
