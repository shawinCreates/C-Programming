#include<stdio.h>
#include<string.h>
int main()
{
	int i=0, length, length1=0;
	char name[20];
	printf("Enter the string: ");
	gets(name);
	//using strlen
	length = strlen(name);
	printf("The length of string is %d",length);
	
	//without using strlen
	while(name[i] != '\0') {
		length1++;
		i++;
	}
	printf("\nThe length of string is %d",length1);
	return 0;
}
