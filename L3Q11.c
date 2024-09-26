#include<stdio.h>
int main()
{
	int i, j, is_prime;
	printf("Prime numbers between 1 and 100 are \n");
	for(i=2; i<=100; i++) {
		is_prime = 1;
		for(j=2; j<=i/2; j++) {
			if(i%j==0) {
			is_prime = 0;
			break;	
			}	
		}
		if(is_prime == 1)
		printf("%d \t",i);
	}
	return 0;
}
