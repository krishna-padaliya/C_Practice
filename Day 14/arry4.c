#include<stdio.h>
void main()
{
	int a[5];
	int	b[5];
	int c[5];
	for (int i = 1; i<=5; ++i)
	{
		scanf("%d",&a[i]);

	}
	for (int i = 1; i<=5; ++i)
	{
		printf("Value of a[%d] is = %d\n",i,a[i] );
	}
	for (int i = 1; i<=5; ++i)
	{
		scanf("%d",&b[i]);

	}
	for (int i = 1; i<=5; ++i)
	{
		printf("Value of b[%d] is = %d\n",i,b[i] );
	}
	for (int i = 1; i<=5; ++i)
	{
		printf("addition of two Value is = %d\n",a[i]+b[i]);
	}
}