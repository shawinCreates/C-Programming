#include <stdio.h>

int main() {
  int n, i, j, temp, marks[100];

  // read the number of students
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // read the marks of each student
  printf("Enter the marks of %d students:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &marks[i]);
  }

  // sort the marks in descending order using bubble sort
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (marks[j] < marks[j + 1]) {
        // swap marks[j] and marks[j+1]
        temp = marks[j];
        marks[j] = marks[j + 1];
        marks[j + 1] = temp;
      }
    }
  }

  // display the top five marks
  printf("Top five marks:\n");
  for (i = 0; i < 5 && i < n; i++) {
    printf("%d\n", marks[i]);
  }

  return 0;
}

