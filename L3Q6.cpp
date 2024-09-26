#include<stdio.h>
int main()
{
	int arr[100],i,n,j,nums,temp,maximum,minimum;
	printf("Enter the total no. of Students: ");
	scanf("%d",&n);
	printf("Enter the marks:\n");
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	 // bubble sort algorithm
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < (n-1) - i; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted marks in descending order:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	maximum=arr[0];
	minimum=arr[0];
	for(i=0; i<n; i++) {
		if(maximum<arr[i])
		maximum=arr[i];
		
		if(minimum>arr[i])
		minimum=arr[i];
	}
	printf("\nMaximum marks=%d",maximum);
	printf("\nMinimum marks=%d",minimum);
	return 0;
}
