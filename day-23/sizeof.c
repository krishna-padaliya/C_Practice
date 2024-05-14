#include<stdio.h>
void main()
{
	int a;

	printf("Enter your number:");
	scanf("%d",&a);

	printf("Address of number is:%d\n",&a);
	printf("Address of number is:%d\n",sizeof(a));
}