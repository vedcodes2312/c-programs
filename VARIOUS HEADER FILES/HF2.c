#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main() 
{
    // Character type limits
    printf("CHAR_BIT    : %d\n", CHAR_BIT);    // Number of bits in a char
    printf("SCHAR_MIN   : %d\n", SCHAR_MIN);   // Minimum value of signed char
    printf("SCHAR_MAX   : %d\n", SCHAR_MAX);   // Maximum value of signed char
    printf("UCHAR_MAX   : %u\n", UCHAR_MAX);   // Maximum value of unsigned char

    printf("CHAR_MIN    : %d\n", CHAR_MIN);    // Minimum value of char
    printf("CHAR_MAX    : %d\n", CHAR_MAX);    // Maximum value of char

    // Short type limits
    printf("SHRT_MIN    : %d\n", SHRT_MIN);    // Minimum value of short
    printf("SHRT_MAX    : %d\n", SHRT_MAX);    // Maximum value of short
    printf("USHRT_MAX   : %u\n", USHRT_MAX);   // Maximum value of unsigned short

    // Integer type limits
    printf("INT_MIN     : %d\n", INT_MIN);     // Minimum value of int
    printf("INT_MAX     : %d\n", INT_MAX);     // Maximum value of int
    printf("UINT_MAX    : %u\n", UINT_MAX);    // Maximum value of unsigned int

    // Long type limits
    printf("LONG_MIN    : %ld\n", LONG_MIN);   // Minimum value of long
    printf("LONG_MAX    : %ld\n", LONG_MAX);   // Maximum value of long
    printf("ULONG_MAX   : %lu\n", ULONG_MAX);  // Maximum value of unsigned long

    // Long long type limits
    printf("LLONG_MIN   : %lld\n", LLONG_MIN); // Minimum value of long long
    printf("LLONG_MAX   : %lld\n", LLONG_MAX); // Maximum value of long long
    printf("ULLONG_MAX  : %llu\n", ULLONG_MAX);// Maximum value of unsigned long long

    // Additional integer type limits (stdint.h)
    printf("INT8_MIN    : %d\n", INT8_MIN);    // Minimum value of int8_t
    printf("INT8_MAX    : %d\n", INT8_MAX);    // Maximum value of int8_t
    printf("UINT8_MAX   : %u\n", UINT8_MAX);   // Maximum value of uint8_t

    printf("INT16_MIN   : %d\n", INT16_MIN);   // Minimum value of int16_t
    printf("INT16_MAX   : %d\n", INT16_MAX);   // Maximum value of int16_t
    printf("UINT16_MAX  : %u\n", UINT16_MAX);  // Maximum value of uint16_t

    printf("INT32_MIN   : %d\n", INT32_MIN);   // Minimum value of int32_t
    printf("INT32_MAX   : %d\n", INT32_MAX);   // Maximum value of int32_t
    printf("UINT32_MAX  : %u\n", UINT32_MAX);  // Maximum value of uint32_t

    printf("INT64_MIN   : %lld\n", INT64_MIN); // Minimum value of int64_t
    printf("INT64_MAX   : %lld\n", INT64_MAX); // Maximum value of int64_t
    printf("UINT64_MAX  : %llu\n", UINT64_MAX);// Maximum value of uint64_t

    return 0;
}
