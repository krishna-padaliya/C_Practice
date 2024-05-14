#include <stdio.h>
void main()
{
	int a,b,c,max;

	printf("Enter the value for a=");
	scanf("%d",&a);

	printf("Enter the value for b=");
	scanf("%d",&b);

	printf("Enter the value for c=");
	scanf("%d",&c);

	max=a>b && a>c ? a:b>c ? b:c;

	printf("%d",max);
}