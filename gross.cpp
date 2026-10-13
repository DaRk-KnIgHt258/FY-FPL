#include<stdio.h>
int main()
 {
 	float b,gross,hra,da;
 	printf("enter basic salary");
 	scanf("%f",&b);
 	hra=0.2*b;
 	da=1.5*b;
 	gross=b+hra+da;
 	printf("gross=%2f",&gross);
 	return 0;
 }
