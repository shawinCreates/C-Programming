#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *age, i, count = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    age = (int *)malloc(n * sizeof(int)); // dynamically allocate memory for age array
    
    if (age == NULL) { // check if memory allocation was successful
        printf("Memory allocation failed.");
        exit(1);
    }
    
    printf("Enter the age of %d employees:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", age + i);
        if (*(age + i) > 80) {
            count++;
        }
    }
    
    printf("Number of employees with age above 80: %d", count);
    
    free(age); // free dynamically allocated memory
    return 0;
}

