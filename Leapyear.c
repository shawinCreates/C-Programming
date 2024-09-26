#include <stdio.h>

int main() 
{
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check if the year is divisible by 4 but not by 100, or if it is divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }
    
    return 0;
}
