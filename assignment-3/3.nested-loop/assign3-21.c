#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int input, count = 0, num = 0;

    
    printf("Enter a number: ");
    scanf("%d", &input);

    
    num = input + 1;

    printf("First 5 prime numbers after %d:\n", input);
    
    
    while (count < 5) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++; 
        }
        num++; 
    }

    printf("\n"); 
    return 0;
}
