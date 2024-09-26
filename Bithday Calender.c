#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_BIRTHDAYS 100
#define MAX_NAME_LENGTH 100

// Structure to represent a Date
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Structure to represent a Birthday
typedef struct {
    char name[MAX_NAME_LENGTH];
    Date birthday;
} Birthday;

// Function to add a birthday
void addBirthday(Birthday *birthdays, int *count) {
    printf("Enter name: ");
    fflush(stdin); // Clear input buffer
    fgets(birthdays[*count].name, sizeof(birthdays[*count].name), stdin);
    birthdays[*count].name[strcspn(birthdays[*count].name, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter birthday (DD MM YYYY): ");
    scanf("%d %d %d", &birthdays[*count].birthday.day, &birthdays[*count].birthday.month, &birthdays[*count].birthday.year);

    (*count)++;
}

// Function to view all birthdays
void viewBirthdays(Birthday *birthdays, int count) {
    if (count == 0) {
        printf("No birthdays found.\n");
        return;
    }

    printf("\n--- List of Birthdays ---\n");
    int i;
    for (i = 0; i < count; i++) {
        printf("%s - %d/%d/%d\n", birthdays[i].name, birthdays[i].birthday.day,
               birthdays[i].birthday.month, birthdays[i].birthday.year);
    }
}

// Function to save birthdays to a file
void saveBirthdaysToFile(Birthday *birthdays, int count) {
    FILE *file = fopen("birthdays.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    // Writing each birthday to the file
    int i;
    for (i = 0; i < count; i++) {
        fprintf(file, "%s %d %d %d\n", birthdays[i].name, birthdays[i].birthday.day,
                birthdays[i].birthday.month, birthdays[i].birthday.year);
    }

    fclose(file);
    printf("Birthdays saved to file.\n");
}

// Function to load birthdays from a file
int loadBirthdaysFromFile(Birthday *birthdays) {
    FILE *file = fopen("birthdays.txt", "r");
    if (file == NULL) {
        printf("No saved birthdays found.\n");
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%s %d %d %d", birthdays[count].name, &birthdays[count].birthday.day,
                  &birthdays[count].birthday.month, &birthdays[count].birthday.year) != EOF) {
        count++;
    }

    fclose(file);
    printf("Birthdays loaded from file.\n");
    return count;
}

// Function to get the current date
Date getCurrentDate() {
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    Date current_date;
    current_date.day = current_time->tm_mday;
    current_date.month = current_time->tm_mon + 1;
    current_date.year = current_time->tm_year + 1900;

    return current_date;
}

// Function to display the menu with upcoming birthdays
void displayMenu(Birthday *birthdays, int count) {
    printf("\n--- Birthday Calendar ---\n");
    printf("1. Add Birthday\n");
    printf("2. View Birthdays\n");
    printf("3. Save Birthdays to File\n");
    printf("4. Load Birthdays from File\n");

    Date current_date = getCurrentDate();
    printf("\n--- Upcoming Birthdays ---\n");
    int i, upcoming_count = 0;
    for (i = 0; i < count; i++) {
        if (birthdays[i].birthday.month > current_date.month ||
            (birthdays[i].birthday.month == current_date.month && birthdays[i].birthday.day >= current_date.day)) {
            printf("%s - %d/%d/%d\n", birthdays[i].name, birthdays[i].birthday.day,
                   birthdays[i].birthday.month, birthdays[i].birthday.year);
            upcoming_count++;
        }
    }
    if (upcoming_count == 0) {
        printf("No upcoming birthdays.\n");
    }

    printf("\n5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    Birthday birthdays[MAX_BIRTHDAYS];
    int count = 0;

    int choice;
    do {
        displayMenu(birthdays, count);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBirthday(birthdays, &count);
                break;
            case 2:
                viewBirthdays(birthdays, count);
                break;
            case 3:
                saveBirthdaysToFile(birthdays, count);
                break;
            case 4:
                count = loadBirthdaysFromFile(birthdays);
                break;
            case 5:
                printf("\nSEE YOU SOON\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

