#include <stdio.h>
void main()
{
	int a[3][3],sum=0,avr;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}	

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			sum=sum+a[i][j];
		}
	}
	printf("%d\n",sum);

	avr=sum/9;
	printf("%d\n",avr );


}