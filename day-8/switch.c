#include<stdio.h>
void main()
{
	int a,b,c;
	char opt;

     printf("Enter Your Opreation(+ , - , * , / , %):");
     scanf("%c", &opt);

	printf("Enter Your Value A:");
	scanf("%d",&a);

	printf("Enter Your Value B:");
	scanf("%d",&b);

	switch(opt)
	{
          case '+':
          c=a+b;
          printf("Answer is:%d", c);
          break;

          case '-':
          c=a-b;
          printf("Answer is:%d",c);
          break;

          case '*':
          c=a*b;
          printf("Answer is:%d",c);
          break;

          case '/':
          c=a/b;
          printf("Answer is:%d",c);
          break;

          case '%':
          c=a%b;
          printf("Answer is:%d",c);
          break;

	}


}