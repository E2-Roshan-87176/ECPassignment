#include<stdio.h>

int main()

{
int num;

printf(" Enter 4-digit num= ");
scanf(" %d", &num);

int a= num/1000;num=num%1000;
int b= num/100;num=num%100;
int c= num/10;num=num%10;
int d=num;
int e=(d*1000)+(c*100)+(b*10)+a;

printf("Face value= %d\t %d\t %d\t %d\t \n",a,b,c,d);
printf("Place value= %d + %d + %d + %d \n",a*1000,b*100,c*10,d);
printf("Reverce no= %d \n",e);

return 0;

}
