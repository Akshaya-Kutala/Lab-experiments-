#include<stdio.h>
int main()
{
 int D;
 float  A,B,C,result;
 printf("Enter the A value:");
 scanf("%f",&A);
 printf("Enter the B value:");
 scanf("%f",&B);
 printf("Enter the C value:");
 scanf("%f",&C);
 printf("Enter the D value:");
 scanf("%d",&D);
 result=A/B*C-B+A*D/3;
 printf("A/B*C-B+A*D/3=%f",result);
 return 0;
 }