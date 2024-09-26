#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    char address[100];
    float salary;
};
int main() {
    struct employee employees[5];
    int i,j;

    // Read data for 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter address for employee %d: ", i + 1);
        scanf("%s", employees[i].address);

        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    // Sort employees in ascending order of their name
    struct employee temp;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    // Display information of each employee
    printf("Employee Information (Sorted by Name):\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }
    return 0;
}
