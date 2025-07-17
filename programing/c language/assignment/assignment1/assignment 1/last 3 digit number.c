//given 3 digit number is pallindrome or not
#include<stdio.h>
int main()
{
    int num,original=123;
    printf("enter a 3 digit number:");
    scanf("%d",&num);
    if(num<100||num>999)
	{
    	printf("%d is a pallindromenumber.\n",original);
    	printf("%d is not a pallindromenumber.\n",original);
    }
}