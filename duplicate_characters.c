#include <stdio.h>
#include <string.h>

void printDuplicateCharacters(char *str) {
    int count[256] = {0}; // Array to store the count of each character
    int i;

    // Calculate frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Print characters that appear more than once
    printf("Duplicate characters in the string are:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("Character '%c' occurs %d times\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printDuplicateCharacters(str);

    return 0;
}
