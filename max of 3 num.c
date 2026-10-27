#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter 3 numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if (a>b)
 { 
 if (a>c)
   printf("%d is big",a);
   else 
       printf("%d is big",c);
       }
     else 
     { 
       if (b>c)
        printf("\n %d is big",b);  
        else
          printf("\n %d is big",c);
          }
 return 0;
 }