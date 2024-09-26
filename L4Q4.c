#include<stdio.h>
int prime(int);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	prime(num);
	return 0;
}
int prime(int num)
{
	int i=2;
	while (i<num) {
		if(num%i==0) {
		printf("Not Prime Number");
		break;
		}
		i++;
	}
	if(num==i)
	printf("Prime Number");
}
