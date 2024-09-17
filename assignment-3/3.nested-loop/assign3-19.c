#include <stdio.h>

int main() {
    int start, end, i, j;

    
    printf("Enter the range (two numbers): ");
    scanf("%d %d", &start, &end);

    
    if (start > end) {
        printf("Invalid range. The start number should be less than or equal to the end number.\n");
        return 1; 
    }

    
    for (i = start; i <= end; i++) {
        
        for (j = start; j <= end; j++) {
            printf("%d\t", i * j);
        }
        
        printf("\n");
    }

    return 0;
}

