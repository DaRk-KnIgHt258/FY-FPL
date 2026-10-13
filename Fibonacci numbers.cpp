#include<stdio.h>

int main()
{
	int n,a=0,b=1,next;
	printf("ENTER THE NUMBER OF FIBONACCI NUMBERS TO GENRATE - ");
	scanf("%d",&n);
	
	printf("%d\n%d\n",a,b);
	
	for(int i=2;i<n;i++)
	{
		next=a+b;
		printf("%d\n",next);
		a=b;
		b=next;
	}
	return 0;
}