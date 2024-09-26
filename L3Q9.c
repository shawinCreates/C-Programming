#include<stdio.h>
int main()
{
	int arr[2][3],i,j;
	printf("Enter the elements for 2*3 matrix:\n ");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("Elements of 2*3 matrix are:\n ");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
