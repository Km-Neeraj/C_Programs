#include <stdio.h>

struct Student {
    int roll_no;
    float marks;
    char grade;
};

int main() {
    struct Student s1 = {101, 85.5, 'A'};

    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.1f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);

    printf("Size of structure: %lu bytes\n", sizeof(s1));

    return 0;
}
