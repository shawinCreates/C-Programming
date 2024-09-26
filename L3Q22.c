#include<stdio.h>
#include<string.h>
int main()
{
	int vowels=0, i, len;
	char string[20];
	printf("Enter the string ");
	gets(string);
	
	len=strlen(string);
	for(i=0; i<len; i++) {
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
		vowels++; 
	}
	printf("\nNumber of vowel letters is %d",vowels);
	return 0;
}
