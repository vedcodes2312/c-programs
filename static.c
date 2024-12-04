#include <stdio.h>

// Static global variable
static int globalCounter = 0;

// Static function
static void incrementGlobalCounter() 
{
    globalCounter++;
    printf("Global Counter: %d\n", globalCounter);
}

void incrementLocalCounter() 
{
    // Static local variable
    static int localCounter = 0;
    localCounter++;
    printf("Local Counter: %d\n", localCounter);
}

int main() {
    // Demonstrate static local variable
    incrementLocalCounter(); // Output: Local Counter: 1
    incrementLocalCounter(); // Output: Local Counter: 2

    // Demonstrate static global variable and function
    incrementGlobalCounter(); // Output: Global Counter: 1
    incrementGlobalCounter(); // Output: Global Counter: 2

    return 0;
}
