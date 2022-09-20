#include<stdio.h>
int main()
{
	int a,b,ch;
	
	printf("First number:");
	scanf("%i",&a);
	
	printf("Second number:");
	scanf("%i",&b);
	
	printf("1.Add\n2.Subtraction\n3.Product\n4.Division\nEnter your choice [1..4]:");
	scanf("%i",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Addition %i",a+b);
			break;
		case 2:
			printf("Subtraction %i",a-b);
			break;
		case 3:
			printf("Product %i",a*b);
			break;
		case 4:
			printf("division %f",(float)a/b);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
