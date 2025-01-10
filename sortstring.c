#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int n = strlen(str);

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string without spaces: ");
    scanf("%s", str); // Input string (without spaces)

    sortString(str);

    printf("Sorted string: %s\n", str);

    return 0;
}
