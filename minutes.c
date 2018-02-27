#include<stdio.h>
void main()
{
    int min,hour,minutes;
    scanf("%d",&min);
    hour=min/60;
    minutes=min-(60*hour);
    printf("%d %d",hour,minutes);
}
