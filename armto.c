#include<stdio.h>
void main()
{
    int a,b,i,temp,num,rem;  
    printf("enter the limits");
    scanf("%d %d",&a,&b);
     printf("Armstrong numbers between %d an %d are: ", a, b);
    for(i=a+1;i<b;++i)
    {
        temp=i;
        num=0;
        while(temp!=0)
        {
            rem=(temp%10);
            num+=rem*rem*rem;
            temp/=10;
        }
        if(i==num)
        {
            printf("\n%d",i);
        }
        
    }
}
