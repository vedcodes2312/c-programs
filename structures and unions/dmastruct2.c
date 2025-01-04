#include<stdio.h>
#include<stdlib.h>

// define a struct

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(void)
{
    //declare a pointer to struct
struct Employee *empparray;

// Allocate memory for an array of 5 Employee structures
empparray = (struct Employee *)malloc(5 * sizeof(struct Employee));

// check if memory allocation was successful
if(empparray == NULL)
{
    printf("Memory allocation failed\n");
    return 1;
}

// Assign values to the structure members for each element in the array
    for (int i = 0; i < 5; i++) 
    {
        empparray[i].id = i + 1; // Just an example ID
        snprintf(empparray[i].name, sizeof(empparray[i].name), "Employee %d", i + 1);
        empparray[i].salary = 50000.00 + i * 1000; // Just an example salary
    }

    // Print the values of the structure members for each element in the array
    for (int i = 0; i < 5; i++) 
    {
        printf("Employee ID: %d\n", empparray[i].id);
        printf("Employee Name: %s\n", empparray[i].name);
        printf("Employee Salary: %.2f\n", empparray[i].salary);
        printf("\n");
    }

    free(empparray); // Free the allocated memory

    return 0;

}