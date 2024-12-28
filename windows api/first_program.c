#include<windows.h>
int main() 
{
    MessageBox(
        NULL,                       // Handle to the owner window
        "Hello, Windows API!",      // Message text
        "Hello World",              // Message box title
        MB_OK | MB_ICONINFORMATION  // Buttons and icon
    );
    return 0;
}
