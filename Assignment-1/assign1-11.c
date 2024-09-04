#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Range of  char is [%d, %d].\n", CHAR_MIN, CHAR_MAX);
    printf("Range of unsigned char is [%u, %u].\n", 0, UCHAR_MAX);

    printf("Range of short int is [%hd, %hd].\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int is [%d, %hu].\n", 0, USHRT_MAX);
	printf("Range of int is [%d, %d].\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned int is [%u, %u].\n", 0, USHRT_MAX);

    printf("Range of long int is [%ld, %ld].\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int is [%d, %lu].\n", 0, ULONG_MAX);

    return 0;
}
