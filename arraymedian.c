#include<stdio.h>
void main()
{
    int i,n,s=0,k,a[10];
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;++i)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    k=s/n;
    printf("%d",k);
}
