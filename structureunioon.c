#include <stdio.h>
#include <string.h>

// Defining a nested structure
struct Address {
    char city[20];
    int pin;
};

struct Employee {
    char name[20];
    int id;
    struct Address addr;  // Nested structure
};

// Union example
union Data {
    int num;
    float salary;
};

int main() {
    // Using structure
    struct Employee emp;
    strcpy(emp.name, "Neeraj");
    emp.id = 101;
    strcpy(emp.addr.city, "Delhi");
    emp.addr.pin = 110001;

    // Displaying structure data
    printf("Employee Details:\n");
    printf("Name: %s\nID: %d\nCity: %s\nPIN: %d\n", emp.name, emp.id, emp.addr.city, emp.addr.pin);

    // Using union
    union Data data;
    data.num = 10;
    printf("\nUnion Data (num): %d\n", data.num);

    data.salary = 50000.50;
    printf("Union Data (salary): %.2f\n", data.salary);
    
    // Note: The previous value (num) is lost when we assign to salary.

    return 0;
}
