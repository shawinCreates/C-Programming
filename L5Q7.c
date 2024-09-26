#include <stdio.h>

struct book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct book books[5];
    int i;

    // Read book details
    for (i = 0; i < 5; i++) {
        printf("Enter details of Book %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", books[i].name);

        printf("Number of pages: ");
        scanf("%d", &(books[i].pages));

        printf("Price: ");
        scanf("%f", &(books[i].price));

        printf("\n");
    }

    // Find the most expensive book
    int maxIndex = 0;
    for (i = 1; i < 5; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    // Display the information of the most expensive book
    printf("Most Expensive Book:\n");
    printf("Name: %s\n", books[maxIndex].name);
    printf("Number of pages: %d\n", books[maxIndex].pages);
    printf("Price: %.2f\n", books[maxIndex].price);

    return 0;
}

