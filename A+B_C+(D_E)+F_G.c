#include<stdio.h>
int main()
{
 int A,B,C,D,E,F,G,result;
 printf("Enter the values");
 scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);
 result=A+B*C+(D*E)+F*G;
 printf("A+B*C+(D*E)+F*G=%d",result);
 return 0;
 }