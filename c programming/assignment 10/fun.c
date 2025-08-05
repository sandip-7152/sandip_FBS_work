#include<stdio.h>
void add()
{
	int a=10,b=20,c;
	c=a+b;
	printf("addition %d ",c);
}
void sub()
{
	int a=20,b=10,c;
	c=a-b;
	printf("subtraction %d ",c);
}
void mul()
{
  int a=10,b=5,c;
  c=a*b;
  printf("multiple %d ",c);
}
void div()
{
  int a=80,b=10,c;
  c=a/b;
  printf("division %d ",c);
}
	int main()
	{
	mul();	mul();	mul();	mul();
	add();add();add();add();add();add();add();add();add();add();add();
 	sub();	sub();	sub();	sub();	sub();	sub();
	div();	div();	div();	div();
	return 0;
}