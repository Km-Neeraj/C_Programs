#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    float sum = 0, avg;
    int *arr;

    // Taking input for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Dynamically allocating memory using malloc
    arr = (int*) malloc(N * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input values
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculating sum
    }

    avg = sum / N; // Calculating average

    // Displaying results
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    // Freeing allocated memory
    free(arr);

    return 0;
}
