#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char msg[50]={"HEllO WORLD"};

	fp=fopen("hello.txt","w");

	if(fp==NULL)
	{
		printf("file not found\n");
	}
	else
	{
		printf("flie is create\n");
	}

   printf("%d",strlen(msg));    
    fputs(msg,fp);
	printf("file written successfully");
}