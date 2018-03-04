#include<stdio.h>
void main()
{
    char s[20];
    int n,i;
    printf("\nenter the string:");
    scanf("%s",s);
    printf("\nenter the print value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n%s",s);
    }
}
