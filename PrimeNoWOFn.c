#include<stdio.h>
int main()
{
	int a,n,i,c=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=n%i;
		if(a==0)
		c++;
	}
	if(c==2)
	printf("Number is prime");
	else
	printf("Number is not prime");
	return 0;
}
