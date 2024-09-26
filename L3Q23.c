#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Read the first string from the user
    printf("Enter the first string: ");
    gets(str1);
    
    // Read the second string from the user
    printf("Enter the second string: ");
    gets(str2);
    
    // Compare the two strings using strcmp()
    if (strcmp(str1, str2) > 0) {
        // If str1 is greater than str2, display str1
        printf("The larger string is: %s", str1);
    } else if (strcmp(str1, str2) < 0) {
        // If str2 is greater than str1, display str2
        printf("The larger string is: %s", str2);
    } else {
        // If the two strings are equal, display a message
        printf("The two strings are equal.");
    }
    
    return 0;
}

