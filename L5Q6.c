#include <stdio.h>

struct book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct book book1;
    struct book *ptr = &book1;

    // Read book details
    printf("Enter book name: ");
    scanf("%s", ptr->name);

    printf("Enter number of pages: ");
    scanf("%d", &(ptr->pages));

    printf("Enter book price: ");
    scanf("%f", &(ptr->price));

    printf("\n");

    // Display book details
    printf("Book Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Pages: %d\n", ptr->pages);
    printf("Price: %.2f\n", ptr->price);

    return 0;
}

