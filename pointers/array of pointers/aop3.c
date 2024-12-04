#include <stdio.h>

int main() {
    // Define a 2D array with fixed dimensions
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Array of pointers to the rows of the 2D array
    int* ptr[3] = { array[0], array[1], array[2] };

    // Print the values and addresses
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Value at array[%d][%d]: %d\tAddress: %p\n", i, j, ptr[i][j], (void*)&ptr[i][j]);
        }
    }

    return 0;
}
