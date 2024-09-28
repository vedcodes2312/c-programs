/*

In an organization, employees are paid on an hourly basis. Clerks are
paid 100/hr, Teachers are paid 200/hr and the principal is paid 400/hr. If the
weekly hours exceed 44, then employees should be paid 2 times their regular
pay for the overtime. Write a C program to compute the weekly salary of the
employee and also the program should take care that the employee should not
be paid for hours beyond 50 in a week. Use the best suitable control construct
to implement the program.            */




#include <stdio.h>
int main()
{
  int hours,emptype;
  int hourlywage,weeklysalary;
  printf("enter hours worked\n");
  scanf("%d",&hours);
  if(hours>50)
  {
      printf("max hrs are 50\n");
  }
  printf("enter employee type 1) clerk 2) TEACHER 3)principal\n");
  scanf("%d",&emptype);
  switch(emptype)
  {
case 1:
    hourlywage = 100;
    break;
    
    case 2:
    hourlywage = 200;
    break;
    
    case 3:
    hourlywage = 400;
    break;
    default:
    printf("invalid\n");
    return 1;
  }
  if(hours<=44)
  {
      weeklysalary=hours*hourlywage;
  }
    else
   {
       weeklysalary = (44*hourlywage)+((hours-44)*2*hourlywage);
   }
   printf("weekly salary is %d \n",weeklysalary);
   return 0;
} 

