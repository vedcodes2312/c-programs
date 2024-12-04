#include <stdio.h>
#include <assert.h>

int max(int a, int b) 
{
    // Using the ternary operator to find the maximum value
    return (a > b) ? a : b;
}

int main() 
{
    int x = 10;
    int y = 20;

    // Calculate the maximum of x and y
    int maximum = max(x, y);

    // Assert that the maximum is correct
    assert(maximum == 20 ? 1 : 0);

    printf("The maximum value is %d\n", maximum);

    // Intentional failure to demonstrate assert
    x = 30;
    maximum = max(x, y);
    assert(maximum == 20 ? 1 : 0); // This will fail and abort the program

    return 0;
}
