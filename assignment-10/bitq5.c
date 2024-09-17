#include <stdio.h>

char isAlpha(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch ^ 32;  
    }
    else if (ch >= 'A' && ch <= 'Z') {
        return ch ^ 32;  
    } 
    else {
        return ch;
    }
}

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf("%c", &inputChar);

    char result = isAlpha(inputChar);

    printf("Result after XOR operation: %c\n", result);

    return 0;
}

