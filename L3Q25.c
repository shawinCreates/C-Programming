#include <stdio.h>
#include <string.h>

int main() {
    char names[10][100], temp[100];
    int i, j;
    
    // Read the names of 10 students from the user
    printf("Enter the names of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. ", i+1);
        gets(names[i]);
    }
    
    // Sort the names in alphabetical order using bubble sort algorithm
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9-i; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    
    // Display the names in alphabetical order
    printf("\nThe names in alphabetical order are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. %s\n", i+1, names[i]);
    }
    
    return 0;
}

