#include<stdio.h>

int main(){

// maximum num between three using if else

int a,b,c;

printf("enter the num1");
scanf("%d",&a);

printf("enter the num2");
scanf("%d",&b);

printf("enter the num3");
scanf("%d",&c);

if(a>c){

if(a>b){

printf("a is max num");

}

else
printf("a is max num ");
}
else if(c>b){

printf("c is max num");
}
else
{

printf("b is great num");
}
return 0;
}
