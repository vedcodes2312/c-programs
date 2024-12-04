//static keyword with function
#include <stdio.h>

static void printMessage() 
{ // static function
    printf("Hello, World!\n");
}

int main() 
{
    printMessage(); // Output: Hello, World!
    return 0;
}
