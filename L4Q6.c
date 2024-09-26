#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
	int a, b, value;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	value=power(a,b);
	printf("Value of a raised to b is %d",value);
	return 0;
}
int power(int a, int b) 
{
	long int x;
	x=pow(a,b);
	return x;
}
