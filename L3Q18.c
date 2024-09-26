#include <stdio.h> 
#include <conio.h>
#include<string.h> 
void main() 
{ 
	char string[20]; 
	int len, i, p=1; 
	printf("Enter string:\t"); 
	gets(string); 
	len=strlen(string); 
	for(i=0;i<(len/2);i++)
	{ 
		if(string[i]!=string[len-i-1])  {
			p=0;
		} 
	} 
	if(p==0) 
	printf("\nThe input string is not palindrome."); 
	else 
	printf("\nThe input string is palindrome."); 
	getch(); 
}
