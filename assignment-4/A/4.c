#include <stdio.h>

// Global error flag
int error_flag = 0;

// Function to perform the calculation based on the operator
double calculate(double operand1, double operand2, char operator) {
    double result;
    
    error_flag = 0;

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                error_flag = 1;
                result = 0;
            }
            break;
        default:
            error_flag = 2;
            result = 0; 
            break;
    }

    return result;
}

int main() {
    double operand1, operand2;
    char operator;

    printf("Enter the first operand: ");
    scanf("%lf", &operand1);
    
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);  
    
    printf("Enter the second operand: ");
    scanf("%lf", &operand2);
    
    double result = calculate(operand1, operand2, operator);

    if (error_flag == 1) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (error_flag == 2) {
        printf("Error: Invalid operator.\n");
    } else {
        printf("Result: %.2lf\n", result);
    }
    
    return 0;
}

