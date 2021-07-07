#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter 2 nos\n");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("Now the values after swapping is: %d\n %d",a,b);
	return 0;
}
