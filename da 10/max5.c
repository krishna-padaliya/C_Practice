#include <stdio.h>
void main()
{
	int a,b,c,d,e,max;

	printf("Enter the value for a=");
	scanf("%d",&a);

	printf("Enter the value for b=");
	scanf("%d",&b);

	printf("Enter the value for c=");
	scanf("%d",&c);

	printf("Enter the value for d=");
	scanf("%d",&d);

	printf("Enter the value for e=");
	scanf("%d",&e);

	max=a>b && a>c && a>d && a>e ? a:b>c && b>d && b>e ? b:c>d && c>e ? c:d>e ? d:e;

	printf("%d",max);
}