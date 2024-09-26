#include <stdio.h>
int main() 
{
    int nums[10], temp, i, j;
    
    printf("Enter 10 numbers:\n");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    
    // bubble sort algorithm
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    
    printf("Sorted numbers in ascending order:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}

