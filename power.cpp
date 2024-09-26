#include<stdio.h>
#include<math.h>
int main()
{ 
	int x,y,power;
	printf("Enter any two numbers: ");
	scanf("%d %d", &x,&y);
	
	power=pow(x,y);
	printf("Value of %d raised to power of %d is %d",x,y,power);
	return 0;
}
