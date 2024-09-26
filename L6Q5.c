#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int num1 = 10, num2 = 20;

  printf("Before swapping, num1 = %d and num2 = %d\n", num1, num2);

  // call the swap function to exchange the values of num1 and num2
  swap(&num1, &num2);

  printf("After swapping, num1 = %d and num2 = %d\n", num1, num2);

  return 0;
}

// function to swap two variables using pointers
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

