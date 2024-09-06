#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("\n char: %zu bytes, %d to %d", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("\n unsigned char: %zu bytes, 0 to %u", sizeof(unsigned char), UCHAR_MAX);
    printf("\n short int: %zu bytes, %hd to %hd", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n unsigned short int: %zu bytes, 0 to %hu", sizeof(unsigned short int), USHRT_MAX);
    printf("\n int: %zu bytes, %d to %d", sizeof(int), INT_MIN, INT_MAX);
    printf("\n unsigned int: %zu bytes, 0 to %u", sizeof(unsigned int), UINT_MAX);
    printf("\n long int: %zu bytes, %ld to %ld", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("\n unsigned long int: %zu bytes, 0 to %lu", sizeof(unsigned long int), ULONG_MAX);

    return 0;
}

