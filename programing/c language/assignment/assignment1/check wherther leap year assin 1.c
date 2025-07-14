//write a program to check whether a given year is leap 
#include<stdio.h>
int main()
{
int year;
	printf("enter a year:");
	scanf("%d",&year);
	{
	printf("%d is  a not leap year.\n",year);
}
	
	if(year % 4==0 && year % 100!=0)
{
printf("%d is a  leap year.\n");
}
}

