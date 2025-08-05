//print last 2 digit of number e.g in 223410
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
int lasttwo=num % 100;
{
    printf("last two digits: %02d\n",lasttwo);
}
}