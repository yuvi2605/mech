#include<stdio.h>
void main()
{
    char a[10],b[10];
    int str;
    printf("enter the characters\n");
    scanf("%s %s",&a,&b);
    if(strcmp(a,b)==0)
    {
        printf("\nIt is correct");
    }else
    {
        printf("\nIt is different");
    }
    
}
