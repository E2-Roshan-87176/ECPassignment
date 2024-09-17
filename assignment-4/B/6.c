#include <stdio.h>

void printHexadecimal(int num) {
    if (num > 0) {
        printHexadecimal(num / 16); 
        printf("%X", num % 16); 
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Hexadecimal representation is not defined for negative numbers.\n");
    } else {
        printHexadecimal(num);
        printf("\n");
    }

    return 0;
}
