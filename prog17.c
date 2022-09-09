#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("Height in feets:");
	scanf("%f",&hei);
	printf("Weight in Kgs:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your body mass index %f",bmi);
	return 0;
}
