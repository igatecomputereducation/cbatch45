#include<stdio.h>
int main()
{
	int x,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	x=1;
	while(x<=n)
	{
		printf("%i\n",x);
		x=x+1;
	}
	
	return 0;
}
