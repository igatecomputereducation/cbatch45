#include<stdio.h>
int main()
{
	float price,bill,dis,nbill;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	dis=(bill>10000)?bill*7/100:bill*5/100;
	nbill=bill-dis;
	printf("Total bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Netbill %f",nbill);
	return 0;
}
