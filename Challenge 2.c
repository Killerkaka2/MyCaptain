#include<stdio.h>
int main()
{
	int ch;
	printf("Welcome to Our Hotel\n");
	printf("Please Enter a number from the following List:\n");
	printf(" 1.Burger\n 2.Sandwich\n 3.Pizza\n 4.Pasta\n 5.Noodles\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Food Item: Burger\n");
			printf("Cost: 150");
			break;
		case 2:
			printf("Food Item: Sandwich\n");
			printf("Cost: 100");
			break;
			
		case 3:
			printf("Food Item: Pizza\n");
			printf("Cost: 500");
			break;
			
		case 4:
			printf("Food Item: Pasta\n");
			printf("Cost: 120");
			break;
			
		case 5:
			printf("Food Item: Noodles\n");
			printf("Cost: 50");
			break;
			
		default:
			printf("Invalid Choice!!!");
			break;
			
	}
	return 0;
}
