#include<stdio.h>
void main()
{
   char str[30],str1[20];
   int i,j,n=0;
   printf("\nenter the two strings");
   gets(str);
   gets(str1);
   for(i=0;str[i]!='\0';i++)
   {
     for(j=0;str1[j]!='\0';j++)
     {
         if(str[i]==str1[j])
         {
             n=0;
         }
         else
         {
             n=1;
         }
     }
   }
   if(n==0)
   {
       puts(str);
   }
   else
   {
       puts(str1);
   }
}
     
   
