#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter any integer:");
	scanf("%i",&n);
	
	(n%2==0)?printf("even"):printf("odd");
	
	return 0;
}
