#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    // Limits from limits.h
    printf("CHAR_BIT    : %d\n", CHAR_BIT);
    printf("SCHAR_MIN   : %d\n", SCHAR_MIN);
    printf("SCHAR_MAX   : %d\n", SCHAR_MAX);
    printf("UCHAR_MAX   : %u\n", UCHAR_MAX);

    printf("SHRT_MIN    : %d\n", SHRT_MIN);
    printf("SHRT_MAX    : %d\n", SHRT_MAX);
    printf("USHRT_MAX   : %u\n", USHRT_MAX);

    printf("INT_MIN     : %d\n", INT_MIN);
    printf("INT_MAX     : %d\n", INT_MAX);
    printf("UINT_MAX    : %u\n", UINT_MAX);

    printf("LONG_MIN    : %ld\n", LONG_MIN);
    printf("LONG_MAX    : %ld\n", LONG_MAX);
    printf("ULONG_MAX   : %lu\n", ULONG_MAX);

    printf("LLONG_MIN   : %lld\n", LLONG_MIN);
    printf("LLONG_MAX   : %lld\n", LLONG_MAX);
    printf("ULLONG_MAX  : %llu\n", ULLONG_MAX);

    // Limits from stdint.h and inttypes.h
    printf("INT8_MIN    : %" PRId8 "\n", INT8_MIN);
    printf("INT8_MAX    : %" PRId8 "\n", INT8_MAX);
    printf("UINT8_MAX   : %" PRIu8 "\n", UINT8_MAX);

    printf("INT16_MIN   : %" PRId16 "\n", INT16_MIN);
    printf("INT16_MAX   : %" PRId16 "\n", INT16_MAX);
    printf("UINT16_MAX  : %" PRIu16 "\n", UINT16_MAX);

    printf("INT32_MIN   : %" PRId32 "\n", INT32_MIN);
    printf("INT32_MAX   : %" PRId32 "\n", INT32_MAX);
    printf("UINT32_MAX  : %" PRIu32 "\n", UINT32_MAX);

    printf("INT64_MIN   : %" PRId64 "\n", INT64_MIN);
    printf("INT64_MAX   : %" PRId64 "\n", INT64_MAX);
    printf("UINT64_MAX  : %" PRIu64 "\n", UINT64_MAX);

    return 0;
}
