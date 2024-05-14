#include <stdio.h>
void main()
{
	int a[5],b[5];

	scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	scanf("%d",&a[4]);

	printf("The value for a[0] is=%d\n",a[0]);
	printf("The value for a[1] is=%d\n",a[1]);
	printf("The value for a[2] is=%d\n",a[2]);
	printf("The value for a[3] is=%d\n",a[3]);
	printf("The value for a[4] is=%d\n",a[4]);

	scanf("%d",&b[0]);
	scanf("%d",&b[1]);
	scanf("%d",&b[2]);
	scanf("%d",&b[3]);
	scanf("%d",&b[4]);

	printf("The value for b[0] is=%d\n",b[0]);
	printf("The value for b[1] is=%d\n",b[1]);
	printf("The value for b[2] is=%d\n",b[2]);
	printf("The value for b[3] is=%d\n",b[3]);
	printf("The value for b[4] is=%d\n",b[4]);

	printf("The value of a[0] + b[0] is=%d\n",a[0]+b[0]);
	printf("The value of a[1] + b[1] is=%d\n",a[1]+b[1]);
	printf("The value of a[2] + b[2] is=%d\n",a[2]+b[2]);
	printf("The value of a[3] + b[3] is=%d\n",a[3]+b[3]);
	printf("The value of a[4] + b[4] is=%d\n",a[4]+b[4]);
}