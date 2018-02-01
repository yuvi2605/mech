#include<stdio.h>
void main()
{
    int n,m,rem,result=0;
    printf("enter the number");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        rem=m%10;
        result+=rem*rem*rem;
        m/=10;
    }
		if(result==n)
	    printf("\n number is armstrong.",n);
	else
	    printf("\number is not armstrong.",n);
	return(0);
	
}
