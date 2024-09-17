#include<stdio.h>

int main()
      {
double a,b;
char cal;
         printf("enter the num1=");
         scanf("%lf",&a);
				  
         printf("enter the num2=");
         scanf("%lf",&b);

         printf("enter the sign=");
         scanf("%*c%c",&cal);

          switch(cal)
               {
                     case '+' :
                                printf("ADDITION=%lf\n",a+b);
				     break;

                     case '-' :
                                printf("SUBSTRACTION=%lf\n",a-b);
					 break;
						  
                      case '*' :
                                 printf("MULTIPICATION=%lf\n",a*b);
                     break;

                      case '/' :

						  if((b==0)
                              {
                                 printf("the num is not devidable by 0");
                              }

                           else{

                                 printf("DEVISION=%lf\n",a/b);
                              }
                      break;
            return 0;
       }
