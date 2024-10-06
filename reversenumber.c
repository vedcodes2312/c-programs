// program to show reverse of a given number        
#include<stdio.h>


int main() 
{
    int number, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;              // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversed number
        number /= 10;                         // Remove the last digit, number = number / 10
    }//number=number/10

    // Print the reversed number
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}

