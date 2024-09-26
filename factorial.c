#include<stdio.h>
int main()
{
	int i,n;
	int factorial = 1;
	printf("Enter your number: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Error: Factorial of negtive number doesn't exist");
		return 0;
	}
	
	for(i=1; i<=n; i++) {
		factorial *=i;
	}
		printf("The factorial of %d is %d",n,factorial);
	return 0;
}
