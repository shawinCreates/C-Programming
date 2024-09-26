#include<stdio.h>
int main()
{
	int CN;
	float units, charges;
	printf("Please enter your Customer Number:");
	scanf("%d",&CN);
	
	printf("Now enter units consumed:");
	scanf("%f",&units);
	if(units>=0 && units<=200){
		charges=units*0.5;
	} else if(units>200 && units<=400){
		charges=100 + (units-200)*0.65;
	} else if(units>400 && units<=600){
		charges=230 + (units-400)*0.80;
	} else{
		charges=390 + (units-600)*1;
	}
	
	printf("Total amount to be paid by customer number:%d is RS %f",CN,charges);
	
	return 0;
}
