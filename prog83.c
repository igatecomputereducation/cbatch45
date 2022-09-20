#include<stdio.h>
int main()
{
	printf("First\n");
	goto abc;
		printf("second\n");
	abc:
	printf("third\n");
	return 0;
}
