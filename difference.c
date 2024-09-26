#include<stdio.h>
int main()
{
	int a,b,c,greatest,smallest,difference;
	printf("Enter first number a: ");
	scanf("%d",&a);
	printf("Enter first number b: ");
	scanf("%d",&b);
	printf("Enter first number c: ");
	scanf("%d",&c);
	
	greatest = a;
	if(b>greatest){
	greatest = b;
	} if (c>greatest) {
	greatest = c;
	}
	
	smallest = a;
	if(b<smallest) {
	smallest = b;
	} if (c<smallest) {
	smallest = c;
	}
	
	difference=greatest-smallest;
	printf("The difference between greatest and smallest number is %d",difference);
	
	return 0;
}