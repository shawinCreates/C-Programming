#include <stdio.h>
int main()
{
	char cr;
	printf("Enter your desired character: ");
	scanf("%c",&cr);
	if((cr>='a' && cr<='z')||(cr>='A' && cr<='Z'))
	{
		printf("%c is an alphabet",cr);
	}
	else
	{
		printf("%c is not an alphabet",cr);
	}
	return 0;
}
