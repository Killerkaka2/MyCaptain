#include<stdio.h>
int main()
{
	int i,c,n,a;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=n%i;
		c++;
	}
	while(a==0 && c==2)
	{
	    printf("Number %d is Prime",n);
	}
	printf("NUmber is not a prime number");
	return 0;
}
