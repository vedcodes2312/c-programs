#include <stdio.h>
#include <stdlib.h>

typedef struct emp 
{
    int eno;    // employee number
    int salary; // employee salary
} emp;          // semicolon very important at this stage

int main()
 {
    emp employees[5]; // Declare an array of 5 employees

    // Input details for each employee
    for (int i = 0; i < 5; i++)
     {
        printf("Enter details for employee %d\n", i + 1);

        printf("Enter employee number: ");
        scanf("%d", &employees[i].eno);

        printf("Enter employee salary: ");
        scanf("%d", &employees[i].salary);
    }

    // Display details for each employee
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Employee %d\n", i + 1);
        printf("Employee number: %d\n", employees[i].eno);
        printf("Employee salary: %d\n", employees[i].salary);
    }

    return 0;
}
