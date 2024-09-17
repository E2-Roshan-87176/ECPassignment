#include<stdio.h>

int main(){

int emp_id,dep_no;
char design_code;

printf("Enter the emp_id : ");
scanf("%d",&emp_id);

printf("Enet the dep_no  : ");
scanf("%d",&dep_no);

printf("Enter the design_code  : ");
scanf("%*c%c",&design_code);

switch(dep_no)
{
        case 10 :
 
                printf("EMplyee with emp_id %d is working in ' Marketing ' department ",emp_id);
                break;

        case 20 :
                printf("EMplyee with emp_id %d is working in 'Management' department ",emp_id);
		        break;

       case 30 : 
                 printf("EMplyee with emp_id %d is working in 'Sales' department as",emp_id);
                 break;

       case 40 :
                 printf("EMplyee with emp_id %d is working in 'Designing' department ",emp_id);
		         break;

       default :  printf(" invalid dep_no");
 }

switch(design_code )
	{
	   case 'M' : 
	             printf("as a Manager \n");
				 break;

		case 'S' :
		         printf("as a Supervisor \n");
			   	 break;

		case 's' :
		         printf("as a Security officer \n");
                 break;

		case 'C' :
		          printf("as a Supervisor \n");
                  break; 

		default : printf("Invalid Designation code \n");
				break;
	 		
    }

        return 0;
}
