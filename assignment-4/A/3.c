#include <stdio.h>

// Function to perform the calculation based on the operator
double calculate(double operand1, double operand2, char operator) {
    double result;

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
                printf("Error: Division by zero is not allowed.\n");
                return 0; 
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 0; 
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
    if (operator == '/' && operand2 == 0) {
        
    } else {
        printf("Result: %.2lf\n", result);
    }
    
    return 0;
}

