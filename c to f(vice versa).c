#include<stdio.h>
int main()
{
 float f,c,celsius,fahrenheit;
 printf("Enter the temperature in celsius:");
 scanf("%f",&c);
fahrenheit=c*(9.0/5.0)+32;
printf("\nTemperature in farenheit is %f",fahrenheit);
// convert fahrenheit to celsius 
printf("Enter the temperature in fahrenheit:");
scanf("%f",&f);
celsius=(f-32)*(5.0/9.0);
printf("\nTemperature in celsius is %f",celsius);
return 0;
}

    