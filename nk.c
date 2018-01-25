#include<stdio.h>

void main()
{
int i,N[i],c=0,R,K;
printf(" get sum upto and no. of integers ");
scanf("%d%d",&K,&R);
for(i=1;i<=R;i++)
{
scanf("%d",&N[i]);
}

for(i=1;i<=K;i++)
{
c=c+N[i];
}
printf(" %d is SUM",c);
}
