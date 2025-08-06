//write aprogram in c find two maximum number in 
#include<stdiO.h>
void main()
{
	int num1,num2,max;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter secondnumber:");
	scanf("%d",&num2);
	if(num1>num2)
	max=num1;
	else
	max=num2;       
printf("maximum of the two numbers is:%d\n",max);
}