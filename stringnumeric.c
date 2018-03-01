#include<stdio.h>
void main()
{
char b[10],i;
printf("enter a string");
scanf("%s",&b);
for(i=0;b[i]!='\0';i++)
{
if((b[i]>'a')&&(b[i]<'z'))
{
printf("no numeric");

}
else
{
    printf("numeric");
}
}}
