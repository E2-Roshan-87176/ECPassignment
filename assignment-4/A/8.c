#include <stdio.h>

// Function to return the next term of the Fibonacci series
int next_fibonacci() {
    static int a = 0; 
    static int b = 1;
    int next_term = a;

    a = b;          
    b = next_term + b; 

    return next_term;
}

int main() {
    int n;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", next_fibonacci());
    }
    
    printf("\n");
    return 0;
}
