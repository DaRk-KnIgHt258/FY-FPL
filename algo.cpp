#include<stdio.h>

int main()
{
	int a,b,sum,sub,mul,div;
	
	scanf("%d%d",&a,&b);
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("\naddition is %d",sum);
	printf("\nsubstraction is %d",sub);
	printf("\nmultiplication is %d",mul);
	printf("\ndivision is %d",div);
	
	return 0;
}