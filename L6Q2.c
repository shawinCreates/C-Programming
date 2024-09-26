#include <stdio.h>

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int *ptr = arr;
    int i, sum = 0;

    for(i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of elements in array is %d\n", sum);
    return 0;
}

