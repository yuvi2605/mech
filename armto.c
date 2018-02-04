#include<stdio.h>
void main()
{
    int x,y,i,temp,num,rem;  
    printf("enter the limits");
    scanf("%d %d",&x,&y);
     printf("Armstrong numbers between %d an %d are: ", x,y);
    for(i=x+1;i<y;++i)
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
