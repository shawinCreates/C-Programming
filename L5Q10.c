 #include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date; // Declare a variable of type Date

    // Prompt the user to enter the date
    printf("Enter the date (DD MM YYYY): ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);

    // Print the entered date
    printf("The entered date is: %02d-%02d-%04d\n", date.day, date.month, date.year);

    return 0;
}

