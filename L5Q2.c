#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
    char remarks[50];
};

void displayData(struct student s);

int main() {
    struct student s;

    // Read data from the user
    printf("Enter the name: ");
    scanf("%s", s.name);

    printf("Enter the roll number: ");
    scanf("%d", &s.roll);

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    printf("Enter the remarks: ");
    scanf("%s", s.remarks);

    // Display the entered data
    printf("\nEntered Data:\n");
    displayData(s);

    return 0;
}

void displayData(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("Remarks: %s\n", s.remarks);
}

