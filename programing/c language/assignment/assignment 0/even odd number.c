//wap print even and odd number in agiven range 
#include<stdio.h>
void main()
{
	int start,end,i;
	printf("enter the start of rangeto find even and odd number in that range");
	scanf("%d",&start);
	printf("enter the start of range find even and odd number in that range");
	scanf("%d",&end);
	printf("even:");
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nodd");
	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
}