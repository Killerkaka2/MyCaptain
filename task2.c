#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter 2 nos\n");
	printf("a=");
	scanf("%d\n",&a);
	printf("b=");
	scanf("%d\n",&b);
	t=a;
	a=b;
	b=t;
	printf("Now the values after swapping is: a= %d\n b=%d",a,b);
	return 0;
}
