#include<stdio.h>

int main()
{
    int i, n, c = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if n is less than 2
    if (n < 2) {
        printf("%d is neither a prime nor a composite number", n);
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            c = c + 1;
    }

    if (c == 2) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is a composite number", n);
    }

    return 0;
}