#include<stdio.h>
float multi(int,float);
int main()
{
	int x;
	float y, product;
	printf("Enter int and float number respectively: ");
	scanf("%d %f",&x, &y);
	product=multi(x,y);
	printf("Product of given number is %f", product);
	return 0;
}
float multi(int a,float b)
{
	float x;
	x=a*b;
	return x;
}
