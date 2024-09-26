#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter number a: ");
	scanf("%f",&a);
	printf("Enter number b: ");
	scanf("%f",&b);
	if(a>b)
	{
		printf("a is greater than b");
	}
	else
	{
		printf("a is smaller than b");
	}
	return 0;
}
