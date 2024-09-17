#include <stdio.h>

int main() {
    // Pattern 1
    printf("Pattern 1:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 2: 
    printf("\nPattern 2:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 3: 
    printf("\nPattern 3:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 4:
    printf("\nPattern 4:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 5: 
    printf("\nPattern 5:\n");
    char ch;
    

    for (ch = 'G'; ch >= 'A'; ch -= 2) {
        for (char k = ch; k <= 'G'; k++) {
            printf("%c ", k);
        }
        for (char k = 'F'; k >= ch; k--) {
            printf("%c ", k);
        }
        printf("\n");
    }
    for (ch = 'C'; ch <= 'E'; ch += 2) {
        for (char k = ch; k <= 'G'; k++) {
            printf("%c ", k);
        }
        for (char k = 'F'; k >= ch; k--) {
            printf("%c ", k);
        }
        printf("\n");
    }
    printf("\nPattern 6:\n");
    for (char row = 'A'; row <= 'D'; row++) {
        for (char col = row; col <= 'D'; col++) {
            printf("%c ", col);
        }
        printf("\n");
    }

    return 0;
}
