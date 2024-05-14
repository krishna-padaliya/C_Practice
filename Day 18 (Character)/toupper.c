#include <stdio.h>
#include <ctype.h>
void main()
{
		char ans,result;

		printf("Enter your Character...\n");

		ans=getchar();

		result=toupper(ans);

		putchar(result);
}