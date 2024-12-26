#include <stdio.h>

void printChristmasTree(int height) {
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        // Print stars in green
        printf("\033[32m"); // Green color
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\033[0m\n"); // Reset color
    }
    // Print the trunk
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < height - 1; j++) {
            printf(" ");
        }
        printf("\033[32m|\033[0m\n"); // Green color for trunk
    }
}

int main() {
    int height;

    // Set height for the Christmas tree
    printf("Enter the height of the Christmas tree: ");
    scanf("%d", &height);

    // Print the tree
    printChristmasTree(height);

    // Print "Merry Christmas" in red
    printf("\033[31m\nMerry Christmas\n\033[0m"); // Red color

    // Print "Happy New Year 2025" in yellow
    printf("\033[33mHappy New Year 2025\n\033[0m"); // Yellow color

    return 0;
}
