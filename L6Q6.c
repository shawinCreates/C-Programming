#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int *mat1 = (int*)malloc(m * n * sizeof(int));
    int *mat2 = (int*)malloc(m * n * sizeof(int));
    int *sum = (int*)malloc(m * n * sizeof(int));

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", mat1 + i * n + j);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", mat2 + i * n + j);
        }
    }

    // Add matrices
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            *(sum + i * n + j) = *(mat1 + i * n + j) + *(mat2 + i * n + j);
        }
    }

    // Print the resultant matrix
    printf("The sum of the two matrices is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", *(sum + i * n + j));
        }
        printf("\n");
    }

    //free(mat1);
    //free(mat2);
    //free(sum);

    return 0;
}
