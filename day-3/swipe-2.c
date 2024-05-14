// 5 value swipe


#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;

	printf("Enter your a value:",a);
	scanf("%d",&a);

	printf("Enter your b value:",b);
	scanf("%d",&b);

	printf("Enter your c value:",c);
	scanf("%d",&c);

	printf("Enter your d value:",d);
	scanf("%d",&d);

	printf("Enter your e value:",e);
	scanf("%d",&e);

     f=a;
     a=e;
     b=d;
     c=c;
     d=b;
     e=f;

	printf("Your swipe  value a is:%d\n",a);
	printf("Your swipe value  b is:%d\n",b);
	printf("Your swipe value  c is:%d\n",c);
	printf("Your swipe value  d is:%d\n",d);
	printf("Your swipe value  e is:%d\n",e);
}