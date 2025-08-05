//conevert the time entered in hh,min,and sec into total seconds
#include<stdio.h>
int hr,min,sec;
int main()
{
printf("enter hours");
scanf("%d",&hr);
{
	printf("Enter minutes");
	scanf("%d",&min);
}
printf("Enter seconds");
scanf("%d",&sec);
{
	int totalsec=sec+min+60*hr*60*60;
	printf("totalsec are %d",totalsec);
}
}