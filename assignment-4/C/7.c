#include <stdio.h>

int sum, product; 

int calculateSumAndProduct(int num1, int num2) {
    sum = num1 + num2;
    product = num1 * num2;
    return 0;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculateSumAndProduct(a, b);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
