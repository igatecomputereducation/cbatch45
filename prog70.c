#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	
	printf("Enter the marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	
	tot=mat+phy+che;
	avg=tot/3.0;
	
	printf("Total %i\n",tot);
	printf("Average %f\n",avg);
	printf("Result:");
	
	if(mat<35 || phy<35 || che<35)
	{
		printf("failed\n");
		if(mat<35)
			printf("In maths\n");
		if(phy<35)
			printf("In Physics\n");
		if(che<35)	
			printf("In Chemistry\n");
	}
	else if(avg>=75)
		printf("Distinction");
	else if(avg>=60)
		printf("First class");
	else if(avg>=50)
		printf("Second class");
	else
		printf("Ordinary");
		
	return 0;
}
