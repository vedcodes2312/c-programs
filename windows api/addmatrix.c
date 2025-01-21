#include <windows.h>
#include <stdio.h>

#define ID_BUTTON_CALCULATE 1

// Matrix size
#define ROWS 2
#define COLS 2

// Global variables to store matrix elements
HWND hMatrixA[ROWS][COLS], hMatrixB[ROWS][COLS], hMatrixResult[ROWS][COLS], hButton;

// Function to handle the window messages
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    char buffer[10];
    int matrixA[ROWS][COLS], matrixB[ROWS][COLS], result[ROWS][COLS];

    switch (uMsg) {
        case WM_CREATE:
            // Create UI elements for Matrix A
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                    hMatrixA[i][j] = CreateWindow("EDIT", "0", WS_CHILD | WS_VISIBLE | WS_BORDER | ES_NUMBER,
                                                  50 + j * 50, 50 + i * 30, 40, 25, hwnd, NULL, NULL, NULL);
                    hMatrixB[i][j] = CreateWindow("EDIT", "0", WS_CHILD | WS_VISIBLE | WS_BORDER | ES_NUMBER,
                                                  200 + j * 50, 50 + i * 30, 40, 25, hwnd, NULL, NULL, NULL);
                    hMatrixResult[i][j] = CreateWindow("STATIC", "", WS_CHILD | WS_VISIBLE | WS_BORDER,
                                                       350 + j * 50, 50 + i * 30, 40, 25, hwnd, NULL, NULL, NULL);
                }
            }

            // Create Calculate button
            hButton = CreateWindow("BUTTON", "Calculate", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                   150, 150, 100, 30, hwnd, (HMENU) ID_BUTTON_CALCULATE, NULL, NULL);

            break;

        case WM_COMMAND:
            if (LOWORD(wParam) == ID_BUTTON_CALCULATE) {
                // Read values from input fields
                for (int i = 0; i < ROWS; i++) {
                    for (int j = 0; j < COLS; j++) {
                        GetWindowText(hMatrixA[i][j], buffer, 10);
                        matrixA[i][j] = atoi(buffer);
                        GetWindowText(hMatrixB[i][j], buffer, 10);
                        matrixB[i][j] = atoi(buffer);
                        result[i][j] = matrixA[i][j] + matrixB[i][j];
                        sprintf(buffer, "%d", result[i][j]);
                        SetWindowText(hMatrixResult[i][j], buffer);
                    }
                }
            }
            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "MatrixAdditionApp";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    HWND hwnd = CreateWindow("MatrixAdditionApp", "Matrix Addition",
                             WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500, 300,
                             NULL, NULL, hInstance, NULL);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
