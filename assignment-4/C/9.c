#include <stdio.h>

int calculator(int num1, int num2, int operator, int *result) {
    switch (operator) {
        case '+':
            *result = num1 + num2;
            break;
        case '-':
            *result = num1 - num2;
            break;
        case '*':
            *result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                return 1; 
            }
            *result = num1 / num2;
            break;
        default:
            return 2; 
    }

    return 0;
}

int main() {
    int num1, num2, operator, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %lc", &operator);

    int error = calculator(num1, num2, operator, &result);

    if (error == 0) {
        printf("Result: %d\n", result);
    } else if (error == 1) {
        printf("Error: Division by zero\n");
    } else {
        printf("Error: Invalid operator\n");
    }

    return 0;
}
