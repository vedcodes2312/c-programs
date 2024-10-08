//Palindrome number
#include<stdio.h>


int main() 
{
    int number, reversedNumber = 0, remainder,originalnumber;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalnumber=number;
    while (number != 0) {
        remainder = number % 10;              // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversed number
        number /= 10;                         // Remove the last digit, number = number / 10
    }//number=number/10

    // Print the reversed number
    printf("Reversed Number: %d\n", reversedNumber);

    if(originalnumber == reversedNumber)
    {
        printf("\n number is palindrome");
    }
    else
    {

        printf("\n number is not palindrome");
    }

    return 0;
}

