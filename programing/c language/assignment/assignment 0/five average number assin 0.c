// write a c program to input five numbers and their average
#include<stdio.h>
void main()
{
	int num=5;
	printf("enter 5 numbers:\n");
	for(int i=1;i<5;i++)
	{
		printf("number %d:",i+1);
		scanf("%d",&num);
	}
printf("the average of the 5 numbers is:%.2f\n");
}