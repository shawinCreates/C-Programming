#include<stdio.h>
int add(int , int);
int sub(int, int);
int multi(int, int);
float div(int, int);
int main()
{
	int x, y, sum, diff, product;
	float division;
	printf("Enter two numbers: \n");
	scanf("%d %d",&x,&y);
	sum=add(x,y);
	printf("Sum of two numbers is %d\n",sum);
	diff=sub(x,y);
	printf("Difference between two numbers is %d\n",diff);
	product=multi(x,y);
	printf("Product of two numbers is %d\n",product);
	division=div(x,y);
	printf("Division of two numbers is %f\n",division);
	return 0;
}
int add(int a, int b)
{
	int x;
	x=a+b;
	return x;
}
int sub(int a, int b)
{
	int x;
	x=a-b;
	return x;
}
int multi(int a, int b)
{
	int x;
	x=a*b;
	return x;
}
float div(int a, int b)
{
	float x;
	x=(float)a/(float)b;
	return x;
}
