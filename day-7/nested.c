#include<stdio.h>
void main()
{
	int a, b, c;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	printf("Enter Value of C:");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("A is big");
		}
		else{
			printf("C is big");
		}
	    }
		else if(b>c)
		{
			printf("B is big");
		}

		else{
			printf("c is big");
		}
	}
