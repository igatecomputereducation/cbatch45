#include<stdio.h>
int main()
{
	long long n,gr;
	
	printf("Enter any natural number:");
	scanf("%Li",&n);
	
	if(n%9==0)
		gr=9;
	else
		gr=n%9;
		
	printf("Your number is %i\n",gr);
	
	switch(gr)
	{
		case 1:
		case 9:
			printf("Lucky number");
			break;
		case 3:
		case 5:
		case 7:
			printf("Good numbers");
			break;
		default:
			printf("Don't be sentimental fool");
	}
	
	return 0;
}
