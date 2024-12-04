#include <stdio.h>
#include <assert.h>

int factorial(int n) 
{
    assert(n >= 0); // Assert that the input is non-negative
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() 
{
    int num = 5;
    int result;

    result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);

    // This will cause the assertion to fail and terminate the program
    num = -1;
    result = factorial(num);

    return 0;
}

/*In C, the <assert.h> header file contains the assert macro, which is used for debugging purposes. 
The assert macro helps validate assumptions made by the program and can catch bugs early during development 
by terminating the program when an assertion fails.

Key Function in <assert.h>
assert(expression)

How assert Works
The assert macro checks the specified expression. If the expression evaluates to false (zero), 
assert writes an error message to the standard error stream (stderr) and calls the abort 
function to terminate the program. 
assert Macro: Used to validate assumptions during program execution. 
If the assumption is false, it prints an error message and terminates the program.

Usage: Ideal for catching bugs and ensuring program correctness during development. 
Not typically used in production code.    */