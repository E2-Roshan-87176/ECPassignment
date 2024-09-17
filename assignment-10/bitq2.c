#include<stdio.h>

int main()
{
	int arr[8];
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	for (int i=1; i<=8; i++)
	{
		int a;
		a = num % 2;
		arr[i]=a;
		printf("%d ",a);
	
		num = num/2;

	}
	for (int i=8; i>=1; i--)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}
