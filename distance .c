// Distance travelled by an object //
#include<stdio.h>
#include<math.h>
int main()
{
  double u,t,a,d;
  printf("enter the initial velocity u:");
  scanf("%lf",&u);
  printf("enter displacement time t:");
  scanf("%lf",&t);
  printf("enter the acceleration a:");
  scanf("%lf",&a);
  d=(u*t)+(0.5*a*t*t);
  printf("Distance=%lf",d);
  return 0;
  }