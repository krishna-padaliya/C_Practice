#include<stdio.h>
void main()
{
	int a,b,c;

	printf("Enter Your Value:");
	scanf("%d", &a);

	printf("Enter Your Value:");
	scanf("%d", &b);

	printf("Enter Your Value:");
	scanf("%d", &c);

	printf("Your Answer is:%d",a>b || a>c);
}