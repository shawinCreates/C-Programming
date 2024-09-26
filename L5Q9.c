#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Declare and initialize the Date1 variable
    struct Date Date1 = {25, 2, 1957};

    // Print the date in the correct format
    printf("Date1: %02d/%02d/%04d\n", Date1.month, Date1.day, Date1.year);

    return 0;
}

