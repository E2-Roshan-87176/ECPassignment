#include<stdio.h>

int main()
{
	int a;
	int b=0;
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num!=0)
	{
		
		a = num % 2;
		if(a ==1)
		{
			b += 1;
			printf("%d ",a);
		}
		num = num/2;


	}
	printf("No of 1 is %d ",b);
	while(num!=0)
	{
		a = num % 2;
		b += 1;
		if(b%2)
		{
			printf("1%d ",a);
		}else
		{
			printf("1%d ",a);
		}
		num = num/2;
	}		

	return 0;
}
