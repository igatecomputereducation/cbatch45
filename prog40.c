#include<stdio.h>
int main()
{
	int ch;
	printf("1.Permanent\n2.Temporary\nEnter your choice [1..2]:");
	scanf("%i",&ch);
	if(ch==1)
	{
		printf("subbu\n");
		printf("Paletivari street\n");
		printf("Kavali");
	}
	if(ch==2)
	{
		printf("Igate solutions\n");
		printf("Kavali");
	}
	if(ch<1)
		printf("Invalid choice");
	if(ch>2)
		printf("Invalid choice");
	return 0;
}
