#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter any integer:");
	scanf("%i",&n);
	
	if(n>=-9 && n<=9)
		printf("Single digit number");
	else
		printf("not a single digit number");
	
	return 0;
}
