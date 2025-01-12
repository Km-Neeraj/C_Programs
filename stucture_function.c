
#include <stdio.h>

// Structure definition
struct employee {
    int id;
    char name[50];
    float salary;
};

// Function to calculate average salary
float AvgSal(struct employee st[], int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += st[i].salary;
    }
    return total / count;
}

int main() {
    int teamSize, totalEmployees;

    // Input for team members
    printf("Enter the number of members in the project team: ");
    scanf("%d", &teamSize);
    struct employee team[teamSize];
    printf("Enter details for project team members:\n");
    for (int i = 0; i < teamSize; i++) {
        printf("Member %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &team[i].id);
        printf("Name: ");
        scanf("%s", team[i].name);
        printf("Salary: ");
        scanf("%f", &team[i].salary);
    }

    // Input for all employees
    printf("Enter the total number of employees in the organization: ");
    scanf("%d", &totalEmployees);
    struct employee org[totalEmployees];
    printf("Enter details for all employees:\n");
    for (int i = 0; i < totalEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &org[i].id);
        printf("Name: ");
        scanf("%s", org[i].name);
        printf("Salary: ");
        scanf("%f", &org[i].salary);
    }

    // Calculate average salaries
    float avgTeamSalary = AvgSal(team, teamSize);
    float avgOrgSalary = AvgSal(org, totalEmployees);

    // Display results
    printf("\nAverage salary of project team members: %.2f\n", avgTeamSalary);
    printf("Average salary of all employees in the organization: %.2f\n", avgOrgSalary);

    // Compare averages
    if (avgTeamSalary > avgOrgSalary) {
        printf("The project team's average salary is higher than the organization's average salary.\n");
    } else if (avgTeamSalary < avgOrgSalary) {
        printf("The project team's average salary is lower than the organization's average salary.\n");
    } else {
        printf("The project team's average salary is equal to the organization's average salary.\n");
    }

    return 0;
}