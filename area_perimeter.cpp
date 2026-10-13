#include <stdio.h>
int main()
{
	int a,l,b,p;
	printf("enter value of l and b");
	scanf("%d %d",&l,&b);
	a=l*b;
	printf("Area of rectangle is %d",a);
	p=2*l+2*b;
	printf("\nPerimeter of rectangle %d",p);
	return 0;
}