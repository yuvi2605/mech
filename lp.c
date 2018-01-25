#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
scanf("%d",&year);
printf("ENTER THE YEAR:");
if(year%4==0)
{
printf("The year is leap year");
}
else
{
printf("The year is not leap year");
}
getch();
}
