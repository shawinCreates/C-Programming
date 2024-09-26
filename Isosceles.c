#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter first side of triangle a: ");
	scanf("%d",&a);
	printf("Enter first side of triangle b: ");
	scanf("%d",&b);
	printf("Enter first side of triangle c: ");
	scanf("%d",&c);
	
	//Condition for isosceles triangle = two sides must be equal
	if(a==b==c){
		printf("Given triangle is equilateral triangle");
	} else if(a==b || b==c || c==a){
		printf("Given triangle is isosceles triangle");
	} else {
		printf("Given triangle is not an isosceles triangle");
	}
	return 0;
}
