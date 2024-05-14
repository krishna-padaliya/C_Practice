// 3 value swipe


#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("Enter your a value:",a);
	scanf("%d",&a);

	printf("Enter your b value:",b);
	scanf("%d",&b);

	printf("Enter your c value:",c);
	scanf("%d",&c);

     d=a;
     a=b;
     b=c;
     c=d;

	printf("Your swipe  value a is:%d\n",a);
	printf("Your swipe value  b is:%d\n",b);
	printf("Your swipe value  b is:%d\n",c);
}