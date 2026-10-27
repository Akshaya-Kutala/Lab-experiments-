#include<stdio.h>
#include<math.h>
int main()
{
  double p,n,t,com,amount;
 printf("\nEnter the principal amount");
 scanf("%lf",&p);
 printf("\n Enter the rate of interest");
 scanf("%lf",&n);
 printf("\n Enter time");
 scanf("%lf",&t);
 amount=p*((pow((1+n/100),t)));
 com=amount-p;
 printf("\ncompound interest=%lf",com);
 return 0;
 }