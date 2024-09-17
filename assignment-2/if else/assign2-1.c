#include<stdio.h>

int main(){


int num1,num2,div;    
printf(" Enter the num1= ");
scanf("%d",&num1);
printf(" Enter the num2= ");
scanf("%d",&num2);    

if(num2==0)
 {
 printf("The no is not devidable \n");
 }
 else 

{
div=(num1/num2);
printf(" the div is= %d \n ",div);
}
return 0;
}
