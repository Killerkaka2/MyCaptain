#include<stdio.h>
int main()
{
	int sc;
	printf("Enter the marks you scored: \n");
	scanf("%d",&sc);
	if(sc>=85 && sc<=100)
	{
		printf("You Scored A grade");
		
	}
	else if(sc>=70 && sc<=84)
	{
		printf("You Scored B grade");
		
	}
	else if(sc>=55 && sc<=69)
	{
		printf("You Scored C grade");
		
	}
	else
	if(sc>=40 && sc<=54)
	{
		printf("You Scored D grade");
		
	}	
	else if(sc<40)
	{
		printf("You Scored F grade");
		
	}
	return 0;
	
}
