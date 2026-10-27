#include<stdio.h>
int main()
{
    int a,b,c,choice;//1 for addition,2 for subtraction,3 for multiplication,4 for division
    printf("Enter The values of a,b and choice:");
    scanf("%d%d%d",&a,&b,&choice);
    switch(choice) {
    case 1:
      printf("\nThe sum of a and b is %d",c=a+b);
      break;
    case 2:
       printf("\nThe subtraction of a and b is %d",c=a-b);  
       break;
    case 3:
       printf("\nThe multiplication of a and b is %d",c=a*b);
       break;
    case 4:
       if(b=0)
          printf("\nDivision by zero is not possible");
       else
          printf("\nThe division of a and b is %d",c=a/b);
    break;      
    default:
        printf("\nInvalid option");  }  
    return 0;     
 }        
        