#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n], rev[n];
	
	printf("Enter the elements for array: \n");
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++) {
		rev[i]=arr[n-i-1];
	}
	
	printf("Array copied to another in reverse order is:\n ");
	for(i=0; i<n; i++) {
		printf("%d \t",rev[i]);
	}
	return 0;
}
