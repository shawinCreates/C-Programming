#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    printf("Enter the size of matrix (m x n): ");
    scanf("%d %d", &m, &n);
    
    int **matrix = (int **) malloc(m * sizeof(int *));
    for(i = 0; i < m; i++) {
        matrix[i] = (int *) malloc(n * sizeof(int));
    }
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", (*(matrix + i) + j));
        }
    }
    
    printf("The matrix is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
    
    printf("The transpose of the matrix is:\n");
    for(j = 0; j < n; j++) {
        for(i = 0; i < m; i++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
    
    for(i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}
