#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; 
    } else {
        return base * power(base, exponent - 1); 
    }
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Power is not defined for negative exponents.\n");
    } else {
        int result = power(base, exponent);
        printf("%d raised to the power of %d is %d\n", base, exponent, result);
    }

    return 0;
}
