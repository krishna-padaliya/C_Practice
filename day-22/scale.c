#include<stdio.h>
void main()
{
	int a,*p,**q;
	p=&a;
    q=&p;

	printf("Enter your number:");
	scanf("%d",&a);

	printf("Address of number:%d\n",&a);
	printf("Address of number using pointer:%d\n",p);
	printf("value of pointer:%d\n",*p);
	printf("Address of number using pointer:%d\n",q);
	printf("value of pointer:%d",**q);

}