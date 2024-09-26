#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, length;
	char string[20], rev[20];
	printf("Enter the string: ");
	gets(string);
	//using strrev
	strrev(string);
	printf("String reversed is %s",string);
	//without using strrev
	printf("\nReversed sting is "); 
	length=strlen(string); 
	for (i = length - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
	return 0;
}
