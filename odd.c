#include<stdio.h>
void main()
{
    int x,y,i,c=0;
	printf("Enter two number");
	scanf("%d%d",&x,&y);
	for(i=x;i<y;i++)
	{
		if(i%2!=0)
		
		{
		printf("\n%d",i);
		c++;	
		if(c==2)
		break;
		}
	}
		
}
