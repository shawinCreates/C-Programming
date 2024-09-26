#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[20];
	printf("Enter the string: ");
	gets(str);
	
	for(i=0; i<strlen(str); i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] -=32;
		}
		else if(str[i] >='A' && str[i] <= 'Z') {
			str[i] +=32;
		}	
	}
	printf("\n Toggled string is %s",str);
	return 0;
}
