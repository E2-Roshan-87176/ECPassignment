#include <stdio.h>

int main() {
    int base, index;
    long long result = 1; 

 
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the index (exponent): ");
    scanf("%d", &index);

    if (index < 0) {
        printf("Index (exponent) should be a non-negative integer.\n");
        return 1;
    }
    for (int i = 0; i < index; i++) {
        result *= base;
    }
    printf("%d^%d = %lld\n", base, index, result);

    return 0;
}

