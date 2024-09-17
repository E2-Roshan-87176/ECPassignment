       #include<stdio.h>

       int main()
           {
       int year;
       int month;

             printf("enter the year=");
             scanf("%d",&year);
				  
             printf("enter the month=");
             scanf("%d",&month);

             switch(month)
                   {
                          case 1:
                                 printf("JAN has 31 days\n");
						  break;

                          case 2:
                          if((year%400==0 && year%4==0)||(year%100!=0))
                                {
                                printf("the feb has 29 days");
                                }

                          else{
                                printf("the feb has 28 days");
                                }
						  break;
						  
                          case 3:
                                 printf("march has 31 days");break;
                                 
                          case 4:
                                 printf("april has 30 days");break;
                                  
                          case 5:
                                 printf(" may has 31 days");break;
                                  
                          case 6:
                                 printf("june has 30 days");break;
                                  
			  case 7:
            	                 printf("july has 31 days");break;
						   
			  case 8:			       
			         printf("Aug has 31 days ");break;
			   
			  case 9:
                                 printf("Sep has 31 days");break;
						   
			 case 10:
       			         printf("Oct  has 31 days");break;
       			          
			 case 11:
			         printf("Nov has 30 days");break;
						   
			 case 12:	  
			         printf("december has 31 days");break;
                       }
		return 0;
                     }
