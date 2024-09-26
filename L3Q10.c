#include <stdio.h>
int main() {
    int m, n, i, j, k;
    
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &m, &n);
    
    int matrix1[m][n], matrix2[m][n], sum[m][n], difference[m][n], product[m][n];
    
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Calculate sum
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Calculate difference
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    
    // Calculate product
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            product[i][j] = 0;
            for (k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Display sum
    printf("The sum of the matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    // Display difference
    printf("The difference of the matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }
    
    // Display product
    printf("The product of the matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
