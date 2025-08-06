//  eriter a program to find power of any number
#include<stdio.h>
void main()
{
	int power,number;
	printf("enter of a power \n");
	scanf("%d",&power);
	printf("enter of a any number\n");
	scanf("%d",&number);
	{
		for(int i=power;i<number;i++)
	
	for(int j=1;j<number;j++)
	{
		if(i%j==0)
		printf("%d",j);
		printf("\n");
	}
	}
}
