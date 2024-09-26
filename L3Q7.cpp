#include<stdio.h>
int main()
{
	int arr[25],i,positive=0,negative=0,odd=0,even=0;
	printf("Enter 25 numbers: ");
	for(i=0; i<25; i++) {
		scanf("%d",&arr[i]);
		
		if(arr[i]>=0) {
			positive++;
		} else {
			negative++;
		}
		
		if(arr[i]%2==0) {
			even++;
		} else {
			odd++;
		}
	}
	printf("Positive numbers=%d",positive);
	printf("Negative numbers=%d",negative);
	printf("Even numbers=%d",even);
	printf("Odd numbers=%d",odd);
	return 0;
}
