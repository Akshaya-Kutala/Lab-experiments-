#include<stdio.h>
#include<math.h>
int main()
{
  double n,result;
  printf("Enter a number to find its square root:");
  scanf("%lf",&n);
  result=sqrt(n);
  printf("/n The square root of number %lf is %lf",n,result);
  return 0;
  }