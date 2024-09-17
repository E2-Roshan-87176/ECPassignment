#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;
    
    int temp = number;
    while (temp > 0) {
        sum += temp % 10;  
        temp /= 10;        
    }
    printf("Sum of digits: %d\n", sum);

    return 0;
}

