#include<stdio.h>

int main() {
    int *p1;
    float *p2;
    char *p3;
    
    printf("Size of int pointer: %d bytes\n", sizeof(p1));
    printf("Size of float pointer: %d bytes\n", sizeof(p2));
    printf("Size of char pointer: %d bytes\n", sizeof(p3));
    
    return 0;
}

