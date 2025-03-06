#include<stdio.h>
//definining structure for employee details
struct employee
{
  int emp_id;
  char name[50];
  float salary;
  int age;
};

int main()
{
  struct employee employees[50];//array of structure to store 50 employee details
  int i;
  printf("\nEnter 50 employee details\n");
  for(i=0;i<=3;i++)
  {
     printf("\nEnter employee %d details\n",i+1);
     printf("Emp_id:\n ");
     scanf("%d",&employees[i].emp_id);
     printf("Emp_name:\n ");
     scanf(" %[^\n]",employees[i].name);
     printf("Emp_salary:\n");
     scanf("%f",&employees[i].salary);
     printf("Emp_age:\n ");
     scanf("%d",&employees[i].age);
  } 
  //display employee details which salary is more than 15000

  printf("\n Employee Details which salary is more than 15000\n");
  for(i=0;i<=3;i++)
  {
      if(employees[i].salary>15000)
      {
          printf("\nEmp_id: %d\n",employees[i].emp_id);
          printf("Name: %s\n",employees[i].name);
          printf("Salary: %.2f\n",employees[i].salary);
          printf("Age: %d",employees[i].age);

      }
  }
  return 0;
}