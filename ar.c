#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,c[50],sum,i;
printf("Enter the value n and k");
scanf("%d%d",&n,&k);
sum=0;
for(i=0;i<n;++i)
{
scanf("%d",&c[i]);
}
for(i=0;i<k;++i)
{
sum+=c[i];
}
printf("%d",sum);
}

