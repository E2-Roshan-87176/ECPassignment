#include<stdio.h>
//count numbers of '1' bits into given number:
int main()
{
	int b=0;
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num!=0)
	{
		int a;
		a = num % 2;
		if(a ==1)
		{
			b += 1;
			printf("%d ",a);
		}
		num = num/2;


	}
	printf("No of 1 is %d\n ",b);
	return 0;
}
