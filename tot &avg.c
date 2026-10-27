#include<stdio.h>
void main ()
{
int s1,s2,s3,tot ;
float avg; 
printf("\nenter s1 marks");
scanf("%d",&s1);
printf("\nenter s2 marks");
 scanf("%d",&s2);
 printf("\nenter s3 marks");
 scanf("%d",&s3);
 tot=s1+s2+s3;
 printf("\n The total marks:%d",tot);
 avg=(float)tot/3;
 printf("\n The average scores %f",avg);
 }