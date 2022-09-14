#include<stdio.h>
int main()
{
	int a,b;
	a=8%5 == 30/10 || 30>20 && 20!=20;
	b=40>20 && 20<=20 || 20!=20 && 30>80;
	printf("%i\n%i",a,b);
	return 0;
}
