// Write a program to check the string is palindrome or
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],rev[15];
	int len,i,flag=0;
	printf("Enter a string");
	scanf("%s",str);
	{
		for(i=0;i<len;i++)
		{
			if(strcmp(str,rev)==0)
			printf("the string is not a palindrome");
			return 0;
		}
	}
}