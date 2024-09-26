#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i, j;
    
    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2);
    
    i = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    j = 0;
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    
    printf("The concatenated string is: %s", result);
    
    return 0;
}

