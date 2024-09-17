#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    int i = 1;
    printf("Unique pairs of numbers whose product is %d:\n", number);
    
    while (i <= number / 2) {
        if (number % i == 0) { 
            int j = number / i; 
            printf("%d * %d = %d\n", i, j, number);
        }
        i++; 
    }

    return 0;
}

