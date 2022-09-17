#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	
	printf("Salary:");
	scanf("%i",&sal);
	
	if(sal>50000)
	{
		hra=sal*19.0/100;
		da=sal*21.0/100;
	}
	else if(sal>=25001)
	{
		hra=sal*17.0/100;
		da=sal*17.0/100;
	}
	else if(sal>=10001)
	{
		hra=sal*13.0/100;
		da=sal*15.0/100;
	}
	else
	{
		hra=sal*11.0/100;
		da=sal*13.0/100;
	}
	
	gross=sal+hra+da;
	printf("Salary %i\n",sal);
	printf("House Rent allowence %f\n",hra);
	printf("Dearness allowence %f\n",da);
	printf("Gross %f",gross);
	return 0;
}
