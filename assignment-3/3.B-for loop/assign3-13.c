#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    if (n == 1) {
        printf("1\n");
        return 0;
    }
    int first = 1, second = 1;

    printf("%d", first);
    if (n > 1) {
        printf(", %d", second);
    }
    for (int i = 3; i <= n; i++) {
        int next = first + second; 
        printf(", %d", next);
        first = second;
        second = next;  
    }
    printf("\n");
    return 0;
}

