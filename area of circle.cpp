#include<stdio.h>
float circle(float r);
int main()
{
	float area,r;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	area=circle(r);
	printf("Area of the circle is %f",area);
	return 0;
}
float circle(float x) 
{
	float area;
	area = 3.14 * x * x;
	return area;
}
