#include <stdio.h>
#include <math.h>

int main() {
    printf("Prime numbers between 1 and 100:\n");
    for (int num = 2; num <= 100; num++) {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) { 
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    
    printf("\n\n"); 

    printf("Armstrong numbers between 1 and 500:\n");
    for (int num = 1; num <= 500; num++) {
        int originalNum = num;
        int result = 0;
        int n = (int)log10(num) + 1; 

    
        while (originalNum != 0) {
            int remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}
