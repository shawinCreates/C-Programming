#include <stdio.h>

// Define the Student structure template
struct Student {
    char username[9];
    int idNumber;
    int pinNumber;
};

int main() {
    struct Student student; // Declare a variable of type Student

    // Prompt the user to enter student information
    printf("Enter the student username (8 characters): ");
    scanf("%8s", student.username);
    printf("Enter the student ID number (9 characters): ");
    scanf("%9d", &student.idNumber);
    printf("Enter the student PIN number (5 digits): ");
    scanf("%5d", &student.pinNumber);

    // Display the entered student information
    printf("Student information:\n");
    printf("Username: %s\n", student.username);
    printf("ID Number: %d\n", student.idNumber);
    printf("PIN Number: %d\n", student.pinNumber);

    return 0;
}

