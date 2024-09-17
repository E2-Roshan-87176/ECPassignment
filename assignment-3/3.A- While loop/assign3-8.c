#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int originalNumber = number;
    int factor = 2; 
    int firstFactor = 1; 

    printf("%d = ", originalNumber);

    while (number > 1) {
        if (number % factor == 0) { 
            if (!firstFactor) {
                printf(" * "); 
            }
            printf("%d", factor);
            number /= factor;
            firstFactor = 0; 
        } else {
            factor++;
        }
    }

    printf("\n");
    return 0;
}

