#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};  // Define and initialize the array
    int *ptr[3];  // Define the array of pointers

    for (int i = 0; i < 3; i++) 
    {
        ptr[i] = &a[i];  // Assign the address of each element to the array of pointers
    }

    // Traverse the array and print the details
    for (int i = 0; i < 3; i++) 
    {
        printf("Pointer ptr[%d]: %p \n", i, ptr[i]);  // Address stored in ptr[i]
        printf("Address of a[%d]: %p \n", i, &a[i]);  // Address of a[i]
        printf("Value at ptr[%d]: %d \n", i, *ptr[i]);  // Value pointed by ptr[i]
        printf("Value of a[%d]: %d \n", i, a[i]);  // Value of a[i]
        printf("Element address of ptr[%d]: %p \n\n", i, (void*)&ptr[i]);  // Address of ptr[i] itself
    }

    return 0;
}
