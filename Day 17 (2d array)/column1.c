#include <stdio.h>
void main()
{
	int a[3][3],sum=0;

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

	for (int i = 0 , j = 1; i < 3; i++)
	{
		sum=sum+a[i][j];
	}
	printf("Column Adition of 2nd column is = %d",sum);
}