//program to understand concept of pointers

#include <stdio.h>

int main()
 {
    int a = 5;      // Initialize an integer variable a
    int *b;        // Declare a pointer variable b

    b = &a;        // Assign the address of a to b

    // Print the value of a
    printf("Value of a: %d\n", a);
    // Print the value of b (address of a)
    printf("Address stored in b (address of a): %p\n", b);
    // Print the address of a
    printf("Address of a: %p\n", &a);
    // Print the value pointed to by b (value of a)
    printf("Value pointed to by b: %d\n", *b);

    return 0;
}
