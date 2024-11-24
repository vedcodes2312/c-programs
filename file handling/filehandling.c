#include <stdio.h>

int main() {
    // Open the file in read mode ("r")
    FILE *file = fopen("examplefile.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) 
    {
        // If file could not be opened, print an error and exit
        printf("Could not open file examplefile.txt for reading.\n");
        return 1; // Exit with error code
    }

    // Read and print each character of the file until EOF (End of File) is reached
    char ch;
    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);  // Print each character read from the file
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
