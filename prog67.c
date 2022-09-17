#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float uch,bill;
	
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	
	nu=cmr-pmr;
	
	if(nu>500)
		uch=9.95;
	else if(nu>=401)
		uch=8.50;
	else if(nu>=301)
		uch=7.95;
	else if(nu>=201)
		uch=7.10;
	else if(nu>=101)
		uch=5.40;
	else if(nu>=51)
		uch=3.35;
	else
		uch=2.65;
		
	bill=nu*uch;
	printf("Number of units %i\n",nu);
	printf("Charge per unit %f\n",uch);
	printf("Total bill %f",bill);
	return 0;
}
