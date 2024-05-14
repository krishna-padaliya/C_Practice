#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char msg[50];

	fp=fopen("hello.txt","r");

	if(fp==NULL)
	{
		printf("file not found\n");
	}
	else
	{
		printf("flie is create\n");
	}

   printf("%d",strlen(msg));    
    fgets(msg,20,fp);
    printf("%s",msg);
	printf("file written successfully");
}