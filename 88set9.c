#include<stdio.h>
void main()
{
    int a,b,i,g;
    printf("\nEnter two numbers:");
    scanf("%d %d",&a,&b);
    g=(a<b)?a:b;
    while(1)
    {
        if(g%a==0 && g%b==0)
        {
             printf("L.C.M of %d and %d is :%d",a,b,g);
        break;
        }
        ++g;
    }
}
        
        
    
