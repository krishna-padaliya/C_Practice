#include<stdio.h>
void main()
{
	int a,*p;
	p=&a;

	printf("Enter your number:");
	scanf("%d",&a);

	printf("Address of number:%d",&a);
	printf("Address of number:%d",p);
	printf("value is:%d",*p);
	
}