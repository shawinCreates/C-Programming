#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,area;
	//we use s as sum
	printf("Enter first side a: ");
	scanf("%d",&a);
	printf("Enter second side b: ");
	scanf("%d",&b);
	printf("Enter third side c: ");
	scanf("%d",&c);
	
	s=(a+b+c)/2;
	
	if((a+b)>c && (b+c)>a && (c+a)>b){
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area of given triangle is %d",area);
	} else {
		printf("Sides of triangle are invaild");
	}
	return 0;
}
