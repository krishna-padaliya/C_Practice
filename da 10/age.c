#include <stdio.h>
void main()
{
	int age;

	printf("Enter the age=");
	scanf("%d",&age);

	age>=18?printf("You can vote..."):printf("You can't vote...");
}