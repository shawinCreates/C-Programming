#include<stdio.h>
int main()
{
	int arr[10],i;
	printf("Enter the numbers:\n");
	for(i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++) {
		printf("arr[%d]=%d located at %d. \n",i,arr[i],&arr[i]);
	}
	return 0;
}
