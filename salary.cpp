#include <stdio.h>
int main()
{

	int BS;
	float GS,HRA,TA;
	printf("value of BS");
	scanf("%d",&BS);
	HRA=0.2*BS;
	printf("\v value of HRA is %f",HRA);
	TA=1.5*BS;
	printf("\v value of TA is %f",TA);
	
	GS=BS+HRA+TA;
	printf("\v Gross salary is %.2f",GS);
	return 0;
	
}