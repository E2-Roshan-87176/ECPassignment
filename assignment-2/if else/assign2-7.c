#include <stdio.h>

int main()

{
   int year;

printf("enter the year=");
scanf("%d",&year);

//without using logical operator

if(year%400==0)
{
     printf("the year is leap ");
     printf("this year has 366 day");
}

else if(year%100==0)
{
     printf("the year is  not leap ");
     printf("this year has 365 day");
}

else if(year%4==0){
}
     printf("the year is leap ");
     printf("this year has 366 day");
}

else{
     printf("Invalid Input");
}

//using logical opertor

if((year%400==0 && year%4==0)||(year%100!=0))
{
     printf("the year is leap ");
     printf("this year has 365 day");
}

else{
     printf("the year is not leap");
     printf("this year has 365 day");
}



// conditional operator

(((year%400==0)&&(year%4==0))||(year%100!=0))?printf("The year is leap year\n"),printf("this year has 366 day\n"):printf("the year is not leap year\n"),printf("this year has 365 day");

return 0;
}
