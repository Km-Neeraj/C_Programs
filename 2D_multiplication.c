#include <stdio.h>

int main() {
    int n, i, j, k;

    // Read the size of the square matrices
    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n], result[n][n];

    // Input elements of first matrix
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the result matrix with zeros
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result of multiplication
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
