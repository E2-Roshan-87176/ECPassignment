#include <stdio.h>

void printBinary(int num) {
    if (num > 0) {
        printBinary(num / 2); 
        printf("%d", num % 2);
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Binary representation is not defined for negative numbers.\n");
    } else {
        printBinary(num);
        printf("\n");
    }

    return 0;
}
