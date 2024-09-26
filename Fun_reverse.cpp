#include<stdio.h>
int fun_reverse(int n);
int main()
{
	int n, reverse;
	printf("Enter the number: ");
	scanf("%d",&n);
	reverse=fun_reverse(n);
	printf("The reverse of %d is %d",n,reverse);
	return 0;
}
int fun_reverse(int n)
{
	int reverse=0;
	while(n != 0) {
		reverse=reverse*10 + n%10;
		n /=10;
	}
	return reverse;
}
