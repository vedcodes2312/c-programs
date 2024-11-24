//realloc 

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    if (ptr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and print the allocated memory
    for (int i = 0; i < 5; i++) 
    {
        ptr[i] = i + 1;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Resize memory block to store 10 integers
    ptr = (int*)realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) 
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize and print the resized memory
    for (int i = 5; i < 10; i++) 
    {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) 
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);  // Free the allocated memory
    return 0;
}
