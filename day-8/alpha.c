#include<stdio.h>
void main()
{
	char alpha;

	printf("Enter The Charcter:");
	scanf("%c",&alpha);

	switch(alpha)
	{
          case 'a':
          case 'A':
          printf("A for Apple");

          case 'b':
          case 'B':
          printf("B for Ball");

          case 'c':
          case 'C':
          printf("C for Cat");

           case 'D':
          case 'd':
          printf("D for Dog");

           case 'E':
          case 'e':
          printf("E for Elephent");

           case 'F':
          case 'f':
          printf("F for Fan");
          
	}
}