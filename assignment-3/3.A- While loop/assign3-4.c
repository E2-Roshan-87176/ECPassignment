#include <stdio.h>

int main(){

int i,j=1,fact=1;

printf("enter the num= ");
scanf("%d",&i);
while(j<=i){

printf("*%d",j);
fact=j*fact;

j++;

//printf("%d*",i);

}
printf("=%d",fact);
return 0;
}
