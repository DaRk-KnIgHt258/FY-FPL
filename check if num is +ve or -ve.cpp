#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter any number");
	scanf("%d",&num);
	
	if (num>=0)
	{
		printf("Enter num = %d is positive",num);
	}
	else
	{
		printf("Enter num = %d is negative",num);
	}
	return 0;
}