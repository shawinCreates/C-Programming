#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	printf("Enter the elements of array: ");
	for(i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<9; i++) {
		for(j=0; j<9-i; j++) {
			if(arr[j]>arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("After sorting in accending order: ");
	for(i=0; i<10; i++) {
		printf("%d \t",arr[i]);
	}
	return 0;
}
