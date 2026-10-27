#include<stdio.h>
int main()
{
 int s1,s2,s3,s4,s5,total;
 float avg;
 printf("Enter marks of subjects:");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 total=s1+s2+s3+s4+s5;
 printf("The total of all subjects=%d",total);
 avg=total/5.0;
 printf("\n The average of 5 subjects=%f",avg);
 return 0 ;
 }