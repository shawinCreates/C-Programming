#include <stdio.h>
#include <stdlib.h>

// Structure to represent an expense
typedef struct {
    char name[100];
    float amount;
} Expense;

// Function to add an expense
void addExpense(Expense* expenses, int* numExpenses) {
    printf("Enter expense name: ");
    scanf("%s", expenses[*numExpenses].name);
    
    printf("Enter expense amount: ");
    scanf("%f", &expenses[*numExpenses].amount);
    
    (*numExpenses)++;
    
    printf("Expense added successfully.\n");
}

// Function to calculate and display total expenses
void displayTotalExpenses(Expense* expenses, int numExpenses) {
    float total = 0;
    int i;
    
    for (i = 0; i < numExpenses; i++) {
        total += expenses[i].amount;
    }
    
    printf("Total Expenses: %.2f\n", total);
}

// Function to display the menu options
void displayMenu() {
    printf("\n-----------------------------------\n");
    printf("       Personal Finance Manager\n");
    printf("-----------------------------------\n");
    printf("1. Add Expense\n");
    printf("2. Display Total Expenses\n");
    printf("3. Exit\n");
    printf("-----------------------------------\n");
    printf("Enter your choice: ");
}

int main() {
    Expense expenses[100];
    int numExpenses = 0;
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addExpense(expenses, &numExpenses);
                break;
            case 2:
                displayTotalExpenses(expenses, numExpenses);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;
}
