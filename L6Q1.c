#include <stdio.h>

int main() {
    char a = 'A';
    float b = 3.14159;
    int c = 42;

    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n", (void*)&b);
    printf("Address of c: %p\n", (void*)&c);

    return 0;
}

