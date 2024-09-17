#include <stdio.h>

int main(){

int i,j;

printf("enter the num= ");
scanf("%d",&i);
j=1;
while(j<i)
   {
      if(i%j==0){

          printf("* %d",j);
       } 
	   j++;
     }

return 0;
}
