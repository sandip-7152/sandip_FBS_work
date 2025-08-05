//Write a program to scan string from user then scan a single character and search it
//in a accepted string.
#include<stdio.h>
#include<stdio.h>
void main()
{
	char str[100],ch;
	int i,found=0;
	printf("Enter a string:");
	printf("Enter acharacter to search");
	scanf("%d",&ch);
	for(i=0; str[i] != '\o' ;i++)
	{
		if(str[i]==ch)
		{
		found=1;
		break;
	}
printf("character '%c' not found in the string.\n",ch);
}
}
