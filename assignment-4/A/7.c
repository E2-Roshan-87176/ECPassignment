#include <stdio.h>

// Function to print Fibonacci series up to 'n' terms
void printFibonacci(int n) {
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }
    
    unsigned long long int a = 0, b = 1;
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%llu ", a); 
        } else if (i == 1) {
            printf("%llu ", b); 
        } else {
            unsigned long long int next = a + b;
            a = b;
            b = next;
            printf("%llu ", next); 
        }
    }
    printf("\n"); 
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacci(terms);

    return 0;
}

