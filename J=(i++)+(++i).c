#include<stdio.h>
int main()
{
 int i,J;
 printf("Enter the i value:");
 scanf("%d",&i);
 J=(i++)+(++i);
 printf("(i++)+(++i)=%d",J);
 return 0;
 }