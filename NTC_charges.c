#include<stdio.h>
int main()
{
	//take input n as number of calls
	int user_num,n,charges;
	
	//take user phone number input
	printf("Enter your phone number: ");
	scanf("%d",&user_num);
	
	//take total number of calls as input
	printf("Enter total number of calls: ");
	scanf("%d",&n);
	
	//calculate the charge
	if(n>=0 && n<=30){
		charges = 0;
	} else if(n>30 && n<=60){
		charges = n*0.5;
	} else{
		charges = n*1;
	}
	printf("The total amount to be paid by %d is Rs %d",user_num,charges);
	return 0;
}
