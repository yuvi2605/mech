#include<stdio.h>
void main()
{
  int s,b,num[50],i,j;
  printf("enter the limit");
  scanf("%d",&b);
  printf("enter the number");
  for(i=0;i<b;++i)
  {
      scanf("%d",&num[i]);
  }
  for(i=0;i<b;++i)
  {
      for(j=i+1;j<b;++j)
  {
      if(num[i]>num[j])
  {
      s=num[i];
      num[i]=num[j];
      num[j]=s;
  }
  }
  }
  for(i=0;i<b;++i)
  printf("\n %d",num[i]);
}
