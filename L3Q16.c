#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    
    // Read the string from the user
    printf("Enter a string: ");
    gets(str);
    
    // Convert the string to upper case
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    
    // Display the string in upper case
    printf("\nString in lower case: %s", str);
    
    return 0;
}

