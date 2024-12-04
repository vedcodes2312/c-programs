#include <stdio.h>

void incrementCounter() 
{
    static int counter = 0; // static local variable
    counter++;
    printf("Counter: %d\n", counter);
}

int main() 
{
    incrementCounter(); // Output: Counter: 1
    incrementCounter(); // Output: Counter: 2
    incrementCounter(); // Output: Counter: 3
    return 0;
}
