#include<stdio.h>
int main()
{
	int Basic,HRA,DA,gs;
	
	printf("enter basic salary - ");
	scanf("%d",&Basic);
	
	HRA=Basic*20/100;
	DA=Basic*150/100;
	
	gs=Basic+HRA+DA;
	printf("qross salary is = %d",gs);
	
	return 0;
}