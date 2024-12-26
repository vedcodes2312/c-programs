#include <stdio.h>
#include <stdlib.h>

// ANSI color codes for colored text
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

void printChristmasTree(int height) 
{
    for (int i = 1; i <= height; i++) 
    {
        // Print spaces
        for (int j = 0; j < height - i; j++) 
        {
            printf(" ");
        }
        // Print stars in green
        printf(GREEN);
        for (int j = 0; j < 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf(RESET "\n");
    }
    // Print the trunk
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < height - 1; j++) 
        {
            printf(" ");
        }
        printf(GREEN "|" RESET "\n");
    }
}

int main() 
{
    system("clear"); // Clear the screen
    int height;

    // Set height for the Christmas tree
    printf("Enter the height of the Christmas tree: ");
    scanf("%d", &height);

    // Print the tree
    printChristmasTree(height);

    // Print "Merry Christmas" in red
    printf(RED "\nMerry Christmas\n" RESET);

    // Print "Happy New Year 2025" in yellow
    printf(YELLOW "Happy New Year 2025\n" RESET);

    return 0;
}
