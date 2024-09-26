#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter your num ");
	scanf("%d",&n);
	
	for(i=2; i<=n/2; i++) {
		if(n%i==0) {
			printf("Not Prime Number");
			return 0;
		}
	}
	printf("Prime Number");
	return 0;
}
