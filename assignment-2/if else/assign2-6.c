#include <stdio.h>

int main() {

  int a,b,c,d,e,f,num,original;

   printf(" num= ");
   scanf("%d",&num);

   original=num;

   a=num/10000;num=num%10000;
   b=num/1000;num=num%1000;
   c=num/100;num=num%100;
   d=num/10;num=num%10;
   e=num;
   f=(e*10000)+(d*1000)+(c*100)+(b*10)+a;
  
   printf("  %d\n",f);

   if(original==f)
   {
      printf("The num is polidrome ");
   }

   else{

     printf("The num is not polidrome");
   }
  
    return 0;
}
