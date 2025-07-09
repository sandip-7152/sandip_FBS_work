//wap to check if the year is leap ornot
#include<stdio.h>
int main()
{
int year;
	printf("enter a year:");
	scanf("%d",&year);
	{
	printf("%d is a leap year.\n",year);
}
	
	if(year % 4==0 && year % 100!=0)
{
printf("%d is not a leap year.\n");
}
}

