// to understand recursive function
#include<stdio.h>
int sum(int n); //declaration
void main()
{
    int n,result;
    printf("enter value of n: \t");
    scanf("%d",&n);
    result=sum(n);
    printf("\n sum=%d",result);
}
int sum(int n)
{
    if(n != 0)
    {
        return ( n + sum(n-1) );    //recursive case
    }
    else
    {
        return n;
    }
}

/* explaination by ChatGPT

A recursive function is a function that calls itself in order to solve a problem. 
It breaks down a complex problem into smaller instances of the same problem, 
allowing the solution to be built progressively through these smaller instances. 
For recursion to work correctly, two main components are required:

Base Case: This is a condition that stops the recursion. Without a base case, 
the function would continue calling itself indefinitely, leading to 
infinite recursion and eventually causing a stack overflow. 
The base case defines the simplest, smallest instance of the problem that can be 
solved without further recursion.

Recursive Case: This is the part of the function where it calls itself with a smaller or simpler 
version of the original problem. Each recursive call brings the function closer to the base case.

Code Breakdown
The code provided is a simple implementation of a recursive function to calculate the sum of numbers from 1
Function Declaration:


int sum(int n); // declaration
Here, the function sum is declared to take an integer parameter n and return an integer value. This informs the compiler about the existence of the function.

Main Function (main):


void main()
{
    int n, result;
    printf("enter value of n: \t");
    scanf("%d", &n);
    result = sum(n);
    printf("\n sum=%d", result);
}
int n, result;  : Declares two integer variables, n (to store the input) and result (to store the final sum).
printf("enter value of n: \t");  : Prompts the user to enter a value for n.
scanf("%d", &n);    : Reads the integer value entered by the user and stores it in n.
result = sum(n);  : Calls the sum function with n as the argument, and the returned result is stored in result.
printf("\n sum=%d", result);  : Prints the final sum.

Recursive Function (sum):


int sum(int n)
{
    if (n != 0)
    {
        return (n + sum(n - 1));
    }
    else
    {
        return n;
    }
}
This function uses recursion to calculate the sum.
Base Case: if (n != 0). The recursion continues as long as n is not zero. When n becomes zero, the function stops calling itself and returns 0.
Recursive Call: return (n + sum(n - 1));. This line adds n to the sum of all previous numbers (by calling sum(n - 1)), thus creating a chain of additions.
Example Execution
Suppose the user enters n = 5.

sum(5) calls sum(4) and returns 5 + sum(4).
sum(4) calls sum(3) and returns 4 + sum(3).
sum(3) calls sum(2) and returns 3 + sum(2).
sum(2) calls sum(1) and returns 2 + sum(1).
sum(1) calls sum(0) and returns 1 + sum(0).
sum(0) reaches the base case and returns 0.
The recursion then resolves, giving the final result: 5 + 4 + 3 + 2 + 1 = 15. This result is printed in the main function.   */