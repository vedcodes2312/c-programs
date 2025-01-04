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

for(int i = 0; i < 5; i++)
{
    printf("Enter Employee ID: ");
    scanf("%d", &empparray[i].id);
    printf("Enter Employee Name: ");
    scanf("%s", empparray[i].name);
    printf("Enter Employee Salary: ");
    scanf("%f", &empparray[i].salary);

}
free(empparray);
}

