#include<stdio.h>
void main()
{
	int day;

	printf("Enter Day Number:");
	scanf("%d",&day);


	switch(day)
	{
	   case 1:
	      	printf("DAy 1 is Monday.");

	   case 2:
	      	printf("Day 2 is Tuesday.");
	   case 3:
          printf(" Day 3 is Wednesday");
          break;
      case 4:
          printf(" Day 4 is Thursday");
          break;
      case 5:
          printf(" Day 5 is Friday");
          break;
      case 6:
          printf(" Day 6 is Saturday");
          break;
      case 7:
          printf(" Day 7 is Sunday");
          break;
      default:
          printf("Invalid Input");
          break;
      

	}
}