#include<stdio.h>
void main()
{
    int n,a[10],i,b;
    printf("enter the limit");
    scanf("%d",&n);
    printf("\nenter the numbers");
     b=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    b=b+a[i];
    }
    int avg=b/n;
    printf("\nthe average is=%d",avg);
}
