#include<stdio.h>
int greatest(int, int, int);
int main()
{
	int x, y, z, largest;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&x,&y,&z);
	largest=greatest(x,y,z);
	printf("Largest among three number is %d",largest);
	return 0;
}
greatest(int a,int b,int c)
{
	if(a>b && a>c){
		return a;
	} else if(b>c &&b>a) {
		return b;
	} else{
		return c;
	}
}
