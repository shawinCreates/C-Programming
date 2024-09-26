#include <stdio.h>
int main()
{
	int f0=0,f1=1,f2,i;
	printf("%d,%d",f0,f1);
	for(i=2; i<10; i++) {
		f2=f0+f1;
		printf(",%d",f2);
		f0=f1;
		f1=f2;
	}
	return 0;
}
