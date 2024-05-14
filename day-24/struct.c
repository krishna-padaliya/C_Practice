#include<stdio.h>
struct student
{
	int no;
	char name[50];
	float mark;
}s1;
void main()
{
    struct student s1;

    printf("Enter Your Roll-No:");
    scanf("%d",&s1.no);

    printf("Enter Your Name:");
    scanf("%s",&s1.name);

    printf("Enter Your Mark:");
    scanf("%f",&s1.mark);

    printf("------------------------------------------------------------------\n");


    printf("student Data\n\n");

    printf("Roll-No= %d\n",s1.no);
    printf("Name= %s\n",s1.name);
    printf("Mark= %2f\n",s1.mark);

}