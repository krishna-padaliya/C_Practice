#include<stdio.h>
void main()
{
	int a,*p;
	p=&a;

	printf("Enter your number:");
	scanf("%d",&a);

	printf("Your number address is:%d\n",&a);
	printf("Your number address is:%d\n",p);
	printf("Your value is:%d",*p);
}