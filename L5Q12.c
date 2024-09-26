#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2; // Declare variables of type Date

    // Prompt the user to enter the first date
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Prompt the user to enter the second date
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Calculate the difference between the two dates
    int difference = dateDifference(date1, date2);

    // Display the difference in days
    printf("The difference between the two dates is %d days.\n", difference);

    return 0;
}
// Function to calculate the difference between two dates
int dateDifference(struct Date date1, struct Date date2) {
    int days1 = date1.year * 365 + date1.month * 30 + date1.day;
    int days2 = date2.year * 365 + date2.month * 30 + date2.day;

    return days2 - days1;
}
