#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);
	if(a<0){
		printf("%d is negative number",a);
	} else{
		printf("%d is positive number",a);
	}
	return 0;
}
