#include <stdio.h>

union student {
    int roll;
    float marks;
};

int main() {
    union student std;

    // Assign value to roll
    std.roll = 101;
    printf("Roll: %d\n", std.roll);

    // Assign value to marks
    std.marks = 85.5;
    printf("Marks: %.2f\n", std.marks);

    return 0;
}

