#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: %s <source.txt> <destination.txt>\n", argv[0]);
        return 1;
    }

    // Open source file in read mode
    FILE *source = fopen(argv[1], "r");
    if (source == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file in write mode
    FILE *destination = fopen(argv[2], "w");
    if (destination == NULL) {
        perror("Error opening destination file");
        fclose(source);
        return 1;
    }

    // Copy contents from source to destination
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(source);
    fclose(destination);

    return 0;
}
