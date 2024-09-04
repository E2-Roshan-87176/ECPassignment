#include<stdio.h>
#include<math.h>

int main(){


float a,b,c,s,area;
printf("enter the sides of triangle=\n");
scanf("%f %f %f",&a,&b,&c);

s= (a+b+c*a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("Perimeter og triangle= %.2f \n",s);
printf("Area of triangle= %.2f \n",area);

return 0;

}


