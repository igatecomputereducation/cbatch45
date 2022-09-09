#include<stdio.h>
int main()
{
	int x=45;
	int y=0756;
	int z=-34;
	printf("%i\n",x);
	printf("%8i\n",x);
	printf("%08i\n",x);
	printf("%#o\n",y);
	printf("%+8i\n",x);
	printf("%+8i\n",z);
	printf("%-8ihello",x);
	return 0;
}
