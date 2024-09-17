#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }
    int originalNum1 = num1; 
    int originalNum2 = num2;

    printf("Calculating GCD of %d and %d:\n", originalNum1, originalNum2);

    while (num2 != 0) {
        temp = num1 % num2; 
        printf("%d %% %d = %d\n", num1, num2, temp); 
        num1 = num2; 
        num2 = temp; 
    }
    printf("GCD of %d and %d is %d\n", originalNum1, originalNum2, num1);

    return 0;
}

