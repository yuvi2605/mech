#include<stdio.h>
void main()
{
    int n,a[10],t,i;
    printf("\nEnter the limit");
    scanf("%d",&n);
    printf("\nEnter the number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe maximum value is:");
    t=a[0];
    for(i=0;i<n;i++)
    {
        if(t<a[i])
    {
        t=a[i];
    }
    }
    printf("%d",t);
}
