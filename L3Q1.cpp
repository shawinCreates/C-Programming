#include<stdio.h>
int main()
{
	int arr[10],i,sum=0,product=1,average=0,greatest;
	printf("Enter the numbers:\n");
	for(i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++) {
		greatest=arr[0];
		if(greatest<arr[i])
		greatest=arr[i];
		sum+=arr[i];
		product*=arr[i];
		average=sum/10;
	}
	printf("Sum=%d\n",sum);
	printf("Product=%d\n",product);
	printf("Average=%d\n",average);
	printf("Greatest=%d\n",greatest);
	return 0;
}
