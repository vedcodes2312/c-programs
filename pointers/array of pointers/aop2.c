#include <stdio.h>

int main()
{
    // declaring some temp variables
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    // array of pointers to integers
    int* ptr_arr[3] = { &var1, &var2, &var3 };

    // traversing using loop
    for (int i = 0; i < 3; i++)
    {
        printf("Value of var%d: %d\tAddress: %p\tPointer Address: %p\n", i, *ptr_arr[i], ptr_arr[i], (void*)&ptr_arr[i]);
    }

    return 0;
}
