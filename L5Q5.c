#include <stdio.h>
#include <string.h>

struct person {
    char name[50];
    char address[100];
};
int main() {
    struct person people[5];
    struct person temp;
    int i,j;

    // Read names and addresses
    for (i = 0; i < 5; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Enter address for person %d: ", i + 1);
        scanf("%s", people[i].address);

        printf("\n");
    }

    // Sort names in alphabetical order
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (strcmp(people[j].name, people[j + 1].name) > 0) {
                temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }

    // Display sorted names
    printf("Sorted Names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", people[i].name);
    }

    return 0;
}

