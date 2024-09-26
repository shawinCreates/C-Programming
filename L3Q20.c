#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{ 
	char name[30]; 
	int length, i; 
	printf("Enter your name: "); 
	gets(name); 
	length=strlen(name); 
	printf("\nThe ASCIIvalues of characters in the name %s are:\n",name); 
	for(i=0;i<length;i++) 
	printf("%c = %d\n", name[i], name[i]); 
	getch(); 
} 
