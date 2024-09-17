#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num != 0) {
        remainder = num % 10;  
        reverse = reverse * 10 + remainder; 
        num = num / 10;         
    }

    printf("Reverse = %d\n", reverse);

    if (reverse == originalNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
