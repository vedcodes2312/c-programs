#include <stdio.h>

static int globalCounter = 0; // static global variable

void incrementGlobalCounter() 
{
    globalCounter++;
    printf("Global Counter: %d\n", globalCounter);
}

int main() 
{
    incrementGlobalCounter(); // Output: Global Counter: 1
    incrementGlobalCounter(); // Output: Global Counter: 2
    return 0;
}
  /* static
In C, the static keyword has several uses, depending on where it's applied. 
It can be used with variables and functions, and its meaning differs slightly in each context. 

Static Variables
Inside a Function
When a variable is declared as static within a function, its value persists between function calls. 
It is initialized only once, and retains its value across multiple calls to the function.


At File Scope
When a variable is declared as static outside of all functions (at file scope), 
it means that the variable has internal linkage. This variable can only be accessed within
 the file in which it is declared, preventing name conflicts in other files.


Static Functions
When a function is declared as static, its scope is limited to the file in which it is declared. 
This means the function cannot be called from other files, providing encapsulation and preventing name conflicts.
Summary
Static Local Variables: Retain their value between function calls.

Static Global Variables: Limited to the file in which they are declared, preventing external linkage.

Static Functions: Limited to the file in which they are declared, providing encapsulation.
*/