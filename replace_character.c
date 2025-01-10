
#include <stdio.h>

void replaceCharacter(char *str, char charToReplace, char replaceWith) {
    // Loop through each character in the string
    while (*str != '\0') {
        if (*str == charToReplace) {
            *str = replaceWith;  // Replace character
        }
        str++;  // Move to the next character
    }
}

int main() {
    char str[] = "This book is very easy";
    char charToReplace = 's';
    char replaceWith = 'p';

    printf("Original String: %s\n", str);
    
    // Call the function to replace characters
    replaceCharacter(str, charToReplace, replaceWith);

    printf("Modified String: %s\n", str);

    return 0;
}
