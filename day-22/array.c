#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};

	printf("The value of a[0]=%d\n",a[0]);
	printf("The value of a[1]=%d\n",a[1]);
    printf("The value of a[2]=%d\n",a[2]);
    printf("The value of a[3]=%d\n",a[3]);
    printf("The value of a[4]=%d\n",a[4]);
  
    printf("\n\n");

    printf("The value of a[0]=%d\n",&a[0]);
	printf("The value of a[1]=%d\n",&a[1]);
    printf("The value of a[2]=%d\n",&a[2]);
    printf("The value of a[3]=%d\n",&a[3]);
    printf("The value of a[4]=%d\n",&a[4]);


}