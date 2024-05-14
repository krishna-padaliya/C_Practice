#include<stdio.h>
void main()
{
	int a,b;

	printf("Enter value of Age:");
	scanf("%d", &a);


	if(a>=18)
	{
		printf("You Are Eligible For Driving Licence.");
    
    }
    else
    {
    	printf("You Are Not Eligible For Driving Licence.");
    }
}