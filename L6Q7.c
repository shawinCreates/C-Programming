#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // allocate memory dynamically for array
    arr = (int*) malloc(n * sizeof(int));

    // read array elements from user
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", arr+i);

    // sort the array
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(*(arr+j) > *(arr+j+1))
            {
                // swap the elements
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }

    // display the sorted array
    printf("Sorted array: ");
    for(i=0; i<n; i++)
        printf("%d ", *(arr+i));

    // free the memory allocated for array
    free(arr);

    return 0;
}
