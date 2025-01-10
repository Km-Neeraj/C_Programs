#include <stdio.h>

int main() {
    int n, i, j;
    
    // Read the size of the square matrices
    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);
    
    int matrix1[n][n], matrix2[n][n];
    int sumDiagonal1 = 0, sumDiagonal2 = 0;

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

    // Calculate the sum of diagonal elements of both matrices
    for(i = 0; i < n; i++) {
        sumDiagonal1 += matrix1[i][i];  // Sum of diagonal elements of first matrix
        sumDiagonal2 += matrix2[i][i];  // Sum of diagonal elements of second matrix
    }

    // Display the result
    printf("Sum of diagonal elements of the first matrix: %d\n", sumDiagonal1);
    printf("Sum of diagonal elements of the second matrix: %d\n", sumDiagonal2);
    printf("Total sum of diagonal elements of both matrices: %d\n", sumDiagonal1 + sumDiagonal2);

    return 0;
}
