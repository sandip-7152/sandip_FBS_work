#include<stdio.h>
storyArray(int*,int);
displyArray(int*,int);
replaceArray(int*,int,int,int);//definition
void main()
{
	int arr[10];
	printf("enter the element of array /n");//call
	storyArray(arr,10);
	printf("/n array elements are");
	displyArray(arr,10);
	printf("/n modified array elements array");
	replaceArray(arr,10,5,7);
	printf("/n array elements array");
	displyArray(arr,10);
}
void storyarray(int*ptr,int size)//declaration
{
	for(int i=0;i<size;i++)
	scanf("%d",ptr[i]);
void displyArray(int*ptr,int size)
{
for(int i=0;i<size;i++)
printf("%d",ptr[i]);
void replacearray(int*ptr,int size)
{
for(int i=0;i<size;i++)

printf("%d",ptr[i]);
}
}
}

