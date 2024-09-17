#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


long long binomial_coefficient(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void print_pascals_triangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

    
        for (int j = 0; j <= i; j++) {
            printf("%4lld", binomial_coefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    
    print_pascals_triangle(rows);

    return 0;
}

