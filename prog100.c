#include<stdio.h>
int main()
{
	int n,i,es,os;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	es=0;
	os=0;
	i=1;
	while(i<=n)
	{
		if(i%2==0)
			es=es+i;
		else
			os=os+i;
		i++;
	}
	
	printf("Even numbers sum %i\n",es);
	printf("Odd numbers sum %i",os);
	return 0;
}
