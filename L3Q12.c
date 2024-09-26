#include<stdio.h>
int main()
{
	int i, j, stu[10], temp;
	printf("Enter the marks of students. \n");
	for(i=0; i<10; i++) {
		scanf("%d",&stu[i]);
	}
	//sorting marks
	for(i=0; i<10; i++) {
		for(j=0; j<10; j++) {
			if(stu[j]<stu[j+1]) {
				temp=stu[j+1];
				stu[j+1]=stu[j];
				stu[j]=temp;
			}
		}
	}
	printf("Top 5 marks of students are:\n");
	for(i=0; i<5; i++) {
		printf("%d \t",stu[i]);
	}
	return 0;
}
