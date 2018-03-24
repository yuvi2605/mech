#include<stdio.h>
void main()
{
    int r,c,i,j,matrix[10][10],max;
    printf("enter the row and column");
    scanf("%d %d",&r,&c);
    printf("matrix elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
for(i = 0; i < r; ++i)
{
   for(j = 0; j < c ; ++j)    
   {
      printf("%d\t",matrix[i][j]);
   }
printf("\n");
}
{
    max=matrix[0][0];
        for(i = 0; i < r; ++i)
        {
            for(j = 0; j < c ; ++j) 
            {
               if(matrix[i][j]>max)
        
              max=matrix[i][j];
    }
        }
    printf("\nthe maximum element is:%d",max);
}
}
