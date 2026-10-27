#include<stdio.h>
int main()
{
float p,n,r,sim;
printf("Enter the principal amount");
 scanf("%f",&p);
 printf("Enter the duration of months");
 scanf("%f",&n);
  printf("Enter the rate of intrest");  
  scanf("%f",&r);
  sim=p*n*r/100;
  printf("simple interest=%f",sim);
  return 0;
  }
  