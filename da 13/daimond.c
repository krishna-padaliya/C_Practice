#include <stdio.h>
void main()
{
	for (int i=1; i<=5; i++)
	{
		for (int j=5; j>=i; j--)
		{
			printf(" ");
		}
		for (int k=0; k<=2*(i-1); k++)
		{
			printf("*");	
		}
		printf("\n");
	}


	for (int i=4; i>=1; i--)
	{
		for (int j=5; j>=i; j--)
		{
			printf(" ");
		}
		for (int k=0; k<=2*(i-1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
}