#include<stdio.h>
int sum(int n,int s)
{
	if(n==0)
	return s;
	else
	sum(n/10,s+n%10);
}
int main()
{
	int n,s;
	printf("Enter a number\n");
	scanf("%d",&n);
	s=sum(n,0);
	printf("Sum of digits=%d\n",s);
	return 0;
}
