#include<stdio.h>
long int factorial(int);
int main()
{
	long int x=1;
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	x=factorial(num);
	printf("Factorial of given number is %ld",x);
	return 0;
}
long int factorial(int n)
{
	int i;
	long int x=1;
	for(i=1; i<=n; i++) {
		x *= i;
	}
	return x;
}
