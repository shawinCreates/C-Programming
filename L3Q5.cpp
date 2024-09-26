#include <stdio.h>

void sort(int nums[], int n);

int main() 
{
    int nums[10];
    
    printf("Enter 10 numbers:\n");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    
    sort(nums, 10);
    
    printf("Sorted numbers in ascending order:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}

void sort(int nums[], int n)
{
    int temp;
    
    // bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

