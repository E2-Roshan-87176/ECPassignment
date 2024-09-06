#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("\nfloat: %zu bytes", sizeof(float));
    printf("\n  Minimum: %e", FLT_MIN);
    printf("\n  Maximum: %e", FLT_MAX);
    printf("\n  Precision: %d", FLT_DIG);

    printf("\ndouble: %zu bytes", sizeof(double));
    printf("\n  Minimum: %e", DBL_MIN);
    printf("\n  Maximum: %e", DBL_MAX);
    printf("\n  Precision: %d", DBL_DIG);

    printf("\nlong double: %zu bytes", sizeof(long double));
    printf("\n  Minimum: %Le", LDBL_MIN);
    printf("\n  Maximum: %Le", LDBL_MAX);
    printf("\n  Precision: %d", LDBL_DIG);

    return 0;
}

