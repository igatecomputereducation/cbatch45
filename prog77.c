#include<stdio.h>
int main()
{
	int num=45;
	switch(num+15)
	{
		case 30:
			printf("first\n");
			break;
		case 60:
			printf("second\n");
			break;
		case 80:
			printf("third\n");
			break;
		default:
			printf("fourth");
	}
	return 0;
}
