//program to understand basic concept of structures in C programming language

#include <stdio.h>
#include <stdlib.h>
typedef struct emp
{
    int eno; //employee number
    int salary; //employee salary
}emp;         //semicolon very important at this stage
 
int main()
{

system("cls");
emp emp1;
printf("enter employee number: \t");
scanf("%d",&emp1.eno);
printf("enter employee salary: \t");
scanf("%d",&emp1.salary);
printf("employee number: %d\n",emp1.eno);
printf("employee salary: %d\n",emp1.salary);

return 0;

}
 
