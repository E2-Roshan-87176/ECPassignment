#include<stdio.h>

int main()
{
int a,b;
printf("Enter the two numbers: ");
scanf("%d %d",&a,&b);
// using if else
if(a>b)
printf(" a is greater than b \n");

if(a<b)
printf("b is greater than a \n");

if(a==b)
printf("a is equal to b \n");

else
printf("Invalid Input");

//using conditional operator

a>b? printf("a is greater than b\n"):printf("b is greater than a\n");

return 0;
}





