#include<stdio.h>
void main()
{
    int a,b[10],n,i,j;
    printf("\nEnter the value");
    scanf("%d",&a);
    printf("\nEnter the numbers");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
    {
        if(b[i]>b[j])
    {
        n=b[i];
        b[i]=b[j];
        b[j]=n;
    }
    }
    }
    for(i=0;i<a;i++)
    {
    printf("\n%d",b[i]);
}
    printf("\nSmallest value  is :%d",b[0]);
    printf("\nMaximum value is :%d",b[a-1]);
}
