#include <stdio.h>
void main()
{
    int a,b,i,c;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    while(a<b)
    {
        c=0;
        for(i=2;i<= a/2;i++)
        {
            if(a%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        printf("\n%d",a);
        ++a;
        }
    return 0;
    }
