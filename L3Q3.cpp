#include<stdio.h>
int main()
{
	int arr[10],i,largest,smallest;
	printf("Enter the numbers:\n");
	for(i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	smallest=arr[0];
	for(i=0; i<10; i++) {
		if(largest<arr[i])
		largest=arr[i];
		
		if(smallest>arr[i])
		smallest=arr[i];
	}
	printf("Largest=%d",largest);
	printf("\nSmallest=%d",smallest);
	return 0;
}
