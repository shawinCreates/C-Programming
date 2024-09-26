#include <stdio.h>
#include<string.h>
struct Student {
    char name[20];
    int totalMarks;
    char grade;
};

void displayData(struct Student student);

int main() {
	int i;
    struct Student students[4];

    // Initialize student data
    strcpy(students[0].name, "Ram");
    students[0].totalMarks = 100;
    students[0].grade = 'C';

    strcpy(students[1].name, "Sita");
    students[1].totalMarks = 120;
    students[1].grade = 'B';

    strcpy(students[2].name, "Gita");
    students[2].totalMarks = 130;
    students[2].grade = 'B';

    strcpy(students[3].name, "Gopal");
    students[3].totalMarks = 150;
    students[3].grade = 'A';

    // Display the data
    printf("Name\t\tTotal Marks\tGrade\n");
    for (i = 0; i < 4; i++) {
        displayData(students[i]);
    }

    return 0;
}

void displayData(struct Student student) {
    printf("%s\t\t%d\t\t%c\n", student.name, student.totalMarks, student.grade);
}

