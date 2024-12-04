#include <stdio.h>
#include <limits.h>

int main() 
{
    // Integer limits
    printf("CHAR_BIT: %d\n", CHAR_BIT); // Number of bits in a char
    printf("SCHAR_MIN: %d\n", SCHAR_MIN); // Minimum value of a signed char
    printf("SCHAR_MAX: %d\n", SCHAR_MAX); // Maximum value of a signed char
    printf("UCHAR_MAX: %u\n", UCHAR_MAX); // Maximum value of an unsigned char

    printf("CHAR_MIN: %d\n", CHAR_MIN); // Minimum value of a char
    printf("CHAR_MAX: %d\n", CHAR_MAX); // Maximum value of a char

    printf("SHRT_MIN: %d\n", SHRT_MIN); // Minimum value of a short
    printf("SHRT_MAX: %d\n", SHRT_MAX); // Maximum value of a short
    printf("USHRT_MAX: %u\n", USHRT_MAX); // Maximum value of an unsigned short

    printf("INT_MIN: %d\n", INT_MIN); // Minimum value of an int
    printf("INT_MAX: %d\n", INT_MAX); // Maximum value of an int
    printf("UINT_MAX: %u\n", UINT_MAX); // Maximum value of an unsigned int

    printf("LONG_MIN: %ld\n", LONG_MIN); // Minimum value of a long
    printf("LONG_MAX: %ld\n", LONG_MAX); // Maximum value of a long
    printf("ULONG_MAX: %lu\n", ULONG_MAX); // Maximum value of an unsigned long

    printf("LLONG_MIN: %lld\n", LLONG_MIN); // Minimum value of a long long
    printf("LLONG_MAX: %lld\n", LLONG_MAX); // Maximum value of a long long
    printf("ULLONG_MAX: %llu\n", ULLONG_MAX); // Maximum value of an unsigned long long

    return 0;
}
