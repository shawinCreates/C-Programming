#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Employee structure
struct Employee {
    char name[50];
    float salary;
    struct Date hireDate;
};

int main() {
    // Create an Employee variable and initialize it
    struct Employee Person1 = {
        "Hari",
        50000.0,
        {10, 3, 2001}
    };

    // Display the information
    printf("Employee Name: %s\n", Person1.name);
    printf("Salary: $%.2f\n", Person1.salary);
    printf("Hire Date: %d-%d-%d\n", Person1.hireDate.day, Person1.hireDate.month, Person1.hireDate.year);

    return 0;
}

