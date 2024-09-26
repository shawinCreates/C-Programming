#include <stdio.h> 
#include <conio.h> 
long int factorial(int n);
void main() 
{ 
	int number; 
	long int x; 
	printf("Enter a number whose factorial is needed:"); 
	scanf("%d", &number); 
	x=factorial(number); 
	printf("\n The factorial is:%ld", x); 
	getch(); 
} 
long int factorial(int n) 
{ 
	if(n==1) {
		return 1;
	} else {
		return (n*factorial(n-1)); 
	}
}
