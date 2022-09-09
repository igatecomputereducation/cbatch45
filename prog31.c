#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=40>20>10;
	b=20==20==20;
	c=1==10>5;
	d=30+10 == 80/2 > 0;
	printf("%i\n%i\n%i\n%i",a,b,c,d);
	return 0;
}
