#include <stdio.h>

struct student {
    char name[50];
    int rollno;
    float marks;
};

int main() {
    struct student students[5];
    int i;

    // Read data for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter roll number for student %d: ", i+1);
        scanf("%d", &students[i].rollno);

        printf("Enter marks for student %d: ", i+1);
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Display name and roll number of students with marks greater than 50
    printf("Students with marks greater than 50:\n");
    for (i = 0; i < 5; i++) {
        if (students[i].marks > 50) {
            printf("Name: %s, Roll Number: %d\n", students[i].name, students[i].rollno);
        }
    }

    return 0;
}

