#include<stdio.h>
int main()
{
	int a,b,sm,sb,pro;
	float div;
	printf("First Number:");
	scanf("%i",&a);
	printf("Second Number:");
	scanf("%i",&b);
	sm=a+b;
	sb=a-b;
	pro=a*b;
	div=(float)a/b;
	printf("Addition %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i\n",pro);
	printf("Division %f",div);
	return 0;
}
