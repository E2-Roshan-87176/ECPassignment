#include <stdio.h>

int main(){

int i,fact=1;

printf("enter the num= ");
scanf("%d",&i);
while(1<=i){

printf("*%d",i);
fact=i*fact;

i--;

//printf("%d*",i);

}
printf("=%d",fact);
return 0;
}
