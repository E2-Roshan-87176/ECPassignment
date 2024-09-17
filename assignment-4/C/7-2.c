#include <stdio.h>
// without using global variable
int calculateSumAndProduct(int num1, int num2, int *sum, int *product) {
    *sum = num1 + num2;
    *product = num1 * num2;
    return 0;
}

int main() {
    int a, b, sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculateSumAndProduct(a, b, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
