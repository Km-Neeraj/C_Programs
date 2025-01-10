#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0, count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove blank spaces and count characters
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            result[j++] = str[i];
            count++;
        }
    }
    result[j] = '\0'; // Null-terminate the modified string

    // Output results
    printf("String without spaces: %s\n", result);
    printf("Number of characters: %d\n", count);

    return 0;
}
