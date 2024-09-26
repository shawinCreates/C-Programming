#include<stdio.h>
#include<string.h>
int main()
{
	int upper_case=0, lower_case=0, space=0, i, len;
	char string[20];
	printf("Enter the string ");
	gets(string);
	
	len=strlen(string);
	for(i=0; i<len; i++) {
		if(string[i] >= 'a' && string[i] <= 'z') {
			lower_case++;
		} else if(string[i] >= 'A' && string[i] <= 'Z') {
			upper_case++;
		} else if(string[i]=' ') {
			space++;
		}
	}
	printf("\nNumber of upper case letters is %d",upper_case);
	printf("\nNumber of lower case letters is %d",lower_case);
	printf("\nNumber of spaces is %d",space);
	return 0;
}
