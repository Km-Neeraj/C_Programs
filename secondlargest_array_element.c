#include <stdio.h>

int main() {
    int n, i;
    
    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    printf("Enter the elements of the array:\n ");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }

    // Handle edge case when array has less than 2 elements
    if(n < 2) {
        printf("Array should have at least two elements to find the second largest element.\n");
        return 0;
    }
    
    int firstLargest = arr[0];
    int secondLargest = -1;

    // Find the largest element and second largest element
    for(i = 1; i < n; i++) {
        if(arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] < firstLargest) {
            secondLargest = arr[i];
        }
    }

    // Check if there is a valid second largest element
    if(secondLargest == -1) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
