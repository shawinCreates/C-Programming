#include<stdio.h>
int fun_factorial(int n);
int main()
{
	int num,factorial;
	printf("Enter the number: ");
	scanf("%d",&num);
	factorial=fun_factorial(num);
	printf("The factorial of given number is %d",factorial);
	return 0;
}
int fun_factorial(int x)
{
	int factorial=1,i;
	for(i=1; i<=x; i++) {
		factorial *=i;
	}
	return factorial;
}
