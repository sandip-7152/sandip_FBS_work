#include<stdio.h>
void main()
{
	int units,bill;
	printf("enter the no of units");
	scanf("%d",&units);
	if(units>0&& units<50)
	{
		 bill=units*30;
		printf("%d",bill);
	}
	else if (units>=51 && units<=150)
	{
		 bill= units*40;
	}
	printf("%d",bill);
}