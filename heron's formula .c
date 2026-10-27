//Area of triangle using heron's formula//
#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,s,area;
  printf("Enter side values a in cm:");
  scanf("%lf",&a);
  printf("Enter side values b in cm:");
  scanf("%lf",&b);
  printf("Enter side values c in cm:");
  scanf("%lf",&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area of triangle using heron's formula=%lf in cm square",area);
  return 0;
  }
  
 