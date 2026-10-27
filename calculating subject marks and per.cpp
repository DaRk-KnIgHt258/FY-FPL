#include<stdio.h>
int main()
{
	
	int sub1,sub2,sub3,sub4,sub5,per;
	
	printf("Enter 5 subject marks");
	scanf("%d,%d,%d,%d,%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	per=sub1+sub2+sub3+sub4+sub5/5;
	
	if (per>=75)
	{
		printf("Result:pass");
		printf("with distinction");
		
	}
	else if (per>=60)
	{
		printf("Result:pass");
		printf("with first class");
	}
	else if (per>=50)
	{
		printf("Result:pass");
		printf("with second class");
	}
	else if (per>=40)
	{
		printf("Result:pass");
		printf("with third class");
	}
	else if(per>=35)
	{
		printf("Result:fail");
	}
	return 0;
}
