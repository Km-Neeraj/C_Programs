#include <stdio.h>
#include <string.h>

struct Address {
    char city[20];
    int pin;
};

struct Employee {
    char name[20];
    int id;
    struct Address addr;  // Nested structure
};

int main() {
    struct Employee emp;

    strcpy(emp.name, "Neeraj");
    emp.id = 101;
    strcpy(emp.addr.city, "Delhi");
    emp.addr.pin = 110001;

    printf("Employee Details:\n");
    printf("Name: %s\nID: %d\nCity: %s\nPIN: %d\n", emp.name, emp.id, emp.addr.city, emp.addr.pin);

    return 0;
}
