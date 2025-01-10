#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseStr(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    // Swap characters from start and end until the middle is reached
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "amit kumar";

    printf("Original String: %s\n", str);
    reverseStr(str);
    printf("Reversed String: %s\n", str);

    return 0;
}
